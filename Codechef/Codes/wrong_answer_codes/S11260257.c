
    //
    //  main.c
    //  1
    //
    //  Created by Manan Manwani on 21/08/16.
    //  Copyright © 2016 Manan Manwani. All rights reserved.
    //
    
    #include <stdio.h>
    
    int main()
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,red,nred;
            
        for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
            if (arr[i]%2==0)
                red++;
                else
                nred++;
            }
            
        if(red>nred)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        i++;
        
        
        return 0;
    }
    

