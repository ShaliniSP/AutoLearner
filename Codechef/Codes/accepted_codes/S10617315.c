
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int a[100],n,i,c;
        scanf("%d",&n);
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                c++;
        }
        if(n%2!=0)
            {
            if(c>=(n+1)/2)
            printf("READY FOR BATTLE");
            else
                printf("NOT READY");
            }
            else
            {
            if(c>(n+1)/2)
            printf("READY FOR BATTLE");
            else
                printf("NOT READY");
            }
        return 0;
    }

