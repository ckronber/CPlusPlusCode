#include <iostream>
#include <vector>

using namespace std;

static long findMissing(vector<long> list);
int sDiff(int num1, int num2);

int main()
{
  cout <<"Missing Number: " << findMissing({1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124, 127, 130, 136, 139, 142, 145, 148, 151, 154, 157, 160, 163, 166, 169, 172, 175, 178, 181, 184, 187, 190, 193, 196, 199, 202, 205, 208, 211, 214, 217, 220, 223, 226, 229, 232, 235, 238, 241, 244, 247, 250, 253, 256, 259}); 
}

static long findMissing(vector<long> list)
{
    long mNum = 0, diff1 = 0,diff2 = 0,diff3 = 0,avg = 0;
    diff1 = list[1]-list[0];
    diff2 = list[2]-list[1];
       
    if(list.size() > 3)
        diff3 = list[3]-list[2];
    
    if(diff1 == diff2)
        avg = diff1;
    else
    {
        if(list.size() == 3)
            avg = sDiff(diff1,diff2);
        else
            avg = diff3;
    }
    
    for(int i = 0;i < list.size()-1;i++)
    {
            if((list[i+1] - list[i]) != avg)
            {
                mNum = list[i] + avg;
            }
    }
    return mNum;
}

int sDiff(int num1, int num2)
{
    if(abs(num1)<abs(num2))
        return num1;
    else 
        return num2;
}