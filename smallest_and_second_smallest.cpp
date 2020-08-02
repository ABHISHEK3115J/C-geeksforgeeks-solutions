#include<bits/stdc++.h>
using namespace std;

int main(){

int n,a[100],min=1000,gmin=1000;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}

for (int i = 0; i < n; ++i)
{
     if(a[i]<gmin&&a[i]>min)
     	gmin=a[i];
     if(a[i]<min)
     	min=a[i];
}



cout<<min<<" "<<gmin;
	return 0;
}