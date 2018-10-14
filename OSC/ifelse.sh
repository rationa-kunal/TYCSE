#!/bin/bash

read -p "x : " x

# if [condition]
# then
#  code
# elif []
# then
#  code
# else
#  code
# fi

if ((x>10))
then
	echo "grter than 2"
elif ((x>5))
then
	echo "smaller than 10 grtr than 5"
else
	echo "default"
fi
