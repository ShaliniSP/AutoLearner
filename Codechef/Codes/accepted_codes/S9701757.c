
    #include<stdio.h>
    int main()
    { int ns,nw,even=0,odd=0,i;
      scanf("%d",&ns);
      for(i=0;i<ns;i++)
      { scanf("%d",&nw);
        if(nw%2==0)
        even++;
        else
        odd++;
      }
      if(even>odd)
      printf("READY FOR BATTLE\n");
      else
      printf("NOT READY\n");
      return 0;
    }
    
    

