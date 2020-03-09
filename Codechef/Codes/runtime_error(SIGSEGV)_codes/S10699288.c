
    #include<stdio.h>
    
     void main()
    {
    int n,i,j=0,k=0,a[n];
    
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
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
    {
    printf("\n READY");
    }
    else
    {
    printf("\ NOT READY");
    }
    
    }
    

