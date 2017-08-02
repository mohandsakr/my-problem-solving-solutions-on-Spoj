//============================================================================
//problem link :
// Name        : CumulativeSumQuery.cpp
// Author      : 
// Version     :
// Copyright   : use it under your responsibity 
// Description : Hello World in C++, Ansi-style
//status:accepted
//not uploded yet
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int q;
	 long long arr[n];
	 cin>>arr[0];
	 for(int i=1;i<n;i++){
		 int x;
		 cin>>x;
		 arr[i]=arr[i-1]+x;
	 }
	 cin>>q;
	 for(int i=0;i<q;i++){
		 int x,y;
		 cin>>x>>y;
		 if(x!=0){
			 cout<<arr[y]-arr[x-1]<<"\n";
		 }
		 else{
			 cout<<arr[y]<<"\n";
		 }




	 }
	return 0;
}
