#include<bits/stdc++.h>
using namespace std;

int main(){

int n,count=0,a[100];
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++){

	if(a[i]>a[j])
		count++;
}


}
cout<<count;
return 0;
}