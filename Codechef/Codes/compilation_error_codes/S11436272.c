
    #include<stdio.h>
    int main()
    {
    int N,A[100],c=0,d=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%d",&A[i]);
    if(A[i]%2==0)
    c++;
    else
    d++;
    }
    if(c>d)
    printf("READY FOR BATTLE");
    else
    pritf("NOT READY");
    }
    

