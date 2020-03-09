
    #include<stdio.h>
    int main(void)
    {
      int n,i,e=0,o=0,t;
      scanf("%d",&n);
    
      for(i=0;i<n;i++)
       {
          scanf("%d",&t);
          if(t%2==0)
             e++;
          else
             o++;
        }
       if(e>o)
        printf("READY FOR BATTLE\n");
       else
         printf("NOT READY\n");
      return 0;
    }

