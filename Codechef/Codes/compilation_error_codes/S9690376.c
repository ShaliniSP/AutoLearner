
    #include<stdio.h>
    
    int main()
    {
    int N,A[101],i,a=0,b=0;
    scanf("%d",&N);
    while(N--)
    {
    for(i=0;i<n;i++)
    {
    scanf("%d",A[i]);
    }
    for(i=0;i<n;i++)
    {
    if(A[i]%2==0)
    a++;
    else b++;
    }
    if((a-b)>=1)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    }return 0;
    }

