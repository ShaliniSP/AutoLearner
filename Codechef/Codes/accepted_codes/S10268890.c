
    #include<stdio.h>
    int main()
    {
    int t,i,n,even=0,odd=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&n);
    if(n%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }
    

