#!/bin/bash
expr $1 + 0 2>/dev/null

if [ $? -eq 0 ]
then
expr $2 + 0 2>/dev/null
if [ $? -eq 0 ]
then
echo "sum is :"       `expr $1 + $2`
echo "diffrence is :" `expr $1 - $2`
echo "product is :"   `expr $1 \* $2`
echo "division is :"  `expr $1 / $2`

else
echo "second wala bhi number nii"
fi
else
echo "yeh pehle wala number hee nii hai "
fi
