
    #include<stdio.h>
    main()
    {
     int a,b,c=0,d=0,i;
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     {
         scanf("%d",&b);
         if(b%2==0)
         c++;
         else
         d++;
     }
     if(c>d)
     printf("READY FOR BATTLE\n");
     else
     printf("NOT READY\n");
        
        return 0;
    }

