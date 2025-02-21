#include<bits/stdc++.h>
using namespace std;
int lcs(string &s1,string&s2,int n,int m){
    if(n==0 || m==0)
    return 0;
    if(s1[n-1]==s2[m-1])
    return 1+lcs(s1,s2,m-1,n-1);
    else
    return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));    
}

int main(){
     int n,m;
     string s1,s2;
     cin>>s1>>s2;
     n=s1.size();
     m=s2.size();
     cout<<lcs(s1,s2,m,n)<<endl;


}
