
    #include <stdio.h>
    
    int main(){
        int soldiers;
        scanf("%d", &soldiers);
    
        int array[soldiers], i, even = 0, odd = 0;
        for(i = 0; i < soldiers; i++){
            scanf("%d", &array[i]);
            if(array[i] % 2 == 0)
                even++;
            else
                odd++;
        }
    
        if(even > odd)
            printf("READY FOR BATTLE\n");
        else
            printf("NOT READY");
    
        return 0;
    
    }
    
    

