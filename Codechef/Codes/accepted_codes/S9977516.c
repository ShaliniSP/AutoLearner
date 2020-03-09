
    #include<stdio.h>
    
    int main(){
        int s,n[100];
        int i,count =0;
        scanf("%d",&s);
        for(i=0;i<s;i++){
            scanf("%d",&n[i]);
            if(n[i]%2==0){
                ++count;
            }
        }
       // printf("%d",count);
        if(count>(s-count)){
            printf("READY FOR BATTLE");
        }
        else{
            printf("NOT READY");
        }
        return 0;
    }

