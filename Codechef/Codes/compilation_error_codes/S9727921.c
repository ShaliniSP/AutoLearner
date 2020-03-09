
    #include<stdio.h>
    
    int main()
    {
    
    int even=0,odd=0,n,i,j;
    int arr[];
    printf("enter the number of soldiers\n");
    scanf("%d",&n);
    printf("enter the number of weapons carried by each soldier\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    printf(" ");
    }
    for(j=0;j<n;j++)
    {
    if(arr[j]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    return 0;
    }
     
     

