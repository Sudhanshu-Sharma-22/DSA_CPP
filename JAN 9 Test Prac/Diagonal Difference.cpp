
//https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,ans,primary=0,secondary=0;
    cin>>a;
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>arr[i][j];
        }
    }
   /* for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j) primary+=arr[i][j];   
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i+j==a-1) secondary+=arr[i][j];
        }
    }
    //cout<<primary<<endl<<secondary;
    ans=abs(primary-secondary);
    cout<<ans;
    return 0;
}
