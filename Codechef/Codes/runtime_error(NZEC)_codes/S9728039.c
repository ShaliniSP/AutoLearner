
    #include <stdio.h>
    int main()
    {
      int N,i=0,e,o;
      scanf("%d",&N); int a[N];
      for(i=0;i<N;i++)
        scanf("%d",&a[i]);
       for(i=0;i<N;i++)
      {
          if(a[i]/2 == 0)
            e++;
          else
            o++;
      }
       if(e<=o)
        printf("Not Ready For Battle");
       else
        printf(" Ready for Battle");
    
    }
    

