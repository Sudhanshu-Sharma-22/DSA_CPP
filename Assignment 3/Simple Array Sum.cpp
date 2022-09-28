
//https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int output(int num,int arr[]){
    int sum=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    
    
    int sum = output(num , arr);
    cout<<sum;
    return 0;
}
