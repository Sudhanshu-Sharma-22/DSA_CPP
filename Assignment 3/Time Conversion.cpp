
//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[8]=='P' && s[0]=='1' && s[1]=='2'){
        s.pop_back();
        s.pop_back();
        return s;
    }
    else if(s[8]=='P' || (s[0]=='1' && s[1]=='2')) {
        s.pop_back();
        s.pop_back();
        string str;
        str.push_back(s[0]);
        str.push_back(s[1]);
        int num = stoi(str);
        num+=12;
        string temp;
        if(num==24) {
            s[0]='0';
            s[1]='0';
        }
        else {
            temp=to_string(num);
            s[0]=temp[0];
            s[1]=temp[1];
        }
    }
    else{
        s.pop_back();
        s.pop_back();
        return s;
    }
    /*else {
        s.pop_back();
        s.pop_back();
        string str;
        str.push_back(s[0]);
        str.push_back(s[1]);
        int num = stoi(str);
        num+=12;
        string temp=to_string( num);
        s[0]=temp[0];
        s[1]=temp[1];
    }*/
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
