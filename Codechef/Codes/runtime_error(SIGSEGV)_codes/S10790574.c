
    #include<stdio.h>
    int main()
    {
    int N;
    scan: printf("enter no of soldiers");
    scanf("%d",&N);
    if(N>100 || N<1)
    goto scan;
    int A[N];
    int i=0;
    for(i=0;i<N;i++)
    {printf("enter weapons for soldier %d",(i+1));
    input: scanf("%d",A[i]);
    if(A[i]>100 || A[i]<1)
    {printf("enter again");
    goto input;}
    }
    int o=0,e=0;
    for(i=0;i<N;i++)
    {
    if(A[i]%2==0)
    e++;
    else 
    o++;
    }
    if(e>o)
    printf("ready for battle");
    else
    printf("not ready");
    }

