#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

void numberVal(int num, int * place);

int main()
{
    int nums[7] = {1,5,10,50,100,500,1000};
    char rom[7] = {'I','V','X','L','C','D','M'};
    int place[4];
    vector <char> romChars;
    int num = 1987,j,hold;
    char temp;
    
    numberVal(num,place);
    
    for(int i=3;i>=0;i--)                   // run for how many places are included in the number
    {                                       // it should not be more than 4 numbers
        j = 0;
        
        if(i == 3 && (place[i] > 0))        // calculates the number of thousands in the number
            while(place[i] > 0)
            {
                romChars.push_back(rom[6]);
                place[i]--;
            }
        
        //hundreds and below will be calculated and added to the roman numeral number here 
        else
        {
            while((place[i] * pow(10,i)) <  nums[j])
                j++;
            
            if(place[i] == 9 || place[i] == 4)
            {
                if(place[i] == 9)
                    hold = -1;
                else
                    hold = 0;
                    
                romChars.push_back(rom[j-hold]);
                romChars.push_back(rom[j+1]);
            }
            else
            {
                if(nums[j] == place[i]*pow(10,i))
                    hold = j;
                else if(nums[j] > place[i]*pow(10,i))
                    hold = j-1;
                
                romChars.push_back(rom[hold]);
            }
        }
    }
    
    int i = 0;
    
    while(i < romChars.size())
    {
        cout <<romChars[i];
        i++;
    }
    
    cout <<endl <<endl;
    return 0;
}

void numberVal(int num, int * place)
{
    for(int i=3;i>=0;i--)
    {
        place[i] = num/pow(10,i);
        num -= (place[i]*pow(10,i));
    }
}