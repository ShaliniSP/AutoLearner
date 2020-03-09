
    #include<stdio.h>
    int main()
    {
        int n,arr[100];int count=0;int i;int x;
    
    
    
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
            for(i=0;i<n;i++)
            {
                x=arr[i];
                if(x%2==0)
                arr[i]=1;
                else
                    arr[i]=0;
            }
            for(i=0;i<n;i++)
            {
                if(arr[i]==1)
                    count=count+1;
                else count=count-1;
            }
            if(count>=1)
                printf("READY FOR BATTLE");
            else printf("NOT READY");
    
    
    
        return 0;
    }
    

