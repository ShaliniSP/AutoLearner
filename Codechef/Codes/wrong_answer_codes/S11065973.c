
    #include<stdio.h>
    int main()
    {
        int t,i,c=0,b=0;
        scanf("%d",&t);
        int a[t];
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
             if((a[i]%2)==0)
            {
                c++;
            }
            else
            {
                b++;
            }
    
        }
        if(c>b)
        {
            printf("READY FOR BATTLE");
        }
        else if(b>c)
        {
            printf("NOT READY");
        }
        return 0;
    }
    

