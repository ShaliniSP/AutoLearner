
    #include<stdio.h>
    int main()
    {
        int i,n,se,so,a[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
          scanf("%d",&a[i]);
        se=0;so=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                 se++;
            else
                so++;
        }
        if(se>so)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    }
    

