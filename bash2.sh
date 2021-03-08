#!/bin/bash

input="/home/justin/bootcamp/Bootcamp/numbers.txt"

read -r -a numbers < $input

echo "${numbers[*]}"

echo ${numbers[1]}


