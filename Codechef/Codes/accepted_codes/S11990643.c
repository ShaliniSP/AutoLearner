
    #include<stdio.h>
    int main()
    {
        int n, i, a, flag=0, p=0;
        scanf("%d", &n);
        for(i=0;i<n;++i)
        {
            scanf("%d", &a);
            if(a%2==0)
                flag++;
            else p++;
        }
        if(flag>p)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

