#include <iostream>
#include <math.h>

using namespace std;

long GCD(long num1, long num2)
{
   long remain[3], returnVal = 1;
   
    if(num1 > num2)
    {
        remain[0] = num1;
        remain[1] = num2;
    }
   else
    {
        remain[0] = num2;
        remain[1] = num1;
    }
    
    remain[2] = remain[0] % remain[1];
    
    while (remain[2] > 0)
    {
        remain[0] = remain[1];
        remain[1] = remain[2];
        remain[2] = remain[0]%remain[1];
    }
    
    returnVal = remain[1];
    
    return returnVal;
}

int main()
{
    cout <<"GCD of 120 and 47 = " <<GCD(13246,2344) <<endl <<endl;
    return 0;
}