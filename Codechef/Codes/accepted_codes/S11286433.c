
    #include<stdio.h>
    int main()
    {
    
        int a,i,c=0,d=0;
        scanf("%d",&a);
        int b[a];
        for(i=0;i<a;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<a;i++)
        {
            if(b[i]%2==0)
                c++;
            else
                d++;
        }
        if(c>d)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
            return 0;
    }
    

