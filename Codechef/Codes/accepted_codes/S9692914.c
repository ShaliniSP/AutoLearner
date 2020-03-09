
    #include<stdio.h>                                                                                                                                                                                           
    
     int main()
     {
       int n, i, k, even, odd;
    
       even = 0;
    
       odd = 0;
    
       scanf("%d", &n);
    
       for (i =0; i<n ; i++)
       {
         scanf("%d", &k );
    
         if (k %2 ==0 )
           even ++;
          else
           odd ++;
    
       }
    
       if ( even > odd )
         printf("READY FOR BATTLE\n");
       else
         printf("NOT READY\n");
    
    return 0;
    
     }

