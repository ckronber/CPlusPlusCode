#include <iostream>

#define asize 11
#define target 8

using namespace std;

int main()
{
    int arr1[asize] = {1,3,3,5,7,8,9,9,9,9,15};
    int mid = (asize-1)/2; 
    int ra[2] = {0,0},i=0;

    while((arr1[mid])<target) 
        mid+=(mid/2);

    while((arr1[mid])>target)
        mid-=(mid/2);
    
    // checking before mid to see if there are more of the same numbers
    for(i = mid;arr1[i] == target;i--)
        ra[0] = i;
    
    //checking after mid to see if there are more of the same numbers
    for(i = mid;arr1[i] == target;i++) //i<asize
        ra[1] = i;
     
    // output for range
    cout <<"range is [ " <<ra[0] <<", " <<ra[1] <<" ]" <<endl <<endl;
    
    return 0;
} 