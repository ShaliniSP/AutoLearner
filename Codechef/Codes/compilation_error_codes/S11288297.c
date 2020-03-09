
    include <stdio.h>
    int main()
    {
    int even=0;
    int odd=0;
    printf("Enter number of soldiers /n");
    int s;
    scanf("%d",&s);
    int A[100];
    printf("Enter the weapons with each soldier /n");
    for(int i=0; i<s; i++)
    {
    scanf("%d",&A[i]);
    }
    for(int i=0; i<s; i++)
    {
    if(A[i]%2==0)
    even=even+1;
    else
    odd=odd+1;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;}

