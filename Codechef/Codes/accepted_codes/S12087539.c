
    #include<stdio.h>
    int main()
    {
    int n,i,j=0,k=0;
    int a[n];
    scanf("%d",&n);	
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    k++;
    else
    j++;	
    }
    if(k>j)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;	
    }
    

