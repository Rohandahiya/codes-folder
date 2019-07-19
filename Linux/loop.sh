#while loops

#while [ condition ]
#do 
#   command 1
#   command 2
#   commnad 3
#done

value=1

while [ $value -le 3 ]
do
    echo $value
    value=$(( value+1 )) # (( ++value ))
    sleep 1 #delayed response for 1 sec
done

#read files using while

cat loop.sh | while read content
do
    echo $content   
done

# Until Loop runs when condition is false and terminats if condtn is true
until [ $value -ge 12 ]
do 
    echo $value
    value=$(( value+1 ))
done

    