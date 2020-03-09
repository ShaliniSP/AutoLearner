
    #include <stdio.h>
    #define READY "READY FOR BATTLE"
    #define NOT_READY "NOT READY"
    
    int main(void) {
    
        int num_weapons, lucky = 0, unlucky = 0, n;
    
        scanf("%d", &n);
        while (n--) {
            scanf("%d", &num_weapons);
            if (num_weapons & 1)
                unlucky++;
            else
                lucky++;
        }
    
        printf("%s\n", (lucky > unlucky ? READY : NOT_READY));
    
        return 0;
    }
    

