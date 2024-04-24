#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/adeeb/carla-ros-bridge/catkin_ws/src/ros-bridge/carla_spectator_camera"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/adeeb/carla-ros-bridge/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/adeeb/carla-ros-bridge/catkin_ws/install/lib/python3/dist-packages:/home/adeeb/carla-ros-bridge/catkin_ws/build/carla_spectator_camera/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/adeeb/carla-ros-bridge/catkin_ws/build/carla_spectator_camera" \
    "/usr/bin/python3" \
    "/home/adeeb/carla-ros-bridge/catkin_ws/src/ros-bridge/carla_spectator_camera/setup.py" \
     \
    build --build-base "/home/adeeb/carla-ros-bridge/catkin_ws/build/carla_spectator_camera" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/adeeb/carla-ros-bridge/catkin_ws/install" --install-scripts="/home/adeeb/carla-ros-bridge/catkin_ws/install/bin"