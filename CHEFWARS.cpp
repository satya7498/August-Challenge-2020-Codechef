#include <iostream>

#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int h,p;
	    cin>>h>>p;
	    while(p>0)
	    {
	       if(h>0)
	       {
	           h=h-p;
	           p=(int)floor(p/2);
	       }
	       else
	       break;
	    }
	    if(h>0)
	       cout<<"0"<<endl;
	       else
	       cout<<"1"<<endl;
	}
	return 0;
}
