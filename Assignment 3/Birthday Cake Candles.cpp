
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int temp;
    temp=arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]==temp){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
