
    #include<stdio.h>
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
        int a;
        scanf("%d",&a);
        int s[a],i,r=0,n=0;
        for(i=0;i<a;i++)
            scanf("%d",&s[i]);
        for(i=0;i<a;i++)
        {
            if(s[i]%2==0)
                r++;
            else
                n++;
        }
        if(r>n)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        }
        return 0;
    }

