#!/bin/bash 

# this above line tells how to compile and run this script

# this line assigns the global envr variable USER to the script variable user,
# note that we can't uses spaces in bash
user=$USER

# this batch of code below impliments the required conditionals using envr
# variables and local ones
if [[ $OSTYPE == "linux-gnu" ]]; then
    echo "$user is using the Linux operating system"
else
    echo "$user is not using the Linux operating system"
fi

