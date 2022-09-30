
//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    string s,hr,min,sec;
    cin>>s;
    hr[0]=s[0];
    hr[1]=s[1];
    min[0]=s[3];
    min[1]=s[4];
    sec[0]=s[6];
    sec[1]=s[7];
    if(s[8]==80){
        int num=stoi(hr);
        hr=to_string(num+12);
    }
    else{
        int num=stoi(hr);
        hr=to_string(num+12);
    }
    if(hr[0]==50 && hr[1]==52){
            hr[0]=48;
            hr[1]=48;
        }
    cout<<hr[0]<<hr[1]<<":"<<min[0]<<min[1]<<":"<<sec[0]<<sec[1];
    return 0;
}
