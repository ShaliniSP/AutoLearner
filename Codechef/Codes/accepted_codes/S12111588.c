
    #include<stdio.h>
     
    int main()
    {
        int n,i,j,a,sum,add;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            sum=0;
            add=0;
            scanf("%d",&a);
            if(a%2==0)
                sum++;
            else
                add++;
        }
        if(sum>add)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }

