
    #include<stdio.h>
    
    int main()
    
    {
    
    int a[1000],n;
    
    int t,count,i;
    
    scanf("%d",&t);
    
    while(t--)
    
    {
    
    scanf("%d",&n);
    
    count=0;
    
    for(i=0;i<n;i++)
    
    {
    
    scanf("%d",&a[i]);
    
    }
    
    for(i=0;i<n;i++)
    
    {
    
    if(a[i]%2==0)
    
    count++;
    
    }
    
    if(count>(n-count))
    
    
    printf("READY FOR BATTLE\n  ");
    
    else 
    
    printf("NOT READY\n  ");
    
    }
    
    }
    
    

