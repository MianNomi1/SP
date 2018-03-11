#!/bin/bash

file=$1
count=0

if [ $# -ne 1 ]
   then
   echo "invalid arguments"
   exit 0
fi

while read line
 do
   ((count++))

   isEven=$((count%2))

   if [ $isEven -eq 0 ]
    then
    echo $line >> evenfile
   
    else
    echo $line >> oddfile

fi

done < $file
