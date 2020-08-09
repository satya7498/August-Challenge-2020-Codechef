#include <iostream>
using namespace std;
#include <bits/stdc++.h> 

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	       cin>>arr[i];
	       
	   sort(arr,arr+n);
	   
	   int min=arr[n-1];int ind;
	    for(int j=0;j<n;j++)
	    {
	       if(k%arr[j]==0)
	         {
	             int m=k/arr[j];
	              if(min>m)
	               {
	                   min=m;
	                   ind=arr[j];
	               }
	         }
	    } if(min==arr[n-1])
	        cout<<"-1"<<endl;
	        else
	    cout<<ind<<endl;
	}
	return 0;
}
