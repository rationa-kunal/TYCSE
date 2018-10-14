#!/bin/bash

# counter
# while[condition]
# do
#  code
# done

i=0
while((i<10))
do
	echo $i
	i=$((i+1))
done
