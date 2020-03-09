
    #include<stdio.h>
    int main()
    {
    
        int n,ce=0,co=0,j=0;
        printf("Enter the number \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter n number of elements \n");
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
                printf("READY");
            else
               printf("NOT READY");
    
    return 0;
        }
    

