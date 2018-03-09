#!/bin/bash

showTable(){

   if [ $# -eq 0 ]
then
 echo "No Arguments provided!"
   fi

   if [ $# -eq 2 ]
then
 echo "INVALID provided!"
   fi

   if [ $# -eq 4 ]
then
 echo "INVALID provided!"
   fi

   if [ $# -gt 6 ]
then 
echo "Arguments greater than limit"
  fi
      if [ $# -eq 1 ]
      then
      num=$1
	  for i in `seq 1 10`
	  do
	  echo "$num x $i= " `expr $num \* $i`
	  done
      fi

	if [ $# -eq 3 ]
	then
	   s=$2
	    if [ $s = "-s" ]
	then
	num=$1
	for i in `seq 3 10`
	do
	  
	 echo "$num x $i= " `expr $num \* $i`
	done     
	elif [ $s = "-e" ]
  then 
           num=$1
        for i in `seq 1 13`
	do
	  
	 echo "$num x $i= " `expr $num \* $i`
	done 
       fi
fi 

     if [ $# -eq 5 ]
  then
      num=$1
      s=$2
      start=$3
      e=$4
      end=$5
     if [ $s = "-s" ] && [ $e = "-e" ]
then
 for i in `seq $start $end`
	do
	  
	 echo "$num x $i= " `expr $num \* $i`
	done 
       fi
fi

}    

showTable $@

