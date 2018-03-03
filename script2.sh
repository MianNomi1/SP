#!/bin/bash

file1=$1
owner1=$2
file2=$3
owner2=$4
cheating=0

#checking for file's ownership

set `ls -li $file1`

if [ $owner1=$4 ]
then
echo $owner1 "didn't cheated"
else
echo "cheating"
fi

diff -c $file1 $file2
if [ $? -eq 0 ]
then
echo "cheated "
else
echo "not cheated "
fi
