#!/bin/bash
echo $FT_NBR1 + $FT_NBR2 | tr \'\\ 01 | tr \"\?\! 234 | tr mrdoc 01234| sed "s/^/ibase=5;obase=D;/g" | bc | tr 0123456789ABCD "gtaio luSnemf"

