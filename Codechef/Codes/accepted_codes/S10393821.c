
    #include<stdio.h>
    int main()
    {
        int n,i,even;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                even++;
        }
        if(even>(n-even))
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }

