
    #include<stdio.h>
    int main()
    {
        int a,n,i,s,o;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        s=0,o=0;
        scanf("%d",&a);
        if(a%2==0)
            s++;
        else
            o++;
        }
        if(s>o)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

