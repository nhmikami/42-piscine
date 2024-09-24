#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n '2~2 p' | awk -F ":" '{print $1}' | rev | sort -r | awk "NR==$FT_LINE1,NR==$FT_LINE2" | awk '{printf "%s, ", $0}' | sed 's/, $/./' | tr -d '\n' 
