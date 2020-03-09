
    #include <stdio.h>
    
    int main(){
        int n,x,odd = 0, even = 0;
        scanf("%d",&n);
        
        while(n--){
            scanf("%d",&x);
            
            if(x%2 == 0)
                even++;
            else
                odd++;
                
            if(odd > even)
                printf("NOT READY\n");
            else
                printf("READY FOR BATTLE\n");
        }
        return 0;
    }

