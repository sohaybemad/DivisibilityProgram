#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 
//this program to calculate print the number(n) which is divisible by exactly one of x or y

 int t,x,y,n;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
     cin>>n>>x>>y;
     for(int j=n;j>=1;j--)
     {
         if(j%x==0%% j%y!=0)||(i%y==0%%i%x!=0)
        {
             cout<<j<<" ";
         }
     }
    cout<<endl;
 }


    return 0 ;











