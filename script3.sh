#!/bin/bash

UNIX=( Derbian 'Red hat' Ubantu Suse Fedora )

	echo "elements are: " ${UNIX[*]}
	echo " Length of array: " ${#UNIX[*]}
	echo "Lenght of Element of index 2:" ${#UNIX[2]}
	echo "Two elements from 3rd position:" ${UNIX[2]} ${UNIX[3]}
	
	echo "replacing Ubuntu with SEO-UNIX: " ${UNIX[@]/"Ubantu"/"SEO"}

	unset UNIX[3]
	echo "AFter removing 3rd element: " ${UNIX[*]}
	UNIX=( ${UNIX[@]} 'HP-UIX')
	echo "NEW ARRAY after adding: " ${UNIX[*]}

	LINUX=( ${UNIX[@]} )

	echo "Linux array: " ${LINUX[*]}

	BASH=( ${LINUX[@]} "" ${UNIX[@]} )

	echo "BASH ARRAY:" ${BASH[@]}

	unset LINUX[@]
	unset UNIX[@]

	 echo "DELETING LINUX & UNIX:"
	echo "LINUX NOW:" ${LINUX[*]}
	echo "UNIX NOW:"  ${UNIX[*]}

