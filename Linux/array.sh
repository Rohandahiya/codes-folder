
os=('ubuntu' 'windows' 'macOS')
#Add element
os[3]='kali'
#Remove Element
unset os[3]

echo "${os[@]}"
echo "${!os[@]}"
echo "${#os[@]}"
echo "${os[0]}" "${os[1]}" "${os[2]}"