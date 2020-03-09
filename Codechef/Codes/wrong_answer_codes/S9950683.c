
    #include <stdio.h>
    int main(void)
    {
    int N;int i,k,j=0;
    printf("Enter the number of soldiers\n");
    scanf("%d",&N);
    int A;
    printf("Enter the number of weapons held by each soldier");
    for(i=0;i<N;i++)
    {
    scanf("%d",&A);
    if(A%2==0)
    {j++;}
    else 
    k++;
    }
    
    if(j>k)
    {printf("Ready for Battle");}
    else
    {printf("Not Ready for Battle");}
    return 0;
    }
    

