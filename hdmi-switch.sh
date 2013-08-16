#!/bin/bash
if [ `xrandr | grep -c ' connected '` -eq 2 ]; then #dual-monitor
    if [ `xrandr | grep HDMI | grep -c ' connected '` -eq 1 ]; then
        xrandr --output HDM1-0 --pos 0x0 --output LVDS-0 --pos 0x1920
    fi
fi
sh ~/walls/random.sh &
exit 0
