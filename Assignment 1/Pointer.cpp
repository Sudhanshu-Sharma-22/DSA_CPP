
//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void update(int *n,int *m) {
    int i=*n,j=*m;
    *m=abs(i-j);
    *n=i+j;  
}

int main() {
    int n,m;
    int *a = &n,*b = &m;
    
    scanf("%d %d",&n,&m);
    update(a,b);
    printf("%d\n%d",n,m);

    return 0;
}
