
    #include<stdio.h>
    main()
    {
      int n,i,a,b,c;
      a=0;
      b=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
       scanf("%d",&c);
       if(c%2==0)
       ++a;
       else
       ++b;
    
      }
      if(a>b)
      printf("READY FOR BATTLE");
      else
      printf("NOT READY");
     
     
    
    }
    

