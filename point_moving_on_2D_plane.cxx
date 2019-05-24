#include <iostream>
using namespace std;
int main()
{
    int x,y;
    char m[5];
    x=rand();
    y=rand();
    cout<<"forward :w"<<endl<<"backward :s"<<endl<<"left :a"<<endl<<"right :d"<<endl;
    cin>>m;
    if(strcmp(m,"d")==0)
    {
        for(int i=0;i<2;++i)
           {
              
               x=x+i;
               cout<<"("<<x<<","<<y<<")"<<endl;

        }
    }
   
    if(strcmp(m,"a")==0)
    {
            for (int i=0;i>-2;i--)
          {
                     x=x+i;
                   cout<<"("<<x<<","<<y<<")"<<endl;
          }
    }
    if(strcmp(m,"w")==0)
    {
          for(int i=0;i<2;i++)
          {
                   y=y+i;
                   cout<<"("<<x<<","<<y<<")"<<endl;

          }
    }
    if(strcmp(m,"s")==0)
    {
          for(int i=0;i>-2;i--)
          {
                   y=y+i;
                   cout<<"("<<x<<","<<y<<")"<<endl;

          }
     }
    return 0;
    
}


