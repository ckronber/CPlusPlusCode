/*
 Program for using pass by reference functions
*/
#include <iostream>

using namespace std;

void doubleNum(int&);

int main()
{
    int number = 2;
    doubleNum(number);
    cout <<number <<endl <<endl;
}

void doubleNum(int& number)
{
    number*=2;
}