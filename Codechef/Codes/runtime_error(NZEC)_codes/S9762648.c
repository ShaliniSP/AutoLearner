
    #include<stdio.h>
    int main(){
        int ctr1=0,ctr2=0,n,num;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&num);
            if(num%2==0)
                ctr1++;
            else ctr2++;
        }
        if(ctr1>ctr2)
            printf("READY FOR BATTLE");
        else printf("NOT READY");
    }
    

