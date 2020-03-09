
    #include <stdio.h>
    
    int main(){
    
        int n, count, countLucky = 0, countUnlucky = 0;
        scanf("%d", &n);
    
        while (n > 0){
    
            scanf("%d", &count);
            if (count%2 == 0) countLucky++;
            else countUnlucky++;
    
            n--;
        }
    
        if (countLucky > countUnlucky) printf("READY FOR BATTLE");
        else printf("NOT READY");
    
    
    return 0;
    }
    

