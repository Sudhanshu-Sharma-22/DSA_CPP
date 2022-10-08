
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count_min=0,count_max=0;
    cin>>n;
    vector<int>score(n);
    for(int i=0;i<score.size();i++){
        cin>>score[i];
    }
    int max=score[0],min=score[0];
    for(int i=0;i<score.size();i++){
        int temp=score[i];
        if(temp<min){
            min=temp;
            count_min++;
        }
        if(temp>max){
            max=temp;
            count_max++;
        }
    }
    cout<<count_max<<" "<<count_min;
    return 0;
}
