
    #include <stdio.h>
    #include <stdlib.h>
    
    int main ()
    {
         int i,j,t,ce=0,co=0,n,a;
    
    
        scanf("%d",&n);
    
    
    
    
            for (j=0;j<n;j++)
            {
                scanf("%d",&a);
                if (a%2==0)
                    ce++;
                else
                    co++;
            }
            if (ce>co)
                printf("READY FOR BATTLE\n");
            else
                printf("NOT READY\n");
    
    
    
        }
    
    
    
    
    
    
    

