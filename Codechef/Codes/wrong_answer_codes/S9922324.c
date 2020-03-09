
    #include<stdio.h>
    int main()
    {int n,i,e,o,a[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    e=0;
    o=0;
    for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                ++e;
            }else{++o;}
        }
        if(e>0)
            printf("READY FOR BATTLE");
        else printf("NOT READY");
        return 0;
    }
    

