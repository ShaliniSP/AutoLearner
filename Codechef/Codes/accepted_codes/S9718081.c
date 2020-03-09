
    #include<stdio.h>
    int main()
    {
       int i,n,ce=0,co=0,*p;
       scanf("%d",&n);
        p=(int*) malloc(n * sizeof(int));
         for(i=0;i<n;i++)
          {
           scanf("%d",(p+i));
          }
        for(i=0;i<n;i++)
        { 
           if(*(p+i)%2==0)
            ce++;
           else co++;
        }
       if(ce>co)
         printf("READY FOR BATTLE\n");
       else printf("NOT READY\n");
    
    return 0;
    }
    
    

