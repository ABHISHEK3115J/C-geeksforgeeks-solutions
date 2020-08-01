#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){

int rot,n,a[100],m;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
cin>>rot;
for (int i = 0; i < rot; ++i)
{
	m=a[0];
	for(int j = 0 ;j < n-1; j++){
      a[j]=a[j+1];
      
}
a[n-1]=m;
}
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}
}


return 0;
}