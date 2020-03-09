
    #include<stdio.h>
    int main(void)
    {
      int n,i,e=0,o=0;
      int *p;
      scanf("%d",&n);
      p = (int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
       {
          scanf("%d",&p[i]);
          if(p[i]%2==0)
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

