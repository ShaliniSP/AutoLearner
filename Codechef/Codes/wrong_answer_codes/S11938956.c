
    #include <stdio.h>
    int main()
    {
        int n,i,e=0,o=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                e++;
                else
                    o++;
        }
        if(e>o)
            printf("READY\n");
        else
            printf("NOT READY\n");
           return 0;
        }
    

