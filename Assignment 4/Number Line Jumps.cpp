
//https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include<iostream>
using namespace std;

int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x1>x2 || v1>v2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
