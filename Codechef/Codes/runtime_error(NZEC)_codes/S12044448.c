
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int a,b,c,i,j,k,even=0,odd=0;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&b);
            if(b%2==0)
            {
                even=even+1;
            }
            else
            {
                odd=odd+1;
            }
        }
        if(even>odd)
        {
            printf("READY\n");
        }
        else
        {
            printf("NOT READY\n");
        }
    }
    

