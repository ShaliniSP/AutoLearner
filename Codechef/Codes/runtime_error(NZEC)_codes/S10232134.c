
    #include<stdio.h>
    int main()
    {
        int n,a[101],i,m=0,l=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                m++;
            else l++;
            }
            if(m>l)
                printf("READY FOR BATTLE");
            else
                printf("NOT READY");
    }
    

