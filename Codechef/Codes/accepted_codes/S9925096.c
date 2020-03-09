
    #include<stdio.h>
    int main()
    {
        int n,a=0,b=0,i;
        scanf("%d",&n);
        int sena[n];
        for(i=0;i<n;i++)
        scanf("\n%d",&sena[i]);
         for(i=0;i<n;i++)
        {
            if(sena[i]%2==0)
            a++;
            else
            b++;
        }
        if(a>b)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
        return 0;
    }
    

