
    #include<stdio.h>
    void main()
    {
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[n]);
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    count++;
    }
    if(count>(n/2))
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

