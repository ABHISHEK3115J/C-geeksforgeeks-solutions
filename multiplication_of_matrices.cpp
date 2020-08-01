#include<bits/stdc++.h>
using namespace std;

int main(){

  int a[100][100],b[100][100],c[100][100];

  int n;
  cin>>n;
  for (int i = 0; i <n; ++i)
  {
  	for (int j = 0; j< n; ++j)
  	{
  		cin>>a[i][j];
  	}
  
  }
  for (int i = 0; i <n; ++i)
  {
  	for (int j = 0; j< n; ++j)
  	{
  		cin>>b[i][j];
  		c[i][j]=0;
  	}
  }


for (int i = 0; i <n; ++i)
  {
  	for (int j = 0; j< n; ++j)
  	{
  		for (int k = 0; k < n; ++k)
  		{
  			 c[i][j]+=a[i][k]*b[k][j];

  		}
  	}
  	
  }
   for (int i = 0; i <n; ++i)
  {
  	for (int j = 0; j< n; ++j)
  	{
  		cout<<c[i][j]<<" ";
  	}
    cout<<endl;
  }


	return 0;
}
