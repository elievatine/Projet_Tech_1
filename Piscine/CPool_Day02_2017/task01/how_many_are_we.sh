#!/bin/sh
if [ "$1" ]
then
	grep -iw $1 | wc -l
else
	wc -l
fi
