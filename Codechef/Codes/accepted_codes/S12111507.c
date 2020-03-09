
    #include<stdio.h>
    
    int main(){
        int x,n,i,o=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&x);
            o+=x%2;
        }
        if(n-o>o){
            printf("READY FOR BATTLE\n");
        }
        else{
            printf("NOT READY\n");
        }
        return 0;
    }
    

