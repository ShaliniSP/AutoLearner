
    #include<stdio.h>
    int main()
    {
        
        int n;
        scanf("%d",&n);
        int a[100],i,c1=0,c2=0;
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            
            if(a[i]%2==0)
            c1++;
            else
            c2++;
            
        }
        
        if(c1>c2)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        
     return 0;   
    }
    
    
    

