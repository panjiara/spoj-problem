#include<bits/stdc++.h>
using namespace std;

 int rotateBinary(int number){
		int res = 0;
		while(number>0){
			res=res<<1;
			res = res|(number & 1);
			number=number>>1;
		}
		return res;
	}
	int main()
	{
	    int n,k;
	    cin>>n;
	    while(n--)
        {
            cin>>k;
            if(k%2==0)
            cout<<rotateBinary(k)<<endl;
            else
                cout<<k<<endl;
        }


	    return 0;
	}
