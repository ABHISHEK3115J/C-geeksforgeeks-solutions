/*arrays are sorted*/

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n1,n2,temp;
list<int>list1,list2;
cin>>n1;
for (int i = 0; i < n1; ++i)
{
	cin>>temp;
	list1.push_back(temp);
}
cin>>n2;
for (int i = 0; i < n2; ++i)
{
	cin>>temp;
	list2.push_back(temp);
}
list2.merge(list1);
auto it=list2.begin();
int i=0;
while(i!=(n1+n2)/2){
it++;
i++;

}
if((n1+n2)%2==0)
{
    auto it1=it;
    
    cout<<(*it1+(*(--it)))/2;

}
else
   cout<<*it;


}
return 0;
}