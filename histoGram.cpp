#include <iostream>
#include <string>
#include <vector>

using namespace std;

string histogram(vector<int> results)
{
   int max = 0, i = 0, j = 0,hold = 0;
   vector<int> vals;
   string res;
   
   vals = results;
   //find max value for die rolls
   while(i<results.size())
   {
       if(max < results[i])
        max = results[i];
        i++;
   }
   
        cout <<max <<endl;
   
   //create 2 while loops for making data
   while(hold >= 0)
   {
       while(i<6)
       {
           if((hold == results[i]) && (results[i] > 0))
           {
               res += to_string(results[i]);
               
               if(vals[i] == max)
               {
                vals[i] += "\n";
                
               }
               vals[i] -= 1;
           }
           else if((hold < results[i]) && (results[i] > 0))
           {
               if(i > i-1)
               res += "#";
               vals[i] -= 1;
           }
           else if((hold > results[i]) || (results[i] == 0))
            if(i<5)
               res += " ";
       }
   }
 
  res += "-----------\n1 2 3 4 5 6\n";
  return res;
}

int main()
{
    vector<int> results = {7,3,10,1,0,5};
    
    cout <<histogram(results) <<endl <<endl;
    
    return 0;
}
 
/*
        note to self: go through the numbers how ever many times the max number is plus 1 and add a \n after the last entrance for the line.
        
        std::string expected = "    10\n"7
                               "    #\n"
                               "    #\n"
                               "7   #\n"
                               "#   #\n"
                               "#   #     5\n"
                               "#   #     #\n"
                               "# 3 #     #\n"
                               "# # #     #\n"
                               "# # # 1   #\n"
                               "# # # #   #\n"
                               "-----------\n"
                               "1 2 3 4 5 6\n";
                               
 */