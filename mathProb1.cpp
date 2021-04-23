#include <iostream>
#include <cmath>
#include <ctime>

#define TIMES 40

using namespace std;

int sequence(int n)
{
  if(n == 1)
  {
    return 0;
  }
  else if(n == 2)
  {
   return 1;
  }
  else
  {
    return (sequence(n-2) + sequence(n-1))%3;
  }
}

int main()
{
  clock_t begin = clock();

    for(int i = 1;i<TIMES;i++)
    {
      sequence(i);
    }

    clock_t end = clock();
    double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;

    cout <<endl <<"This code took " <<elapsed_secs <<" Seconds to execute." <<endl;
    return 0;
}