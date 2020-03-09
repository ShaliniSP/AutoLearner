
    #include<stdio.h>
    int main()
    {
        int t,n;
        scanf("%d",&t);
        while(t--)
        {
           scanf("%d",&n);
           int arr[n],i,cnt1=0,cnt2=0;
           for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
            for(i=0;i<n;i++)
               if(arr[i]%2==0)
                    cnt1+=1;
                    else
                        cnt2+=1;
                        if(cnt1>cnt2)
                            printf("READY FOR BATTLE\n");
                        else
                            printf("NOT READY\n");
        }
        return 0;
    }
    

