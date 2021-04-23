#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

class romanNums{
    private:
    int place,j,i;
    int nums[7] = {1,5,10,50,100,500,1000};
    char rom[7] = {'I','V','X','L','C','D','M'};
    vector <char> romChars;
    string strChars ="";
    
    public:

    string to_roman(int num)
    {
        romChars.clear();
        j=2;
        i=5;
        
        int numPlace[4];
        numPlace[3] = (num/1000);
        numPlace[2] = (num%1000-num%100)/100;
        numPlace[1] = (num%100-num%10)/10;
        numPlace[0] = num%10;
        
        while(numPlace[3] > 0)
        {
            romChars.push_back(rom[6]);
            numPlace[3]--;
        }
            
        for(j=2;j>=0;j--)
        {
            while(numPlace[j] > 0)
            {
                if(numPlace[j] == 9 || numPlace[j] == 4)
                {
                    romChars.push_back(rom[i-1]);
                    if(numPlace[j] == 9)
                    {
                        romChars.push_back(rom[i+1]);
                        numPlace[j] -= 9;
                    }
                    else
                    {
                        romChars.push_back(rom[i]);
                        numPlace[j] -= 4;
                    }
                }
                else if(numPlace[j] >= (nums[i]/pow(10,j)))
                {
                    romChars.push_back(rom[i]);
                    numPlace[j] -= (nums[i]/pow(10,j));
                }
                else
                {
                    romChars.push_back(rom[i-1]);
                    numPlace[j] -= (nums[i-1]/pow(10,j));
                }
            }
            i-=2;
        }
        
        i=0;
        
        while(i < romChars.size())
        {
         strChars += romChars.at(i);
         i++;
        }
        
        return strChars;
    }
    
    int from_roman(string romNum)
    {
        int romSize = romNum.size();
        int romVal[romSize];
        place = 0;
        
        for(i = 0;i<romSize;i++)
            for(j=6;j>=0;j--)
                if(romNum[i] == rom[j])
                    romVal[i] = nums[j];

        for(i=0;i<romSize;i++)
            if((romVal[i+1] > romVal[i]) && (i<(romSize-1)))
            {
                place += (romVal[i+1] - romVal[i]);
                i++;
            }
            else if(romVal[i]>=romVal[i+1])
                place+=romVal[i];
            else if((romVal[i] < romVal[i+1]) && i<(romSize-2))
                place-=romVal[i];
            else
                place+=romVal[i];
                
        return place;
    }
};

int main(){
    
    clock_t time_S;

    romanNums Num1;
    string roman = "";
    int val;
    
    cout <<"Enter a number from 1 to 5000: ";
    cin >> val;
    
    time_S = clock();
    roman = Num1.to_roman(val);
    cout << roman <<endl;
    
    cout << "Converted Back to a number : " <<Num1.from_roman(roman) <<endl <<endl;
    time_S = clock() - time_S;
    
    cout << "This code took " <<(float(time_S)/CLOCKS_PER_SEC)*1000000.0 <<" uS to execute"<<endl <<endl;
    return 0;
}