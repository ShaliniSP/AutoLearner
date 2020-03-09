
    #include<stdio.h>
    int main()
    {
    
        int n,ce=0,co=0,j=0;
       
        scanf("%d",&n);
        int a[n];
       
        int i=0;
        for(i=0;i<n;i++)
        {
    
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
    
            if(a[j]%2==0)
            {
                ce++;
            }
            else
            {
    
                co++;
    
            }
        }
            if(ce>co)
                printf("READY FOR BATTLE");
            else
               printf("NOT READY");
    
    return 0;
        }
    

