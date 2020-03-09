
    #include <stdio.h>
    
    int main() {
        
        
        int tests = 0, i,j=0,cnt=0;
        int a[1000];
        scanf("%d",&tests);
        //printf("scanned test\n");
        for(i = 0; i< tests; i++)
        {
            //printf("scanning input\n");
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0)
            cnt++;
            else
            j++;
        }
        /*for(i = 0;i<tests;i++)
        {
          //  printf("checking data\n");
            
           
        }*/
       // printf("%d %d", cnt, j); 
        if(cnt>j)
        printf("READY FOR BATTLE\n");
        else if(j >= cnt)
        printf("NOT READY\n");
        
        return 0;
        
    }

