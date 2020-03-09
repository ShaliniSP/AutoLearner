
    #include<stdio.h>
    int main()
    {
    int n,i,arr[100],counte=0,counto=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {if(arr[i]%2==0)
    {counte++;
    }
    else
    counto++;
    }
    if(counte>counto)
    printf("ready for battle");
    else
    printf("not ready for battle");
    return(0);
    }
     

