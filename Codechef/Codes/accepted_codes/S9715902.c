
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
      int i,j,lucky=0,unlucky=0;
      scanf("%d",&i);
      int a[1000];
      for(j=0;j<i;j++)
        scanf("%d",&a[j]);
      for(j=0;j<i;j++)
      {
          if(a[j]%2==0)
           {
            lucky++;}
          else
            {unlucky++;}
      }
      if(lucky>unlucky)
          printf("READY FOR BATTLE");
          else
            printf("NOT READY");
    
      return 0;
    }
    

