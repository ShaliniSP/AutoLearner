
    #include<stdio.h>
    void main()
    {
    int i,n,a[100],even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

