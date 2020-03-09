
    #include<stdio.h>
    
    int main()
    {
        int n;
        scanf("%d", &n);
    
        int i, w[n];
        for(i=0; i<n; i++){
            scanf("%d", &w[i]);
        }
    
        int even=0, odd=0;
        for(i=0; i<n; i++){
            if(w[i]%2 == 0)
                even++;
            else
                odd++;
        }
    
        if(even>odd)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
    
        return 0;
    }
    

