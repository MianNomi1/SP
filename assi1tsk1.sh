#!/bin/bash

sortfiles()
{
   for i in `ls`
   do
     file=$i
     ext="${file##*.}"
     `mkdir $ext`
     `mv file ${file##*.}`
done
}

sortfiles
