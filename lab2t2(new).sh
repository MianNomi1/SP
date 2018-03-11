#!/bin/bash

Runningprocess(){

   set `ps -all -A | grep $1`
   pid=$4
   ppid=$5
   shift 5
   echo "NAME:" $9 " Runnung State."
   echo "PID:"$pid
   echo "PPID:"$ppid
     

}
if [ $# -gt 1 ]
then
echo "INVALID"
fi
Runningprocess $1
