#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long int

int compare(const void *a,const void *b)
{
  return (*(ll*)a-*(ll*)b);
}


int main() 
{
    ll n,i,a[200005],min;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    qsort(a,n,sizeof(ll),compare);
    min=10000000;
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])<min)
        {
            min=a[i+1]-a[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])==min)
        {
            printf("%lld %lld ",a[i],a[i+1]);
        }
    }
    return 0;
}
