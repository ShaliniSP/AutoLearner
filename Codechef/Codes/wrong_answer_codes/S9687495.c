
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {int n;
        scanf("%d",&n);
        int i,m=0,ar[n],r;
    
       for(i=0;i<n;i++)
       {
           scanf("%d",&ar[i]);
       if(ar[i]%2==0)
       {
           m++;
       }
       }
       r=n/2;
       if(m>r)
        printf("ready for battle");
        else
            printf("not ready");
        return 0;
    }
    

