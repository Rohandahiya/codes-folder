
for command in ls
do
    echo "-------$command--------" # if echo $command then prints the date i.e. command name
    $command    # only $command exexutes the value of date
done
