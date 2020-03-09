
    #include<stdio.h>
    
    int main()
    {int n,c=0,a[100],i;
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
    {printf("\nREADY FOR BATTLE");
    }
    else
     printf("\nNOT READY");
    
    return 0;
    }

