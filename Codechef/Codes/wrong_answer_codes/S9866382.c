
    #include<stdio.h>
    int main()
    {
    int n,i,j,ce,co;
    scanf(" %d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
    scanf(" %d",&arr[i]);
    }
    for(j=0;j<n;j++)
        {
    ce=0;
    co=0;
    if(arr[j]%2==0)
    ce++;
    else
    co++;
    }
    if(ce>co)
    {
    printf("Ready FOR BATTLE");
    }
    else if(co>ce|co==ce)
    {
        printf("NOT READY");
    }
    return 0;
    }
    

