
    #include<stdio.h>
    int main(){
        int t,n,even=0,odd=0;
        scanf("%d",&t);
        while(t--){
            scanf("%d",&n);
            if(n%2==0){
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

