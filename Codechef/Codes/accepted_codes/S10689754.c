
    #include<stdio.h>
    int main()
    {
    int i,n,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    c++;
    else
    d++;
    }
    if(c>d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

