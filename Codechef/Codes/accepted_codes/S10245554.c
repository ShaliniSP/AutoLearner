
    //
    //  main.c
    //  mahasena
    //
    //  Created by NISHANT DAYAL on 31/05/16.
    //  Copyright © 2016 NISHANT DAYAL. All rights reserved.
    //
    
    #include <stdio.h>
    
    int main()
    {
        int n,i,noofeven=0,noofodd=0;
        scanf("%d",&n);
        int a[100];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                noofeven++;
            else
                noofodd++;
        }
        
        if(noofeven>noofodd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        
        return 0;
    }
    

