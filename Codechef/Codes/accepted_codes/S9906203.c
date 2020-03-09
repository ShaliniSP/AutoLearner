
    #include<stdio.h>
     int main()
     {
          int n,i;
          scanf("%d", &n);
    
            int a[n];
    
          for (i=0; i<n; i++)
            scanf("%d", &a[i]);
    
            int oddcount =0;
            int evencount =0;
    
                for(i=0;i<n; i++)
                {
                    if(a[i]%2==0)
                        evencount++;
                    else
                        oddcount++;
                }
    
                if(evencount>oddcount)
                    printf("READY FOR BATTLE");
    
    
                    else
                    printf("NOT READY");
    
    
    
    return 0;
    
     }
    

