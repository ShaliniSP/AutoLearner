
    #include<stdio.h>
    int main()
    {
        int t,i,lucky=0,unlucky=0;
        scanf("%d",&t);
        int a[t];
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
             if((a[i]%2)==0)
            {
                lucky++;
            }
            else
            {
                unlucky++;
            }
    
        }
        if(lucky>unlucky)
        {
            printf("READY FOR BATTLE");
        }
        else if(unlucky>lucky)
        {
            printf("NOT READY");
        }
        else
        {
            printf("NOT READY");
        }
    
        return 0;
    }
    

