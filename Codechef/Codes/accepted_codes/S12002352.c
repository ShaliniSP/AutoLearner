
    #include<stdio.h>
    int main()
    {
    int n, i, r=0, c=0;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    r++;
    else
    c++;
    }
    if(r>c)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }

