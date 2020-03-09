
        #include<stdio.h>
         
        int main()
        {
            int n,hld,i;
            scanf("%d",&n);
            int odd=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&hld);
               if(hld&1==1)
               odd++;
            }
            ((n/2)>odd)?printf("READY FOR BATTLE"):printf("NOT READY");
            return 0;
        } 
    
    

