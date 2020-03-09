
    #include<stdio.h>
    #include<conio.h>
    void main()
    {int n,c=0,a[100],i;
    clrscr();
    printf("\nEnter no of soldiers:");
    scanf("%d",&n);
    printf("\nEnter no  of weapons each soldier had");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
     { c++;
     }
    }
    if(c>n/2)
    {printf("\nREADY");
    }
    else
     printf("\nNOT READY");
    
    getch();
    }

