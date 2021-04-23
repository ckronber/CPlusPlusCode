#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <array>
#include <time.h>
#include <unistd.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}

bool scramble(const string& s1, const string& s2)
{
    char string1[s1.size()], string2[s2.size()];
    int output,i = 0,j = 0;
    bool value = 1;

    strcpy(string1,s1.c_str());
    strcpy(string2,s2.c_str());
    
    qsort(string2,sizeof(string2),sizeof(char),compare);
    qsort(string1,sizeof(string1),sizeof(char),compare);
    
    cout <<string2 <<endl;
    cout <<string1 <<endl <<endl;
    
    for(i=0;i<sizeof(string2);i++)
    {
        for(j=0;j<sizeof(string1);j++)
        {
            if(string2[i] == string1[j])
            {
             string2[i] = -1;
             string1[j] = -1;
             break;
            }
        }
    }
    
    output = (int)string2[1];
    
    cout <<output <<endl <<endl;
    
    if(output <= 0)
        value = 1;
    else
        value = 0;

    return value;
}

int main()
{
    clock_t time_S;
    float value;
    string s1 = "rkqodlsw";
    string s2 = "worlds";
    bool val;
    
    time_S = clock();
    
    val = scramble(s1,s2);
    cout <<val <<endl;
    
    time_S = clock() - time_S;
    value = (float(time_S)/CLOCKS_PER_SEC)*1000000.0;
    cout << "This code took " <<value <<" uS to execute"<<endl <<endl;
    
    return 0;
}