
    #include<stdio.h>
    int main()
    {
    int n,c=0,b=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    c=1;
    else
    b=1;
    }
    if(c>b)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }
    

