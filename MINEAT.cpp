#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   int t,n,l,r,h,i,j,ma,mid,k,sum;
   scanf("%d",&t);
   while(t--)
   {
       ma=INT_MIN;
       scanf("%d%d",&n,&h);
      int A[n];
       for(i=0;i<n;i++)
       {

           scanf("%lld",&A[i]);
           ma=max(ma,A[i]);
       }
       k=INT_MAX;
       //binary search implementation
       int l=1,h=ma;
       while(l<h)
       {
          i=l+(h-l)>>1;
          sum=0;
           for(j=0;j<n;j++)
           {
               if(i>=A[j])
                sum++;
                else
                {
                    sum+=(A[j]/i);
                    if(A[j]%i!=0)
                    {
                        sum++;
                    }

                }
           }
           if(sum<h)
           {
               k=min(k,i);
           }


       }
   }
       cout<<k<<endl;

   }



 return 0;
 }
