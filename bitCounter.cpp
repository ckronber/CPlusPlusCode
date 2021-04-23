#include <cmath>
#include <iostream>

using namespace std;

int numBinary(int val);
int findNext(int binVal, int curVal);
int nextHigher(int value);

int main()
{
  int value = 1564;
  cout <<"The next value over " <<value <<" = " <<nextHigher(value) <<endl;
  return 0;
}

int nextHigher(int value)
{    
  int binValue, nextBin;
    binValue = numBinary(value);
    return findNext(binValue,value);
}

int numBinary(int val)
{
  int decVal,count = 0;
  decVal = val;
  int binVal;
  
  if(val <= 1073741824)
    {
      while(decVal > 0)
      {
        binVal = decVal%2;
        
        if(binVal == 1)
          count++;
        
        decVal/=2;
      }
      return count;   
    }
  return 0;
}

int findNext(int binVal, int curVal)
{
  int counter = curVal,binNum;
  
  do{
   counter++;
   binNum = numBinary(counter);
  }while(binNum != binVal);
  
  return counter;
}