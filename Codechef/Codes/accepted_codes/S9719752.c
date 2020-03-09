
    #include<stdio.h>
    int main()
    {
    int n,i,a[100],e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
    e=e+1;
    }
    else
    {o=o+1;
    }
    }
    if(e>o)
    {
    printf("READY FOR BATTLE");
    }
    else
    {printf("NOT READY");
    }
    return 0;
    }
    

