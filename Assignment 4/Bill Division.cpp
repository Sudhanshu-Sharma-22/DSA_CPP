
//https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,sum=0;
    cin>>n>>k;
    vector<int>bill(n);
    for(int i=0;i<n;i++){
        cin>>bill[i];
        if(i!=k) sum+=bill[i];
    }
    int charged;
    cin>>charged;
    sum=sum/2;
    if(sum<charged) cout<<charged-sum;
    else cout<<"Bon Appetit";
    return 0;
}
