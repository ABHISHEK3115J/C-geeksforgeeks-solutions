#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int a[100],n,temp;
cin>>n;
for (int i = 0; i < n; ++i)
{
cin>>a[i];
}
for(int i=0;i<n/2;++i){
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}

}
return 0;



}