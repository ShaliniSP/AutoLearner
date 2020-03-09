
    #include<stdio.h>
    int main()
    {
        int t,a,ceven=0,codd=0;
        scanf("%d",&t);
        while(t--)
        {
          scanf("%d",&a);
          if(a%2==0)
            ceven++;
          else
            codd++;
        }
        if(ceven>codd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }
    

