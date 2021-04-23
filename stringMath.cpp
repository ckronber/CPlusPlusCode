#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string sum_strings(string a, string b)
{
    int first,second,sum1;
    string sum;
    
    first = stoi(a);
    second = stoi(b);
    
    cout <<first <<endl;
  
   sum = to_string(first+second);  
    
    return sum;
}

int main()
{
    cout <<"The sum = " <<sum_strings("123","O") <<endl <<endl;
    return 0;
}