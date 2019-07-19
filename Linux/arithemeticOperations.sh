
num1=10
num2=8
num3=20.5

#!1st Method
echo $(( num1 + num2 ))
echo $(( num1 - num2 ))
echo $(( num1 * num2 ))
echo $(( num1 / num2 ))
echo $(( num1 % num2 ))

# 2nd Method
echo $(expr $num1 + $num2)
echo $(expr $num1 - $num2)
echo $(expr $num1 \* $num2)
echo $(expr $num1 / $num2)
echo $(expr $num1 % $num2)

#For floating point we use bc

echo "$num1+$num3" | bc
echo "$num1-$num3" | bc
echo "$num1*$num3" | bc
echo "scale=2;20.5/5" | bc # For precision to 2 decimal places we use scale=2
echo "$num1%$num3" | bc

echo "scale=2;sqrt($num1)" | bc -l #-l for mathlib
