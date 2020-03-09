
    #include <stdio.h>
    int main()
    {
    int N;int i,a,k=0;int j=0;
    printf("Enter the number of soldiers\n");
    scanf("%d",&N);
    printf("Enter the number of weapons held by each soldier");
    for(i=0;i<N;i++)
    {
    scanf("%d",&a);
    if(a%2==0)
    j++;
    else 
    k++;
    }
    if(j>k)
    printf("Ready for Battle");
    else
    printf("Not Ready for Battle");
    return 0;
    }
    

