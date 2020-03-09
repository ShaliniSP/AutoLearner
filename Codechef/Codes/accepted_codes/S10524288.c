
    int main()
    {
        int n;
        scanf("%d",&n);
       int i,t,cnta=0,cntb=0;
         for(i=0;i<n;i++)
         {
             scanf("%d",&t);
             if(t%2==0)
                cnta++;
             else
                cntb++;
         }
          if(cnta>cntb)
            printf("READY FOR BATTLE");
          else
            printf("NOT READY");
       return 0;
    }
      

