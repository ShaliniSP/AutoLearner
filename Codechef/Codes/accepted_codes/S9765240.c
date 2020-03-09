
    #include<stdio.h>
    int main()
    {
        int n,i,cev=0,codd=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cev++;
            }
            else 
            {
                codd++;
            }
        }
        if(cev>codd)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        return 0;
    }

