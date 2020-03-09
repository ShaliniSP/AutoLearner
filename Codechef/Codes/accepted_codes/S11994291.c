
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
    
    
        int n;
        scanf("%d",&n);
    
        int a[n];
        int i;
    
        int o,e;
        o=0;
        e=0;
    
        for(i=0;i<n;i++){
    
            scanf("%d",&a[i]);
    
            if(a[i]%2 == 0){
    
                e++;
    
    
            }else{
    
    
                    o++;
    
            }
    
    
        }
    
    
    
        if(e > o){
    
            printf("READY FOR BATTLE\n");
    
    
        }else{
    
            printf("NOT READY\n");
    
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        return 0;
    }
    

