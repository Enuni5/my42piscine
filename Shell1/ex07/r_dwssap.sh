#!/bin/bash
cat /etc/passwd | sed '/^#/d' | awk 'NR%2==false' | cut -d : -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ', ' | sed s/,$/.$/g
