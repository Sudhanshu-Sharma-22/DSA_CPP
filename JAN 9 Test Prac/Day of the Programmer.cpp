
//https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    // cout<<year;
    string s;
    int day=256;
    if(year>1918){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 ==0) day=day-244;
    else day=day-243;
    }
    else if(year==1918) day=26;
    else if(year<1918){
        if(year%4==0 || year%400==0) day=day-244;
        else day=day-243;
    }
    cout<<day<<"."<<"09"<<"."<<year;
    return 0;
}
