
    #include <stdio.h>
    void main()
    {
    int N;int j=0;int x;
    printf("Enter the number of soldiers\n");
    scanf("%d",&N);
    int A[N];
    printf("Enter the number of weapons held by each soldier");
    for(int i=0;i<N;i++)
    {
    scanf("%d",&A[i]);
    if(A[i]%2==0)
    {j=j+1;}
    }
    x=N-j;
    if(j>x)
    {printf("Ready for Battle");}
    else
    {printf("Not Ready for Battle");}
    }
    

