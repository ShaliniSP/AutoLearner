
    #include<stdio.h>
    int main()
    {
    int n,i;
    scanf("%d",&n);
    int e=0,o=0;
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==1)
    o++;
    else
    e++;
    }
    if(e>o)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }
    
    

