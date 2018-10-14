#!/bin/bash

get_date(){
	date
	return
}

get_date

get_sum(){
	# $1 $2 ...  are arguments
	local a=$1
	local b=$2
	z=$((a+b))

	# echo returns value from function
	echo $z
	return
}

pa=1
pb=2

# for execution $(function_name param)
z=$(get_sum pa pb)

echo $z

