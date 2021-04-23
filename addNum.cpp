#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <unistd.h>

using namespace std;

int add(int n)
{
  int var = 0;
  var += add(n);
  n-=var;
  
  return var;
}

int main()
{
    int num = 0;
    
    num = add(2);
    
    return 0;
}