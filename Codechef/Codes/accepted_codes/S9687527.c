
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {int n;
        scanf("%d",&n);
        int i,m=0,ar[n],k=0;
    
       for(i=0;i<n;i++)
       {
           scanf("%d",&ar[i]);
       if(ar[i]%2==0)
       {
           m++;
       }
       else
       k++;
       }
       if(m>k)
        printf("READY FOR BATTLE \n");
        else
            printf("NOT READY \n");
        return 0;
    }
    

