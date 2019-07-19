#include<iostream>
using namespace std;

unsigned int nextPowerOf2(unsigned int n)
{
    unsigned count = 0;

    while( n != 0)
    {
        n >>= 1;
        count += 1;
    }

    return count-1;
}

// Driver Code
int main()
{
    unsigned int n = 8;
    cout << nextPowerOf2(n);
    return 0;
}
