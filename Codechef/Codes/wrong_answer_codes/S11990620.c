
    #include<stdio.h>
    int main()
    {
        //freopen("test.in", "r", stdin);
        int t, i, a, j, p;
        scanf("%d", &t);
        while(t--)
        {
            scanf("%d", &a);
            int b[a];
            for(i=0;i<a;++i)
                scanf("%d", &b[i]);
            for(j=0;j<a;j++)
            {
                if(b[j]!=0)
                    p=b[j];
                for(i=j+1;i<a;i++)
                    if(p==b[i])
                    {
                        b[i]=0;
                        b[j]=0;
                        break;
                    }
            }
            for(i=0;i<a;i++)
                if(b[i]!=0)
                    printf("%d\n", b[i]);
        }
        return 0;
    }
    

