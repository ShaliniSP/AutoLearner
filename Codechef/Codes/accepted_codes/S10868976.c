
    #include<stdio.h>
    int main()
    {
    int N,A[100],i,sum=0;
    scanf("%d",&N);
    while(N>0)
    {
    
    
    scanf("%d",&A[i]);
    N--;}
    for(i=0;i<100;i++)
    sum = sum + A[i];
    if(sum%2==0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    
    }
    

