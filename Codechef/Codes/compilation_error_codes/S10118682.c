
    #include<stdio.h>
    #include<conio.h>
    
    main()
    {
        int n,a[100],b[100],i,k,j;
        printf("enter the number of soldiers");
        scanf("%d",&n);
        printf("enter number of weapons each one is having");
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            if(b[i]%2==0)
            {
                k++;
            }
            else
            {
                j++;
            }
        }
        if(k>j)
        {
    printf("good to go for war");
        }
        else{printf("not good to go");}
    }
    

