
//https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    vector<long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
   long min_sum=0,max_sum=0;
   /* for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        min_sum=min_sum+arr[i];
    }
    for(int i=n-1;i>0;i--){
        max_sum=max_sum+arr[i];
    }
    cout<<min_sum<<" "<<max_sum;
    
    return 0;
}
