
    #include<stdio.h>
    main()
    {int N,i;
    int count1=0,count2=0;
     char str[101];
     printf("the number of soldiers \n");
     scanf("%d",&N);
    scanf("%s",str);
    
     for(i=0;i<N;i++)
     {
         if(str[i]% 2 == 0)
            count1++;
            else
            count2++;
    
     }
     if(count1>count2)
        printf("READY\n");
        else
            printf("NOT READY\n");
        return 0;
    
    }
    

