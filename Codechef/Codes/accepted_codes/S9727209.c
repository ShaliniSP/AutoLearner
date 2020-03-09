
    #include<stdio.h>
    
    int main(){
        int N,in,even=0,odd=0;
        scanf("%d",&N);
        while(N--){
            scanf("%d",&in);
            if(in%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even>odd){
            printf("READY FOR BATTLE");
        }
        else{
            printf("NOT READY");
        }
        return 0;
    }
    

