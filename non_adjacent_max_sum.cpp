#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a[100],n,inc,exc,temp;

cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];

}
inc=a[0];
exc=0;
for (int i = 1; i < n; ++i)
{
temp=inc;
inc=exc+a[i];
exc=temp>exc? temp:exc;
}
cout<<(inc>exc? inc:exc);
}
return 0;
}