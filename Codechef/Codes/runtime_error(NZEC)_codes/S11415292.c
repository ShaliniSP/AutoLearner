
    #include<stdio.h>
    int main()
    {
        int n,a[100],c_e=0,c_o=0,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            {
                c_e++;
            }else{
            c_o++;}
        }
        if(c_e>c_o)
        {
            printf("READY FOR BATTLE");
        }else
        {
    
            printf("NOT READY");
        }
    }

