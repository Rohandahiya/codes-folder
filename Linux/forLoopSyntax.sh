#The most commonly used shell repetition structure is the for loop, which has the general form: 
#for variable in list
#do
# command(s) 
#done

for VARIABLE in 1 2 3 4 5 . . N
do 
    command1
    command2
    commandN
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

for (( EXP1; EXP2; EXP3))#LIKE C++
do 
    command1
    command2
    commandN
done
