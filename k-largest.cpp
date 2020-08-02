#include<bits/stdc++.h>
using namespace std;

int main(){
int n,temp;
priority_queue<int>pq;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>temp;
	pq.push(temp);
}
cin>>temp;
for (int i = 0; i < temp; ++i)
{
	cout<<pq.top()<<" ";
	pq.pop();
}
return 0;

}