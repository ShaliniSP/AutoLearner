
    #include <stdio.h>
    int main ()
    {
        int N;
        scanf("%d",&N);
        
        int l=0,u=0;
        int i,x;
        
        for(i=0;i<=N;i++)
        {
            scanf("%d",&x);
            
            if((x%2)==0)
            l++;
            
            else
            u++;
        }
        
        if(l>u)
        printf("READY FOR BATTLE");
        
        else
        printf("NOT READY");
        
        
        
    }

