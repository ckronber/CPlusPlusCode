#include <iostream>

using namespace std;

static int bouncingBall(double h, double bounce, double window);

int main()
{
    cout <<"Number of Bounces Seen: " << bouncingBall(3,.66,1.5) <<endl;
    return 0;
}

static int bouncingBall(double h, double bounce, double window)
{
   double bHeight = 0,height = h;
       int sCount = 1;

       if((h>0) && ((bounce < 1) && (bounce > 0)) && (window < h))
       {  
          do{
        
          bHeight = bounce*height;
          if(bHeight > window)
            sCount+=2;
          height = bHeight;
          }while(bHeight > window);
        
          return sCount;
        }
        else
          return -1;
}