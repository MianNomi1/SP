#!/bin/bash

rmidentical()
{
   file=$1
   echo  `sort $file | uniq`
}

rmidentical $@
