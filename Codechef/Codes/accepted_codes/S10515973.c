
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int l=0,ul=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                l++;
            else
                ul++;
        }
        if(l>ul)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    
    

