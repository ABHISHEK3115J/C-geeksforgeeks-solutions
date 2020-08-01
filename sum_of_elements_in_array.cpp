#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n,temp;
int sum=0;
cin>>n;
for(int i=0;i<n;i++){
 cin>>temp;
 sum+=temp;

}
cout<<sum;

}
return 0;
}
