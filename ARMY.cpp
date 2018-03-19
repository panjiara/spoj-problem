#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int main()
{
    lint t,n,x,y;
    cin>>t;
    while(t--)
    {
        set<lint> s1,s2;
        cin>>x>>y;
        while(x--)
        {
            cin>>n;
            s1.insert(n);
        }
        while(y--)
        {
            cin>>n;
            s2.insert(n);
        }
        set<lint>::iterator it1,it2;
        it1=s1.begin();
        it2=s2.begin();
        while(1)
        {
            it1=s1.begin();
            it2=s2.begin();
            if(*it1>=*it2)
            {
                s2.erase(it2);
            }

            else if(*it1<*it2)
             {
                s1.erase(it1);
             }
            if(s1.empty()||s2.empty())
            {
                if(s2.empty())
                {
                    cout<<"Godzilla"<<endl;
                    break;
                }
                if(s1.empty())
                {
                    cout<<"MechaGodzilla"<<endl;
                    break;
                }
            }
        }


    }





}
