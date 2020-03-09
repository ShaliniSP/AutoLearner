
    #include<stdio.h>
    int main()
    {
        int i,n;
        int s[101];
            int a=0,b=0;
            scanf("%d",&n);
            for(i=0;i<=n-1;i++)
            {
                scanf("%d",&s[i]);
                if(s[i]%2==0) a++;
                if(s[i]%2==1) b++;
            }
            if(a==b)
                printf("NOT READY\n");
            else if(a>b)
                printf("READY FOR BATTLE\n");
            else if(a<b)
                printf("NOT READY\n");
        return 0;
    }
    

