#include<bits/stdc++.h>
using namespace std;

int n;

void linearSearch(vector<int> v,int key,int i){


if(key==v[i])
    cout<<"position is "<<i+1;
else if (i>=n)
	cout<<"not found";


else
  	linearSearch(v,key,++i);
  
}





int main(){

int t;
cin>>t;
while(t--){

vector<int> v;
int temp,key;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>temp;
	v.push_back(temp);
}
cin>>key;
linearSearch(v,key,0);
}

return 0;
}