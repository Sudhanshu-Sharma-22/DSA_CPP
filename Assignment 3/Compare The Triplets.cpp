
//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int bob=0,alice=0;
    vector<int>arr1(100);
    vector<int>arr2(100);
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<3;j++){
        cin>>arr2[j];
    }
    /*for(int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<3;j++){
        cout<<arr2[j]<<" ";
    }*/
    for(int i=0,j=0;i<3,j<3;i++,j++){
        if (arr1[i]>arr2[j]) {
            bob=bob+1;
        }
        else if (arr1[i]<arr2[j]) {
            alice=alice+1;
        }
    }
    cout<<bob<<" "<<alice;
    return 0;
}
