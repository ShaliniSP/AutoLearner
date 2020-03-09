
    #include<stdio.h>
    int main()
    {
        int t,i,a[100],c=0,d=0;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        scanf("%d",&a[i]);
        for(i=0;i<t;i++)
        {
                        if(a[i]%2==0)
                        c++;
                        else
                        d++;
                        }
                        if(c>d)
                        printf("READY FOR BATTLE\n");
                        else
                        printf("NOT READY\n");
                        return 0;
                        }
        
    

