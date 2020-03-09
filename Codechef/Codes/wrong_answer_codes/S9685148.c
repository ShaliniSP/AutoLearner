
    #include<stdio.h>
     
    int main()
    {
    int n=0;
    scanf("%d",&n);
    int k=0;
    for(;k<n;k++)
    {
    if(scanf("%d")%2)
    k++;
    else
    k--;
    }
     
    if(k>0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
     
    return 0;
    } 

