#Syntax
#case expression in
#   pattern1 )
#       statements ;;
#   pattern2 )
#       statements ;;
#esac

vehicle=$1

case $vehicle in
   "car" )
       echo "Rent of $vehicle is 100 dollar" ;;
   "van" )
       echo "Rent of $vehicle is 80 dollar" ;;
    "plane" )
       echo "Rent of $vehicle is 100000 dollar" ;;
    * )
        echo "Unknown Vehicle" ;;
esac

[a-z] )
        specifies a range which matches any lowercase letter from "a" to "z"
    [A-Z] )
       specifies a range which matches any lowercase letter from "A" to "Z"
    [0-9] )
        specifies a range which matches any value 0 to 9" ;;
    ? )        
        Matches a string with exactly one character like a, !, and so on.
    * )
       Matches a string with one or more characters (a nonempty string).

