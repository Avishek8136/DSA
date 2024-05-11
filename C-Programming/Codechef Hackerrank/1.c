#include<stdio.h>
int isprime(int x) {
    for(int i = 2; i <x;i++)
    {
        if(x%i==0)
        return 0;
        else
        return 1;
    }
    return 1;
}

int main(){
    int t,o=0;
    scanf("%d",&t);
    for(int i=0;i<5;i++)
    {
        int n,p,q,w=1;
        scanf("%d",&n);
        int a[n];
        int c=1;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            c=c*a[j];
        }
        for(int j=2;j<n;j++)
        {
            for(int k=2;k<=j;k++)
            {
                if(j%k==0)
                {
                    if(isprime(k))
                    p++;
                    else
                    q++;
                }
                if(p<k)
                {
                    o++;
                    w=w*k;
                }
                if(w==c)
                {
                    printf("%d",o);
                }
                else
                {
                    continue;
                }
            }
        }
    }
}
