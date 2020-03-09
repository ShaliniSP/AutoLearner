
    #include<stdio.h>
    int main()
    {
         int t,i,yes=0,no=0;
         scanf("%d",&t);
         while(t--)
         {
             scanf("%d",&i);
             if(i%2==0)
             yes++;
             else no++;
    
         }
        if(yes>no)
            printf("READY FOR BATTLE");
        else printf("NOT READY");
        return 0;
        }
    

