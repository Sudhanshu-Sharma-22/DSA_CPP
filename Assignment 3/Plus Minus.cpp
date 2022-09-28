
//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int size;
    float positive=0,negative=0,zero=0;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }
/*    int b=arr.size();
    cout<<b<<endl;
    cout<<positive<<endl;
    cout<<negative<<endl;
    cout<<zero<<endl;*/
    printf("%0.5f",positive/arr.size());
    cout<<endl;
    printf("%0.5f",negative/arr.size());
    cout<<endl;
    printf("%0.5f",zero/arr.size());
    /*
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }*/
    return 0;
}
