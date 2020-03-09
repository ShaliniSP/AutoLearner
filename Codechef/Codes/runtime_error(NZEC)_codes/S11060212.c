
    #include<stdio.h>
    main()
    {
      int n,i,a,b;
      a=0;
      b=0;
      scanf("%d",&n);
      int arr[n];
      for(i=0;i<n;i++)
      {
       scanf("%d",&arr[i]);
       if(arr[i]%2==0)
       ++a;
       else
       ++b;
      }
      if(a>b)
      printf("READY FOR BATTLE");
      else
      printf("NOT READY");
    }
    

