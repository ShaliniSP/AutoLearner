
    #include<stdio.h>
    int main()
    {
        int i,n,a[100],count=0,countt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            count++;
            else
            countt++;
        }
        if(count>countt)
        printf("READY");
        else
        printf("NOT READY");
    
    
    
    }
    

