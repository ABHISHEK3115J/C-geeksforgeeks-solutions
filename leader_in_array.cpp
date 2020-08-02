#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n,a[100],flag=0;

cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}
for (int i = 0; i < n-1; ++i)
{
	flag=0;
	for(int j=i+1;j<n;j++){

        if(a[i]<a[j])
        {
        	flag=1;
        	break;
        }


	}
	if(!flag)
		cout<<a[i]<<" ";
}
cout<<a[n-1];


}



}