#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

bool scramble(const string& string1, const string& string2)
{
    string comp,s1 = string1,s2 = string2;
    int output;
    bool value = 1;
   
   while(s2.length() > 0)
   {
       output = s2.length();
       comp = s2.at(output-1);
       output = s1.find(comp);
       
       if(output != -1)
       {
            s1.erase(output,1);
            s2.pop_back();
       }
       else
       {
            value = false;
            break;
       }
   }
   return value;
}

int main()
{
    clock_t time_S;
    float value;
    string s1 = "rkqodlw";
    string s2 = "world";
    bool val;
    
    time_S = clock();
    
    val = scramble(s1,s2);
    cout <<val <<endl;
    
    time_S = clock() - time_S;
    value = (float(time_S)/CLOCKS_PER_SEC)*1000000.0;
    cout << "This code took " <<value <<" uS to execute"<<endl <<endl;
    
    return 0;
}