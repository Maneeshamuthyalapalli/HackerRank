#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return (* (int*)a - * (int*)b );
}

int main(){
    int n,min,i; 
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    min=a[1]-a[0];
    for(i=0;i<n-1;i++){
        if(min>(a[i+1]-a[i])){
            min=(a[i+1]-a[i]);
        }
    }
    printf("%d",min);
    return 0;
}
