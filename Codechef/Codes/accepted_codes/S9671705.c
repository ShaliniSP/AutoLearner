
    #include<stdio.h>
    int main()
    {
    int i,n,a[100],c=0,d=0;
    scanf("%d",&n);
    for(i=0 ; i < n ; i++)
    {
    scanf("%d",&a[i]);
    if(a[i] % 2 == 0)
    {
    c = c + 1;
    }
    if(a[i] % 2 != 0)
    {
    d = d + 1;
    }
    }
    if(c > d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

