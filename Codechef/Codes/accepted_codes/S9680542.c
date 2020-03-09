
    #include <stdio.h>
    int main()
    {
    int n;
    scanf("%d",&n);
    int w[n] , i , e=0 , o=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
        if(w[i]%2==0)
        {
            e+=1;
        }else
        {
            o+=1;
        }
    }
    if(e>o)
    {
        printf("READY FOR BATTLE");
        
    }else
    {
        printf("NOT READY");
        
    }
    
    
    
    return 0;
    }

