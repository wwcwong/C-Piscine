#!/bin/bash
cat /etc/passwd | sed '/^#/d' | awk 'NR==1 || NR%2==1' | cut -d ":" -f 1 | rev | sort -r -f | sed -n "$FT_LINE1,$FT_LINE2 p" | sed '$!s/$/,/' | tr "\n" " " | sed 's/.$/./'
