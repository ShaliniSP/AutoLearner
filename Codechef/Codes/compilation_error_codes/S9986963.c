
    #include<stdio.h>
    int main()
    {
        int w,n,a[100];
        scanf("%d",&n);
        int e=0,o=0;
        int k=0;
        while(n>0)
        {
            scanf("%d",&w);
            a[k]=w;
            if(a[k]%2==0)
                e++;
            else
                o++;
            k++;
            n--;
        }
        if(o>=e)
            printf("NOT READY");
        else
            printf("READY");
    return 0;

