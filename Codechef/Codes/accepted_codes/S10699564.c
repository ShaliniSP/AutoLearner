
    #include<stdio.h>
    
     int main()
    {
    int n;
    scanf("%d",&n);
    int i,j=0,k=0,a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        j=j+1;
        }
    else
    {
        k=k+1;
        }
    }
    if(j>k)
    printf("\n READY FOR BATTLE");
    else
    printf("\ NOT READY");
    return 0;
    }
    

