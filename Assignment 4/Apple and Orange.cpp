
//https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b;
    cin>>s>>t>>a>>b;
    int num1,num2;
    cin>>num1>>num2;
    vector<int>apples(num1);
    vector<int>oranges(num2);
    int count_apples=0,count_oranges=0;
    for(int i=0;i<apples.size();i++){
        cin>>apples[i];
        apples[i]+=a;
    }
    for(int i=0;i<oranges.size();i++){
        cin>>oranges[i];
        oranges[i]+=b;
    }
    for(int i=0;i<apples.size();i++){
        int temp=apples[i];
        if(temp>=s && temp<=t) count_apples++;
    }
    for(int i=0;i<oranges.size();i++){
        int temp=oranges[i];
        if(temp>=s && temp<=t) count_oranges++;
    }
    cout<<count_apples<<endl<<count_oranges;
    return 0;
}
