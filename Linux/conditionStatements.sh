#syntax of if
#if [condition]
#then
#   echo "condition is true"
#else
#fi

value=20

if [ $value -eq 20 ]
then
   echo "condition is true"
fi

word=whatisup

if [ $word == "whatisfdup" ]
then
   echo "condition is true"
elif [ $value -ne 4 ]
then
   echo "value is not equal"
else
    echo "condition is false"
fi


# usage of AND
if [ $word == "whatisup" ] && [ $value -gt 1 ]
then
   echo "Both conditions are true"
else
    echo "conditions failed"
fi

# Usage of OR
if [ $word == "whatisup" ] || [ $value -gt 1 ]
then
   echo "Atleast one condition is true"
else
    echo "Both are false"
fi


