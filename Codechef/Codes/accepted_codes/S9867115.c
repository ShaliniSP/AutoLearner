
    #include<stdio.h>
    int main()
    {
    int n,i,ce,co;
    scanf("%d",&n);
    int arr[101];
    ce=0;
    co=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    ce++;
    else
    co++;
    }
    if(ce>co)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }
    

