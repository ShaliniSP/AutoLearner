
    #include<stdio.h>
    int main()
    {
        int nos,odd,even,i,a[100];
        odd=0,even=0;
        scanf("%d",&nos);
        for(i=0;i<nos;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<nos;i++)
        {
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

