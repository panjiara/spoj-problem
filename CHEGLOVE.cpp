#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
      scanf("%d",&n);
      int F[n],G[n];
      for(i=0;i<n;i++)
      {
          scanf("%d",&F[i]);
      }
      for(i=0;i<n;i++)
      {
          scanf("%d",&G[i]);
      }
      int f1=0,f2=0;
      for(i=0;i<n;i++)
      {
          if(F[i]>G[i])

            {
                f1=1;
                break;
            }

      }
      for(i=0;i<n;i++)
      {
          if(F[i]>G[n-i-1])
            {
                f2=1;
               break;
            }
      }
      if(f1==0&&f2==1)
      {
          printf("front\n");
      }
      else if(f1==1&&f2==0)
      {
          printf("back\n");
      }
      else if(f1==0&&f2==0)
      {
          printf("both\n");
      }
       else if(f1=1&&f2==1)
      {
          printf("none\n");
      }




    }





    return 0;
}
