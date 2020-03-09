
    #include<stdio.h>
    int main()
    {
        int num,i,j,k;
        scanf("%d",&num);
        int a[num];
        for(i=0;i<num;i++)
            scanf("%d",&a[i]);
        j=0;
        k=0;
        for(i=0;i<num;i++)
        {
            if(a[i]%2==0)
                j++;
            else
                k++;
        }
        if(j>k)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    }
    

