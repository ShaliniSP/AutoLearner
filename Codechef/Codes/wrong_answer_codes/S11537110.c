
    #include<stdio.h>
    
    int main()
    {
        int n;
        scanf("%d",&n);
        int array[n];
        int count;
        int i=0;
        while(i<n)
        {
            scanf("%d",&array[i]);
            i++;
        }
       i=0;
       while(i<n)
       {
           count=count+array[i];
           
       
           i++;  
       }
        if(count%2==0)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
            
    
       
    
    
    
    
        return 0;
    }

