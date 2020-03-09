
    #include<stdio.h>
    int main()
    {
        int n,lucky=0,notlucky=0,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2 ==0){lucky++;}
            else{notlucky++;}
        }
        if(lucky>notlucky){printf("READY FOR BATTLE");}
        else{printf("NOT READY");}
        return 0;
    }

