
    #include<stdio.h>
    int main()
    {int n,i,m,c1=0,c2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&m);
    if((m%2)==0)
    {
    c1++;
    }
    else
    {
    c2++;
    }
    }
    if(c1>c2)
    {
    printf("READY FOR BATTLE");
    }
    else
    {
    printf("NOT READY");
    }
    return 0;
    }

