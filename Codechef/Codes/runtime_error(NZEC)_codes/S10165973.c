
    #include<stdio.h>
    void main()
    {
    int n,i,a[105],l=0,u=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
    l++;
    else
    u++;
    }
    if(l>u)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }
    

