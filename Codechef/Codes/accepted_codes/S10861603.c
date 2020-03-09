
    #include<stdio.h>
    int main()
    {
        int n,a[1000],e=0,o=0,i=0;
    
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }e=0;o=0;
          for(i=0;i<n;i++)
         {
            if(a[i]%2==0)
            {
                e++;
            }
            else{o++;}
    
    
         }
         if(e>o)
         {
           printf("READY FOR BATTLE\n");
         }
         else{printf("NOT READY\n");}
    
        return 0;
    }
    

