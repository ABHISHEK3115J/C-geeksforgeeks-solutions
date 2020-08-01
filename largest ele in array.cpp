#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n,temp;
std::set<int,greater<int>> s;
cin>>n;
for(int i=0;i<n;i++){
 cin>>temp;
 s.insert(temp);

}
auto itr=s.begin();
cout<<*itr;

}
return 0;
}
