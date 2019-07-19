
echo -e "Enter the name of the file: \c"
read file_name

if [ -e $file_name ]# -e if file exists , -f is file is normal file, -d for directories, -b for block special file(videos,pictures,audio etc),-c for normal file like text etc.
then
    if [ -w $file_name]
    then
        echo "Enter text: . To quit press ctrl-d "
        cat >> $file_name
    else 
        echo "The file does not have write permissions"
else 
    echo "No such file found"
fi

