#The most commonly used shell repetition structure is the for loop, which has the general form: 
#for variable in list
#do
# command(s) 
#done

for i in {1..10} ;  # {start..mid..end}
do 
    echo $i
done

for VARIABLE in file1 file2 file3
do 
    command1
    command2
    commandN
done

for OUTPUT in $(Linux-Or-Unix-Commad-Here)
do 
    command1
    command2
    commandN
done

for (( i=0; i<5; i++))#LIKE C++
do 
    echo $i
done
