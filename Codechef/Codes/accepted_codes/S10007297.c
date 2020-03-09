
    #include<stdio.h>
     int main()
      {    
                int n,arr[1000],i,v=0,c=0;
               scanf("%d",&n);
              for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
              for(i=0;i<n;i++)
               {
                   if(arr[i]%2==0)
                     v++;
                    else
                            c++;
                }
           if(v>c)
            printf("READY FOR BATTLE");
           else
             printf("NOT READY");
    return 0;
    }

