
    #include<stdio.h>
    void main()
    {
    int n,m[100],i,odd=0,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
    if(m[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }
     
     

