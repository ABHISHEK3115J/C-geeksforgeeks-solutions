#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n,temp,flag=0;
map<int,int>m;

cin>>n;
for (int i = 0; i <n; ++i)

{
	cin>>temp;
	m[temp]++;
}
for(auto it=m.begin();it!=m.end();++it){
   if(it->second>n/2){
   	   cout<<it->first;
   	   flag=1;
   }
}
if(!flag)
	cout<<"nothing";

}


return 0;
}