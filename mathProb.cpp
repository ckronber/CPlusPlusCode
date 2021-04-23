#include <iostream>
#include <cmath>
#include <ctime>

#define TIMES 10000000

using namespace std;

int sequence(int n,int* arr)
{
  int sum = 0;
  
  if(n == 1)
  {
    arr[0] = 0;
    return arr[0];
  }
  else if(n == 2)
  {
   arr[1] = 1;
   return arr[1];
  }
  else
  {
    sum = (arr[0]+arr[1])%3;
    arr[0] = arr[1];
    arr[1] = sum;
    return sum;
  }
}

int main()
{
  clock_t begin = clock();
  int arr[2] = {0};

    for(int i = 1;i<TIMES;i++)
    {
        sequence(i,arr);
        if(i == 1004)
        {
          cout <<"sequence("<<i <<") = " <<arr[i];
        }
    }

    clock_t end = clock();
    double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;

    cout <<endl <<"This code took " <<elapsed_secs <<" Seconds to execute." <<endl;
    return 0;
}
