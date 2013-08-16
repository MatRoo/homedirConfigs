#!/bin/bash
set -x
export DISPLAY=:0

echo "blipp" > /tmp/blapp

hdmi_status="$(xrandr | grep HDMI)"
USERID="$(cat /var/run/ConsoleKit/database | grep -B 6 is_active=true | grep uid= | cut -f 2 -d '=')"
USER="$(grep $USERID /etc/passwd | cut -f 1 -d ':')"

if ( $hdmi_status | grep "disconnected" ); then
    [[ $(pgrep X) > 0 ]] && su $USER -c "xrandr --output HDMI1 --off"
else
    xrandr --output HDM1-0 --pos 0x0 --output LVDS-0 --pos 0x1920
fi

#ln -sf "/etc/alsa/asound.hdmi-$hdmi_status" /etc/asound.conf
#/usr/sbin/alsactl restore

exit 0
