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
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/yohei/rl_ws/src/segway_v3/segway_ros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/yohei/rl_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/yohei/rl_ws/install/lib/python2.7/dist-packages:/home/yohei/rl_ws/build/segway_ros/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/yohei/rl_ws/build/segway_ros" \
    "/usr/bin/python" \
    "/home/yohei/rl_ws/src/segway_v3/segway_ros/setup.py" \
    build --build-base "/home/yohei/rl_ws/build/segway_ros" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/yohei/rl_ws/install" --install-scripts="/home/yohei/rl_ws/install/bin"