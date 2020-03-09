
    #include<stdio.h>
    int main()
    {
        int n,a,b=0,c=0,i;
        scanf("%d",&n);
        if((1<=n)&&(n<=100))
        {
            for(i=0;i<n;i++)
            {
                a=0;
                scanf("%d",&a);
                if(a%2==0)
                    b++;
                else
                    c++;
            }
            if(b>c)
                printf("READY TO WAR");
            else
                printf("NOT READY");
        }
        return 0;
    }

