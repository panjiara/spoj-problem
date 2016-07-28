#include <stdio.h>
int main()

{
int n,b,a,i,j;
scanf("%d",&n );
int array[n];
for ( i = 0; i < n;i++)
{

scanf("%d",&array[i] );

}
for ( i = 0; i < n; i++)
{
  j=5;
a=0;
  while((array[i]/j)!=0)
  {
    a=a+((array[i])/j);
    j=j*5;

  }

  printf("%d\n",a);
}


  return 0;
}
