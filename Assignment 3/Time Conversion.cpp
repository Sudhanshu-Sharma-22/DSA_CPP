
//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    //cout<<s;
    int temp;
    temp=s[0]+s[1];
    if(temp=103){
        s[0]=1;
        s[1]=9;
    }
    
    cout<<s;
    return 0;
}
