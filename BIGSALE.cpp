#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,d,n;
     double temp1,temp2,loss,sum=0.0;
    scanf("%d",&t);
    while(t--)
    {
        sum=0.0;
        scanf("%d",&n);
    while(n--)
    {

        scanf("%d%d%d",&p,&q,&d);
        temp1=(double)(p*d)/100.0+p;

        temp2=temp1-(double)(temp1*d)/100.0;
        loss=p-temp2;

        loss*=q;
        //cout<<temp1<<" "<<temp2<<" "<<loss<<" "<<endl;
        sum+=loss;
        //printf("%f\n",sum);



    }

    printf("%f\n",sum);
    }

    return 0;
}
