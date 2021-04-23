#include <iostream>
#include <cmath>
#include <string>

#define XVAL 5
#define YVAL 15

using namespace std;

void createArray(int * arr, int XVAL, int YVAL)
{
    int i = 0,j=0;
    arr[XVAL][YVAL] = {0};
    
    for(j=0;j<YVAL;j++)
    {
        if(j<6)
            arr[0][j] = 47;
        else if(j<12)
            arr[0][j] = 20;
        else if(j<13)
            arr[0][j] = 8;
        else
            arr[0][j] = 1;
    }
    
    for(j=0;j<YVAL;j++)
    {
     cout <<"[ ";
        for(i=0;i<XVAL;i++)
            cout << arr[i][j];
     cout <<" ]" <<endl;
    }

}


int main()
{
    
    
    return 0;
}