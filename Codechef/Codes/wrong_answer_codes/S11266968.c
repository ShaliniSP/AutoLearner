
    #include<stdio.h>
    int main()
    {
        int n,arr[200],i,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if((arr[i]%2)==0)
                sum=sum+1;
        }
        if((sum%2)==0)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

