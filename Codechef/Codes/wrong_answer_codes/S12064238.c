
    #include <stdio.h>
    
    int main(void) {
        int n,i,w[n],counte=0,counto=0;
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &w[i]);
        }
        for(i=0;i<n;i++){
            if(w[i]%2==0){
                counte++;
                continue;
            }
            else{
                counto++;
            }
        }
        if(counte>counto)
          printf("READY");
        else
          printf("NOT READY");
        return(0);
    }
    
    

