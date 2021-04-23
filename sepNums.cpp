#include <iostream>
#include <math.h>

using namespace std;

void numberSep(float num1)
{
    int numPart = 0;
    float decPart;
    numPart= (int)num1;
    decPart = num1 - numPart;
    cout <<numPart << " " <<decPart <<endl <<endl;
}

int main()
{
 numberSep(12.2243);
}