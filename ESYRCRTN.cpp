#include<bits/stdc++.h>
using namespace std;
#define bint long long int
int main()
{
    bint a,b,c,d,x,y,n,t;
    cin>>t;
    while(t--)
    {
        cin>>d;
        if(d==1)
        {
            cout<<1<<endl;
        }
        else if(d-1-2-((d-1)/6)*6==0)
        {
            cout<<6<<endl;
        }
        else if(d-1-3-((d-1)/6)*6==0)
        {
            cout<<5<<endl;
        }
        else if(d-1-4-((d-1)/6)*6==0)
        {
            cout<<2<<endl;
        }
        else if(d-1-5-((d-1)/6)*6==0)
        {
            cout<<0<<endl;
        }
        else if((d-1)%6==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<4<<endl;
        }
    }





    return 0;
}
