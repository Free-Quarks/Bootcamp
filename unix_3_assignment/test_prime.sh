#!/bin/bash

# This is the final script for the unix 3 assignment 

# first to read in the integers file into an array and then we can pass it onto
# the prime.sh script to analyze the integers one by one. 

input="/home/lieffersj/Bootcamp/unix_3_assignment/integers.txt"

read -r -d IFS -a integers < ${input}

for num in ${integers[*]}
do
    echo "${num}" | ./prime.sh >> prime.out 2>> prime.err &
    wait
    echo "Exit status is: $?" >> prime.err
done

echo "All integers tested" 

