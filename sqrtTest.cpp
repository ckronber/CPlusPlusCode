#include <string>
#include <cmath>
#include <iostream>

using namespace std;
string simplify(int n);

int main(){
  cout << simplify(80) <<endl;
  int num = 4;
}

string simplify(int n)
{
  int num = 1,max = n;
  string fNum;

  while(num < n)
  {
    if(sqrt(num) == 2)
    {
      max = num;
    }
    num++;
  }
  
  cout << max <<endl;
  
  if(max < n)
    fNum = to_string(max) + " sqrt " + to_string(n/max);
  else
    fNum = "sqrt "+ (n/num);
    
  return fNum;
}

/*int desimplify(string s)
{
    //your code here
}
*/