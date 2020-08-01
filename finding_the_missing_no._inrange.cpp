#include<bits/stdc++.h>
using namespace std;
int missingNo(int a[],int n){
int sum=(n*(n+1))/2,sum1=0;
for (int i = 0; i < n-1; ++i)
{
   sum1+=a[i];
}

return (sum-sum1);

}
int main(int argc, char const *argv[])
{
	int t,a[100];
	cin>>t;
	while(t--){
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
	/* code */
}
cout<<missingNo(a,n+1);

	}
	return 0;
}