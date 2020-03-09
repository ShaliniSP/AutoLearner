
    #include<stdio.h>
    int main()
    {
        int n,i,a,r,s;
        scanf("%d",&n);
    r=0;s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2==0)
            s++;
            else
            r++;
        }
        if(s>r)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    }
    

