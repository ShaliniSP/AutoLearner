
    #include<stdio.h>
    int main(){
        int n,a,i;
        scanf("%d",&n);
        int even=0,odd=0;
        while(t--){
            scanf("%d",&a);
            (a&1==1)?odd++:even++;
            (even>odd)?printf("READY FOR BATTLE"):printf("NOT READY");
    	}
        return 0;
    }

