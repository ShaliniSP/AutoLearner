
    /**
     * amr15a.c
     *
     * Yatharth Manocha
     * yathman97@gmail.com
     *
     * Mahasena  
     *
     * Determines whether the army is "READY FOR BATTLE" or "NOT READY".
     * 
     */
     
    // includes
    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void) 
    {
        int N;
        
        scanf("%d", &N);
        
        int i;
        int count_lucky = 0;
        int count_unlucky = 0;
        
        for (i = 0; i < N; ++i)
        {
            int A;
            scanf("%d", &A);
            
            if (A % 2 == 0)
                ++count_lucky;
            else
                ++count_unlucky;
        }
        
        if (count_lucky > count_unlucky)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY\n");
    
        return 0;
    }

