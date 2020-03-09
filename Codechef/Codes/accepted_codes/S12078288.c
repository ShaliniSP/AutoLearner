
    #include<stdio.h>
    int main()
        {
            int t,i,n,count=0;
            scanf("%d",&t);
            for(i=0;i<t;i++)
            {
                scanf("%d",&n);
                if(n%2==0)
                    count++;
            }
            if(count>t-count)
                printf("READY FOR BATTLE");
            else
                printf("NOT READY");
            return 0;
        }
    

