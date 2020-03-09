
    #include<stdio.h>
    int main()
    {
        int t,even=0,odd=0;
        scanf("%d",&t);
        while(t--)
        {
            int a;
            scanf("%d",&a);
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

