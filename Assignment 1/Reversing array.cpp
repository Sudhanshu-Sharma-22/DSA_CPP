
//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    /*for (int j;j<a;j++){
    cout<<arr[j]<<" ";
    }
    cout<<endl;
    */
    int b=a;
    int arr1[a];
    for(int k=0;k<b;k++){
        arr1[k]=arr[a-1];
        cout<<arr1[k]<<" ";
        a--;
    }
 
    return 0;
}
