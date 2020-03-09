
    <include<stdio.h>
    
    int main()
    {
    int i,n,arr[150],count=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    count=count+1;
    }
    if(count%2==0)
    printf("READY FOR BATTLE");
    else
    print("NOT READY");
    
    }

