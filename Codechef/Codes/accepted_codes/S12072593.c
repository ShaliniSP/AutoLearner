
    #include<stdio.h>
    int main()
    {
       
            int n,count=0;
            scanf("%d",&n);
            int a[n],i;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
    
                if(a[i]%2==0)
                count++;
            }if (count>(n-count))
    
            printf("READY FOR BATTLE\n");
            else
                printf("NOT READY\n");
                return 0;
    
        }
    
    

