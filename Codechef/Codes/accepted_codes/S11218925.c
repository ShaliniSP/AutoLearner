
    #include<stdio.h>
    
    int main()
    {
        int n,i,even,odd,arr;
        even=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr);
            if(arr%2==0)
                even++;
        }
        odd=n-even;
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

