
    #include<stdio.h>
    
    int main()
    {
        int n,i,even=0,odd=0,arr;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr);
            if(arr%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    }
    

