#!/bin/bash

# this is the prime part of the unix 3 assignment
# This is using the 6k+-1 Primality test

# echo "Enter number to test if prime:"

read num

if [[ $num -lt 3 ]]; then
    echo "$num is a prime number"
elif [[ $((num % 2)) -eq 0 || $((num % 3)) -eq 0 ]]; then
    echo "$num is not a prime number"
else
    i=5
    p=0
    while [[ $((i**2)) -le $num ]] 
    do
        if [[ $((num % i)) -eq 0 || $((num % (i+2))) -eq 0 ]]; then
            echo "$num is not a prime number"
            p=1
            i=$num
        else
            i=$((i+6))
        fi
    done
    if [[ $p -eq 0 ]]; then
        echo "$num is a prime number"
    fi
fi



