#include <iostream>
#include <cmath>
#include <string>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{
    
    srand(time(NULL));
    float b;
    
    b =1 + rand()%10; 
    
    cout <<b <<endl <<endl;
    
    return 0;
}

