
    #include<stdio.h>
    int main()
    {
    int n,i,ce,co;
    scanf("%d",&n);
    int arr[n];
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
    printf("Ready FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }
    

