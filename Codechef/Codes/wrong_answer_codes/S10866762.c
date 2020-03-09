
    #include<stdio.h>
    int main()
    {
            int x,y,i,n;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            x=0;y=0;
            for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                    x++;
                else
                    y++;
            }
            if(x<=y)
                printf("NOT READY\n");
            else
                printf("READY\n");
        return 0;
    }
    

