
    #include<stdio.h>
    
    int main()
    {
        long long int n,i,a[100000],x=0,y=0;
        scanf("%lld",&n);
    
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]%2==0)
            x++;
    
            else
            y++;
        }
        if(x>y)
        printf("READY FOR BATTLE\n");
    
        else
        printf("NOT READY\n");
    
        return 0;
    }
    

