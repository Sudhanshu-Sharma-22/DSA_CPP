
//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    for (int i=n;i>0 ;i=i/10 ) {
        sum=sum+(i%10);
    }
    printf("%d",sum);
        return 0;
}
