#include <iostream>
#include <cmath>

using namespace std;

static long long findNb(long long m);
static long long reverseNb(long long m);

int main()
{
 static unsigned long long val;
 
 val = findNb(1025292944081385001);
 cout <<val <<endl;
 cout <<reverseNb(val) <<endl;
 
 return 0;
}

static long long findNb(long long m){
long long start = 1;
long long sum = 0;
 
    while(sum < m)
    {
      sum += (start*start*start);
      start++;
    }
    
    if(m == sum)
      return start-1;
    
    return -1;
  }
  
  static long long reverseNb(long long m){
  long long start = 1;
  long long sum = 0;
  
    while(start <= m)
    {
      sum += start*start*start;
      start++;
    }
  
    return sum;
  }