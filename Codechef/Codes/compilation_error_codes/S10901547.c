
    //Preetham.G
    //Amr15A.c
    //Mahasena
    #include<stdio.h>
    int main()
    {
        int n,i,c1=0,c2=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                c1++;
            else
                c2++;
        }
        if(c1>c2)
            printf("\nREADY FOR BATTLE")
        else
            printf("\nNOT READY");
        return 0;
    }

