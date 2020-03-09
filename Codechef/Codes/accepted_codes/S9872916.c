
    #include<stdio.h>
    int main()
    {
        int n,even=0,odd=0,num;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&num);
            if(num%2==0)
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
    

