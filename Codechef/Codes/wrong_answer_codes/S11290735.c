
    #include <stdio.h>
    int main()
    {
    int even=0;
    int odd=0;
    printf("Enter number of soldiers /n");
    int s;
    int i;
    scanf("%d",&s);
    int A[s];
    printf("Enter the weapons with each soldier /n");
    for(i=0; i<s; i++)
    {
    scanf("%d",&A[i]);
    }
    for(i=0; i<s; i++)
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
    return 0;
    }  

