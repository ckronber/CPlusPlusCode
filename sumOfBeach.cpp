#include <iostream>
#include <string>
//#include <cstring>
//#include <ctype.h>

using namespace std;

int sum_of_a_beach(string s)
{
    int found = 0,i=0;
    string arr[4] = {"sand","water","fish","sun"};
  
    while(s[i])
    {
        s[i] = tolower(s[i]);
        i++;
    }
    
    cout <<s <<endl;
    
    i = 0;
    
    while(i < 4)
    {
        if(s.find(arr[i]) >= 0 && (s.find(arr[i]) < 1000000))
        {
          found += 1;
          s.erase(s.find(arr[i]), arr[i].length());
          cout <<s <<endl;
        }
        
        if((s.find(arr[i]) < 0) || (s.find(arr[i]) > 1000000))
            i++;
    }
    return found;
}

int main()
{
    int number = 0;
    string s = "GolDeNSanDyWateRyBeaChSuNN";
    
    number = sum_of_a_beach(s);
    cout <<endl <<endl;
    cout <<"There were " <<number <<" instances found" <<endl <<endl;
    return 0;
}