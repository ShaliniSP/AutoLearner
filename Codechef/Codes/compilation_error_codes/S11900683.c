
    n#include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n,counto=0,counte=0;
        scanf("%d",&n);
        int i,q;
        for(i=0;i<n;i++)
        {scanf("%d",&q);
        if(q&1)
        counto++;
        else
        counte++;
        }
        if(counte>counto)
        printf("READY\n");
        else
        printf("NOT READY\n");
        return 0;
    }
    

