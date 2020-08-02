#include<bits/stdc++.h>
using namespace std;

int main(){

int a[100],n,x,temp,count=0;
cin>>n;

for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
cin>>x;
for (int i = 0; i < n; ++i)
{
	if(a[i]==x)
	{
		temp=i;
		break;
	}
}
while(a[temp]==x&&temp<n){
	temp++;
    count++;
}
if(count>n/2)
	cout<<"True";
else
	cout<<"False";
return 0;
}