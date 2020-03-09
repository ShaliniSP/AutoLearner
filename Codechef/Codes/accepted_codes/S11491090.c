
    #include<stdio.h>
    int main()
    {
    int n,a=0,b=0,p[200],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
    if(p[i]%2==0)
    a++;
    else
    b++;
    }
    if (a>b)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }
    

