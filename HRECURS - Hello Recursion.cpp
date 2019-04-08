/*
problem  name:HRECURS - Hello Recursion
author: mohand sakr;
problem link:https://www.linkedin.com/me/profile-views/urn:li:wvmp:summary/
status:accepted


*/
#include <iostream>
using namespace std;
	int arr[100]={};
	int sum;
	int solve( int n){
		if(n==0) return 0;
		 
		 return arr[n-1]+solve(n-1);
		
		
	}


int main() {
int t;
cin>>t;
int cases=0;
while(t--){
	++cases;
	int n;
	cin>>n;
	 sum=0;
 	for(int i=0;i<n;i++){
		cin>>arr[i];
		 
	}
	cout<<"Case "<<cases<<": "<<solve(n)<<"\n";
 
}
return 0;
}
