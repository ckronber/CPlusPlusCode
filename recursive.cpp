#include <iostream>
#include <ctime>

using namespace std;

#define NUMBER 2620

void message(long long times);

int main()
{
    clock_t begin = clock();
    message(NUMBER);
    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    
    cout <<"Time Elapsed = " <<elapsed_secs <<" Seconds";
    return 0;
}

void message(long long times)
{
    if(times == 0)
        cout <<"This is the End! \n";
    else
        message(times-1);
)