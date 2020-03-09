
    #include<stdio.h>
    
    int main()
    {
       int a,even=0,odd=0,i,w;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&w);
            if(w%2==0)
                even++;
            else
                odd++;
        }
        printf(even>odd?"READY FOR BATTLE" : "NOT READY");
    
    
        return 0;
    }
    

