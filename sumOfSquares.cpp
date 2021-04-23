#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int sum_of_squares(int n);

int main()
{
    cout << sum_of_squares(7) <<endl <<endl;
    return 0;
}

int sum_of_squares(int n)
{
    int max=0,i;
    vector<int> squares;
    
    for(i=0;i<n;i++)
    {
        if((n-pow(i,2)) >= 0)
            max = pow(i,2);
        else
            break;
    }
            
    squares.push_back(max);
    
    while(n > 0)
    {
        n-=max;
        
        for(i=0;i<=n;i++)
        {
            if(((n-pow(i,2)) >= 0))
                max = pow(i,2);
            else
                break;
        }
        
        if(max > 0)        
            squares.push_back(max);
    }
            
    return squares.size();
}

