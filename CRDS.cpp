#include<bits/stdc++.h>
using namespace std;
#define lint long long int
int main()
{
    long long int n,x;
    cin>>x;
    long long int sum1,sum2;
    while(x--)
    {
        cin>>n;

    sum1=(n*(n+1)%1000007);
    //cout<<sum1<<endl;
    sum2=((n*(n-1))/2)%1000007;
    //cout<<sum2<<endl;
    cout<<(sum1+sum2)%1000007<<endl;
    }


    return 0;
}
