#include <stdio.h>
#include <math.h>

int n,fn,fp=1,fpp=1; i=3;

printf("Unesite Sumu");

scanf("%d",&n);
while(i<=n){
    fn=fp+fpp;
    fpp=fp;
    fp=fn;
    i++;
}
printf("Fibonacci je %d",fn);