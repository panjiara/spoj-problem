#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int rev(lint x)
{
    lint ret=0;
    lint y=x;
    lint im;
    while(y>0)
    {
        im=y%10;
        y=y/10;

        ret=(ret*10)+im;


    }
     return ret;
}
int main()
{
    lint n,g,f;
   cin>>n;
   while(n--)
   {
       cin>>g>>f;
       //cout<<rev(g)<<endl;
       //cout<<rev(f)<<endl;
       cout<<rev(rev(g)+rev(f))<<endl;

   }




    return 0;
}

