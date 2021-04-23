#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <string> values[1][1];
    fstream fs;
    fs.open("/home/ubuntu/environment/Data/H28_2.csv");
    
    if(fs.is_open())
        cout <<"The File is Open!" <<endl <<endl;
    else
        cout <<"Error Opening File!" <<endl <<endl;
    
    fs.close();
    
    return 0;
}