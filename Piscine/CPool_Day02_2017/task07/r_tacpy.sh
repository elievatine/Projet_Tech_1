cut -d: -f 1 | sed -n 1-2p | rev | sort -r | sed -n $MY_LINE1,$MY_LINE2'p' | sed -n 24,42p | sed 's/[^.$/./' 
