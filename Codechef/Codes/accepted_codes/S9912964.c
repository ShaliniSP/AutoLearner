
    #include <stdio.h>
    
    int main(){
    
            int N, tmp, idx, lucky;
    
            scanf("%d", &N);
    
            lucky = 0;
            for(idx = 1; idx <= N; idx++){
                    scanf("%d", &tmp);
                    tmp % 2 ? lucky-- : lucky++;
            }
            lucky > 0 ? printf("READY FOR BATTLE\n") : printf("NOT READY\n");
            return 0;
    }
    

