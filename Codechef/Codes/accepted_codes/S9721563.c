
    #include<stdio.h>
    int main()
    {
        int n,i,j,p[101],c,d;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&p[i]);
        c=0;d=0;
        for(i=0;i<n;i++)
        {
            if(p[i]%2==0)
            c++;
            else d++;
        }
        if(c>d)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        return 0;
    }

