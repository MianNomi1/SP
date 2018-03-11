#!/bin/bash
is_lower()
{
 y=$1 ##contains word
 echo "${y,,}" 
}


is_root()
{
 ls -l | grep "nouman"
 if [ "$(id -u)" != "0" ]
 then
  echo "scrpit has run by root !"

  else
  echo "script has not ran by root "

fi

}

is_user_exist()
{
  name=$@ ## contains user name
  `grep $name /etc/passwd`
   if [ $? -eq 0 ]
   then
   echo "user exists"
     else
     echo "user no exits"

fi
}


