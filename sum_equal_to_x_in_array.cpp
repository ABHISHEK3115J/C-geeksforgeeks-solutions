#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;
   while(t--){
    int n,x,a[1000];
    cin>>n;
for (int i = 0; i <n; ++i)
{
    cin>>a[i];
 }
 cin>>x;
for(int i=0;i<n-1;++i)
{
 for (int j = i+1; j < n; ++j)
 {
 	if(a[i]+a[j]==x)
 		cout<<a[i]<<" "<<a[j]<<endl;
 }
}
}
return 0;
}