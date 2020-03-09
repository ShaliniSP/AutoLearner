
    #include<stdio.h>
    int main(void)
    {
        int n,c=0,i,d=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        i=0;
        while(i<n)
        {
            if(a[i]%2==0)
            {
                c++;
            }
            else
            {
                d++;
            }
            i++;
        }
        if(c>d)
        {
            printf("READY FOR BATTLE\n");
        }
        else
        {
            printf("NOT READY\n");
        }
    }

