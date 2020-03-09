
    #include<stdio.h>
    int main()
    {
    int i,N,A[101],a,b;
    scanf("%d",&N);
    while(N--)
    {
    for(i=0;i<N;i++)
    {
    if(a[i]%2==0)
    a++;
    else 
    b++;
    }
    if((a-b)>=1)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }return 0;
    }

