
//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp=arr[i]+arr[j];
            if(i==j) {
                // temp=arr[i]+arr[j+1];
                continue;
            }
            // else int temp=arr[i]+arr[j];
            // cout<<temp<<endl;
            if(temp%k==0){
                count++;
            }
        }
    }
    count=count/2;
    cout<<count;
    return 0;
}
