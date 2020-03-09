
    #include<stdio.h>
    int main()
    {int n,i;
    scanf("%d",&n);
    int a[n];
    int ce=0,co=0;
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(a[i]%2==0)
    ce++;
    else
    co++;
    }
    if(ce>co)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

