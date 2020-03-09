
    #include<stdio.h>
    int main()
    {
        int t,n,w,i,u,l;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    u=0;l=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&w);
    if((w%2)==0)
    {
    l++;
    }
    else
    {
    u++;
    }
    }
    if(l>u)
    {
    printf("READY FOR BATTLE\n");
    }
    else
    {
    printf("NOT READY\n");
    }
    }
    return 0;
    }
    

