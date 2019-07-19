# readonly commands makes a var or a function to be readable not be changed or executed4

var=32
readonly var
var=432 #once readonly so var value not changed

hello(){
    echo "HEllo WOrld"
}

readonly -f hello  # for functions we use readonly -f

hello(){
    echo "HEllo WOrld After"
}
