
    #include<stdio.h>
    main()
    {
    int a,b,i,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    { scanf("%d",&b);
      if(b%2==0)count++;
      }
      if(count>a/2)printf("READY FOR BATTLE");
      else printf("NOT READY");
    
       
      return 0;
      }

