
    #include<stdio.h>
    int main()
    {
        int t=1;
        while(t--)
        {
            int n;
            int even_count=0,odd_count=0;
            int i,temp;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&temp);
                if(temp%2==0)
                    even_count++;
                else
                    odd_count++;
            }
            if(even_count>odd_count)
                printf("READY FOR BATTLE\n");
            else
                printf("NOT READY\n");
        }
        return 0;
    }
    

