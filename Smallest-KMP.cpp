#include<bits/stdc++.h>

using namespace std;


// Initialize global variables 

#define ff first
#define ss second 

// Function to store resultant 
string multi(char c, int l)
{
    string ans="";
    for(;l>0;--l)
        ans+=c;
    return ans;
}

//Main function 

string solve()
{
    string s,p;
    cin>>s>>p;
    map<char, int> cs, cp;
    for(auto i:s)
        ++cs[i];
    for(auto i:p)
    {
        ++cp[i];
        --cs[i];
    }
    string ans="";bool before=1;
    for(int i = 1;i<p.length()-1;++i){
        if(p[i]<p[i-1]){
            break;
        }
        else if(p[i]>p[i-1])
        {
            before=0;
            break;
        }
        
    }
    for(auto i:cs)
    {
            if(i.ff==p[0])
            {
                if(before==1)
                    ans+=p;
                ans+=multi(i.ff, i.ss);
                if(before==0)
                    ans+=p;
            }
            else
            {
                ans+=multi(i.ff, i.ss);
            }
            
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(;t>0;--t)
    cout<<solve()<<endl;
}