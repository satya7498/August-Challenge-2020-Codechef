#include <iostream>
#include<stdio.h>
using namespace std;
#include <cmath>
int makeSum(int num)
{ if(num%9==0)
    return num/9;
    else
    return (int)floor(num/9)+1;
}
    

int main() {
	// your code goes here
	
	int test;
		cin>>test;
		while(test--)
		{
		   int chef,rick;
		   cin>>chef>>rick;
		  
		       int pow1=makeSum(chef);
		       int pow2=makeSum(rick);
		       if(pow1<pow2)
		         cout<<"0 "<<pow1<<endl;
		       else 
		         cout<<"1 "<<pow2<<endl;
		      
		       
		   }
}
