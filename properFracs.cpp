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

long properFractions(long n)
{
    long i, num = n,j;
   //long listNum[n];
    bool skip = false;

    if(n == 1)
        num--;
    else
        for(i = 1;i<=n;i++)
        {
            if((n%i == 0) && (i > 1))
            {
                //listNum[i-1] = i;
                num--;
                skip = true;
            }
            else
                skip = false;
                
            if(skip == false && (GCD(i,n) > 1)) 
                        num--;
        }
    
    return num;
}

int main()
{
 cout <<"Amount of Proper Fractions = " <<properFractions(25) <<endl;
 return 0;
}