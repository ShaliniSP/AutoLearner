
    #include<stdio.h>
    
    int main()
    {
        int a[100];
        int i,n,count=0;
        int count1=0;
        scanf("%d",&n);
        
        for(i=1; i<=n; i++)
        {
        scanf("%d",&a[i]);
        }
        
        for(i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        
        if(count>count1)
        {
         printf("READY FOR BATTLE");
        }
        else
        {
           printf("NOT READY"); 
        }
        return 0;
    }

