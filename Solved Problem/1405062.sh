#!/bin/bash
x="|--"
depth=0
if [ $# == 0 ]; then
	echo .	
	a=$#
	echo "Number of Arguments $a"
	y="$PWD"
	
else
	echo "$1"
	y="$1"
fi

nested_dir(){
cd "$1"
echo "Value of CLA : $1"
for i in *
do	
	for((k=0;$k<$depth;k++))
	do
		echo -n "|  " 
		echo "Value of depth Inside Loop 1 $depth"
	done		
	if [ -d "$i" ]; then		
		echo $x$i
		depth=`expr $depth + 1`
		echo "Value of Depth Inside loop 2 $depth"
		nested_dir "$i"
	else
		echo $x$i
	fi	
done
cd ..
depth=`expr $depth - 1`
echo "Value of depth outside loop $depth"
}
nested_dir $y
