#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int selection;
    
    cout << "This is a program to save time getting rid of and joining data" <<endl <<endl;
    
    cout <<"Select the Program you would like to choose" <<endl;
    cout <<"1. Program for Joining Data together" <<endl;
    cout <<"2. Run Program for getting rid of data that is not wanted" <<endl;
    cout <<"3. Program for Joining Data together and getting rid of extra data" <<endl;
    cout <<"4. Rerun the Program" <<endl;
    cout <<"5. exit program" <<endl <<endl;
    
    cout <<"Enter your selection: ";
    cin >>selection;
    
    switch(selection)
    {
        case 1:
            cout <<"Select the location of your file" <<endl;
        break;
        case 2:
            cout <<"getting rid of useless data..." <<endl;
        break;
        case 3:
            cout <<"Joining and getting rid of useless data" <<endl;
        break;
        case 4:
            cout <<"Run program again for another file" <<endl;
        case 5:
            cout <<"Exit the program" <<endl;
            return 0;
        default:
        break;
    }
    
    return 0;
}