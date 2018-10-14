#!/bin/bash

# counter
# while[condition]
# do
#  code
# done

i=0
until((i>10))
do
	echo $i
	i=$((i+1))
done
