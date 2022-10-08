
https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    int n,count=0;
    cin>>s>>t>>n;
    for(int i=s.size();i!=0;i--){
        if(s[i]!=t[i]){
            s.pop_back();
            count++;
        }
        else if(s[i]==t[i] || s.empty()==true){
            int temp=t[i+1];
            s[i+1]=empty;
            s[i+1]=s.push_back(temp);
            count++;
        }
    }
    if(count==n){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
