
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
        int t;
        int num_weapon[100];
        int even_count = 0;
        int odd_count = 0;
        int i;
        scanf("%d", &t);
    
        for (i=0; i<t; i++){
            scanf("%d", &num_weapon[i]);
            if ((num_weapon[i] % 2) == 0){
                even_count+=1;
            }
            else odd_count+=1;
        }
    
        if (even_count > odd_count){
            printf("READY FOR BATTLE\n");
        }
        else printf("NOT READY\n");
    
    
        return 0;
    }

