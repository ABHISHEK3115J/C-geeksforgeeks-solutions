#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{  
 if(a.first!=b.first)
       return (a.first > b.first); 
     else
     	return(a.second<b.second);
} 


int main(){
int n,temp,count;
vector<int> v1,v2;
vector<pair<int,int>> vec;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>temp;
	v1.push_back(temp);
}
v2=v1;
sort(v2.begin(),v2.end());

for(int i=0;i<n;)
{
   int k=i+1;
   count=1;
   while(v2[i]==v2[k]&&k<n)
   	   {
   	   	k=k+1;
   	   	count=count+1;
   	   }

auto it=find(v1.begin(),v1.end(),v2[i]);
int m=it-v1.begin();
vec.push_back(make_pair(count,m));
i=k;
}
sort(vec.begin(),vec.end(),sortinrev);
for(auto i =vec.begin();i!=vec.end();i++){
int j=i->first;
while(j!=0){

cout<<v1[i->second]<<" ";
j--;
}
}
return 0;
}