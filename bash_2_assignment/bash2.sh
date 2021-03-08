#!/bin/bash

input="/home/lieffersj/Bootcamp/bash_2_assignment/numbers.txt"

read -r -a numbers < $input

# This function sees the variable number since it is a global variable and in
# bash these are passed to the functions. However sum is a local variable. 
total_sum () {
    local sum=0
    for num in ${numbers[*]}
    do
        sum=$((sum+num))
    done
    echo "$sum"
}

# the wording of this question is a little confusing but I think I understand
# from the example.
truncated_sum () {
    local sum=0
    local i=0
    numbers_sorted=($(for num in ${numbers[*]}; do echo $num; done |
    sort -n))
    while [[ $sum -lt $1 ]]
    do
        sum=$((sum+numbers_sorted[i]))
        ((i++))
    done
    echo "$sum"
}

# this vairable named numbers here doesnt change if we change the glocal one
# since it is local and a different variable entirely. 
name_sort () {
    local numbers=("Justin" "Jay" "Lieffers")
    name_sorted=($(for name in ${numbers[*]}; do echo $name; done | sort))
    echo ${name_sorted[*]}
}

# running commands as in assignment

total_sum

truncated_sum 800

truncated_sum 1000

truncated_sum 700

numbers=""

name_sort


