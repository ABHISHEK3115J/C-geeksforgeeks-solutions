#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int a[],int n){
int max_so_far=0,max_ending_here=0;
for(int i=0;i<n;i++){

	max_ending_here+=a[i];
	if(max_so_far<max_ending_here)
		max_so_far=max_ending_here;
	if(max_ending_here<0)
		max_ending_here=0;
}

return max_so_far;
}

int main(){
int t;
cin>>t;
while(t--){
int a[100],n;
cin>>n;
for (int i = 0; i < n; ++i)
{
      cin>>a[i];
}
cout<<kadaneAlgo(a,n);


}
return 0;
}