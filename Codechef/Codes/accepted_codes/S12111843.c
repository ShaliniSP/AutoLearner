
    #include<stdio.h>
    int main()
    {
        int t,m,n,a[150],b,i,j,k,even=0,odd=0;
        float p,q,r,ha,cc,ts;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
          scanf("%d",&a[i]);
        }
        for(j=0;j<t;j++)
        {
            if(a[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even>odd)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
    
        }
        return 0;
    }
    
    
    

