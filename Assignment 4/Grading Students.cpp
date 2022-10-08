
https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>grades(n);
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        cin>>grades[i];
    }
    temp=grades;
    for(int i=0;i<n;i++){
        int test=5-(temp[i]%5);
        int up_grade=temp[i]+test;
        if(abs(up_grade-temp[i])==3 && temp[i]>=38){
            grades[i]=temp[i];
        }
        else if(abs(up_grade-temp[i])>3 && temp[i]>=38){
            grades[i]=up_grade;
        }
        else if(abs(up_grade-temp[i])<3 && temp[i]>=38){
            grades[i]=up_grade;
        }
        else if(abs(up_grade-temp[i])==3 && temp[i]>=38){
            grades[i]=temp[i];
        }
        else{
            grades[i]=temp[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<grades[i]<<endl;
    }
    return 0;
}
