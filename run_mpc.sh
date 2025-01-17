#!/usr/bin/env bash
# echo ${PWD}
export PYTHONPATH=$PYTHONPATH:${PWD}/carla/PythonAPI/carla/
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:"${PWD}/src/mpc_controller/src/acados/lib"
export ACADOS_SOURCE_DIR="${PWD}/src/mpc_controller/src/acados/"
# echo ${PYTHONPATH}
# bash carla/CarlaUE4.sh -quality-level=Low -carla-port=2000 &

# bash carla/CarlaUE4.sh -prefernvidia -quality-level=Low &
# bash carla/CarlaUE4.sh -ini:[/Script/Engine.RendererSettings]:r.GraphicsAdapter=2 -quality-level=Low &
sleep 3

source devel/setup.bash

roslaunch mpc_controller mpcc_all.launch

