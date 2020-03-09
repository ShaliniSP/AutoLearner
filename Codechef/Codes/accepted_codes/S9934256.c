
    #include<stdio.h>
    int main()
    {
    int n,str[100],i,v=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&str[i]);
    
    for(i=0;i<n;i++)
    {
    if(str[i]%2==0)
    v++;
    else
    d++;
    }
    if(v>d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }
    
    
    
    

