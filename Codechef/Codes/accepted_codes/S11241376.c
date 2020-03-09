
    #include<stdio.h>
    void readyOrNot(int[],int);
    int main()
    {
        int i,c,n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        readyOrNot(a,n);
    
        return 0;
    }
    void readyOrNot(int a[],int n)
    {
        int i,c1,c2;
        c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                c1++;
            else
                c2++;
        }
        if(c1>c2)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    
    
    }
    

