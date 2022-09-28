
//https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=n-i-1;k<n;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
