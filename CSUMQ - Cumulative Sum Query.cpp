/*
problem name :CSUMQ - Cumulative Sum Query.
probelem link:https://www.spoj.com/problems/CSUMQ/.
status:accepted.
author:mohand sakr.

*/
    #include <iostream>
    #include<algorithm>
    using namespace std;
    int main() {
    int n;
    cin>>n;
    long long arr[n]={};
     for(int i=0;i<n;i++){
    	cin>>arr[i];
     }
     for(int i=1;i<n;i++){
    	arr[i]=arr[i-1]+arr[i];
      }
    int q;
    cin>>q;
     for(int i=0;i<q;i++){
    	int  r,l;
    	cin>>  l>>r;
     
    	 
    		if(l==0)
    	cout<<arr[r]<<endl;
    	else {
    			cout<<arr[r]-arr[l-1]<<endl;
    	}
     
    	 
    }
     
     
     
    	return 0;
    } 
