#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,num;
    scanf("%d",&t);
    while(t--)
    {
        num=0;
        scanf("%d",&n);
        int A[n];
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            m[A[i]]++;
        }
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if((it->second)>1)
            {
              num+=((it->second)-1);

            }
        }
        printf("%d\n",num);



    }




    return 0;
}
