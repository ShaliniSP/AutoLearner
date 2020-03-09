
    #include<stdio.h>
    int main()
    {
    int n, i, A[100], counte=0, counto=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d\b", A+i);
    for(i=0;i<n;i++)
    {
    if(A[i]%2==0)
    counte++;
    else
    counto++;
    } 
    if(counte>counto)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }
    

