
    #include<stdio.h>
    int main()
    {
         int n,i,lazy=0,ready=0;
         int weapons[n];
         scanf("%d",&n);
         for(i=0;i<=n-2;i++)
         {
             scanf("%d\t",&weapons[i]);
         }
         for(i=0;i<=n-2;i++)
         {
             if(weapons[i]%2==0)
                {ready=ready+1;}
             else lazy=lazy+1;
         }
         if(ready>lazy)
            {printf("READY FOR BATTLE");}
         if(lazy>=ready){ printf("NOT READY");}
         
         return 0;
    }
    

