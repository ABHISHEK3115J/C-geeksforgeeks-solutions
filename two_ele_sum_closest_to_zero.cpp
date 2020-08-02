#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[100],n,min,a,b;

cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
min=arr[0]+arr[1];
for(int i=0;i<n-1;i++){

	for(int j=i+1;j<n;j++){
       if(abs(arr[i]+arr[j])<min)
         min=abs(arr[i]+arr[j]);
          a=arr[i];
          b=arr[j];
	}
}
cout<<a<<" "<<b<<" "<<min;


}