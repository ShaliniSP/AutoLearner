
    #include<stdio.h>
    int main()
    {
    int A[100];
    int N;
    int i=0,lucky=0,unlucky=0;
    scanf("%d",&N);
    while(i<N)
    {
    scanf("%d",&A[i]);
    if(A[i]%2==0)
    lucky++;
    else
    unlucky++;
    i++;
    }
    if(unlucky>=lucky)
    printf("NOT READY");
    else
    printf("READY FOR BATTLE");
    return 0;
    }
    

