
//https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin>>input;
    long sum=0;
    for(int i=0;i<input;i++){
        
        long a;
        cin>>a;
        sum=sum+a;
    }
    cout<<sum;
    return 0;
}
