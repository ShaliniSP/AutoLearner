
    #include<stdio.h>
    int main()
    {
        int i,n,counte,counto;
        scanf("%d",&n);
        int a[100];
        counte=0;
        counto=0;
    
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                counte++;
            }
            else
            {
                counto++;
            }
    
        }
            if(counte>counto)
            {
                printf("READY FOR BATTLE");
            }
            else
            {
                           printf("NOT READY");
            }
    
    
    return 0;
    
    }
    

