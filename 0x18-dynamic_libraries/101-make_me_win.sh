#!/bin/bash
wget -P /tmp https://github.com/Kalunnenna1/alx-low_level_programming/tree/master/0x18-dynamic_libraries
export LD_PRELOAD=/tmp/libmask.so
