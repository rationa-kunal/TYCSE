#!/bin/bash

a=(1 2 3 4 5 6)

echo "0 index ${a[0]}"

for i in ${a[*]}
do
	echo $i
done


