
    #include<stdio.h>
    int main()
    {
    int n,i;
    scanf("%d",&n);
    int a[n],o=0,e=0;
    for( i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
     e++;
    else
        o++;
    }
    if(e>o)
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
    
    return 0;
    
    }
    

