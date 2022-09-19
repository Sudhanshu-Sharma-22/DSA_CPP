
//https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c=a+b;
    cout<<c<<endl;
    c=a;
    a[0]=b[0];
    b[0]=c[0];
    cout<<a<<" "<<b;
    return 0;
}
