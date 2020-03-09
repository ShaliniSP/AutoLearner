
    #include<iostream.h>
    main()
    {
    int sold,arr[100],count=0,count1=0;
    printf("enter number of soldiers");
    scanf("%d",&sold);
    for(int i=0;i<sold;i++)
    {scanf("%d",&arr[i]);
     if(arr[i]%2==0)
     count++;
     else
     {count1++;
     }
     }
     if(count1>count)
     {
     printf("not ready");
     }
     else 
     printf("ready");
     }
     
    

