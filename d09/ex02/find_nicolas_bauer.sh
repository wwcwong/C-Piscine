cat $1 | grep -i "n" | grep -i "bomber" | rev | cut -d '	' -f 2 | rev
