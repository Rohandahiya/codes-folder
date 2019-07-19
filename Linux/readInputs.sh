#if you write the value goes in $REPLY var


echo "Enter names: "
#to read multiple names from user like cin in c++
read name1 name2 name3
#to take input on the same line
read -p "Username: " user_var
#to take input but hide it we use -s on the same line
read -sp "Password: " pass_word
#to read inputs in a array of name names
read -a names
echo "Names in the array: ${names[0]}, ${names[1]}"

echo "Welcome: $user_var"
echo "Entered Password : $pass_word"

echo "Names : $name1 , $name2, $name3"


