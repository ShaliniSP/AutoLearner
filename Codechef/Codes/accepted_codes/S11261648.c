
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
        int arr[n],i,red=0,nred=0;
            
        for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
            if (arr[i]%2==0 && arr[i]!=0)
                red++;
                else
                nred++;
            }
            
        if(red>nred)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        i++;
        
        
        return 0;
    }
    

