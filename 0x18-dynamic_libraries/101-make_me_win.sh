#!/bin/bash
wget -o $PWD https://raw.github.com/kerotulu/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD=$PWD/libruin.so
