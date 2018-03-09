#!/bin/bash

showAllowners(){

    name=$1
  for i in `ls`
do

set `ls -li $i`
shift
    if [ -f $i ]
then 
	if [ $name = $3 ]
	then
        echo "OWNER:" $3
	echo  "FileName:"$9
        
	fi
fi
done

}

if [ $# -eq 1 ]
then
showAllowners $1
else
echo "invalid arguments"
fi

