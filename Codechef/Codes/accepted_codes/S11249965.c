
    #include<stdio.h>
    int main()
    {
    int n,c=0,c1=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    c++;
    else
    c1++;
    }
    if(c>c1)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }

