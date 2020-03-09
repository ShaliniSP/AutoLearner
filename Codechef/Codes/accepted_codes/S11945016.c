
    #include <stdio.h>
    int main()
    {
        int n,a[105],i=0,r=0,nr=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if((a[i]%2)==0)
            {
                r++;
            }
            else
            {
                nr++;
            }
        }
        if(r>nr)
        {
            printf("READY FOR BATTLE");
        }
        else
        printf("NOT READY");
        return 0;
    }

