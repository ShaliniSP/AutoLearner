
    #include <stdio.h>
    void main()
    {
    int N,sum=0,i=0,a;
    scanf("%d",&N);
    while(i<N)
    {
    scanf("%d",&a);
    if(a%2==1)
    sum++;
    else
    sum--;
    i++;
    }
    if(sum>0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

