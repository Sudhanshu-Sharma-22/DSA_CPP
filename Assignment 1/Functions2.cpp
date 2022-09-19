
//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>
using namespace std;
int adder(int a,int b){
    a=a+b;
    return a;
}
int subtracter(int a,int b){
    if (b>a) {
        b=b-a;
        return b;
    }
    else {
        b=a-b;
        return b;
    }
}
int main() {
    int a, b;
    std::cin>>a>>b;
    int c =adder(a,b);
    int d =subtracter(a,b);
    std::cout<<c<<endl;
    std::cout<<d<<endl;
    return 0;
}
