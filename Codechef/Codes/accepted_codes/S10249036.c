
    #include<stdio.h>
    int main()
    {
    int i,n,j,a[104],even=0,odd=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=1;i<=n;i++)
    {
    if(a[i]%2==0)
    {
    even=even+1;
    }
    else
    {
    odd=odd+1;
    }
    
    }
    if(even>odd)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    
    /*for(i=1;i<=n;i++)
    {
    printf("%d\n",a[i]);
    }*/
    
    return 0;
    }
    

