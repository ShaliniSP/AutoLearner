
    #include<stdio.h>
    int main()
    {
    int n,a=0,b=0,i;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&p[i]);
    if(p[i]%2==0)
    a=1;
    else
    b=1;
    }
    if(a>b)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }
    

