
    #include<stdio.h>
    int main(void)
    {
        int n,i,even=0,odd=0,a[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            even++;
            else
                odd++;}
        if(even>odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
            return 0;
    }
    

