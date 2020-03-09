
    #include <stdio.h>
    
    int main(void) {
        int t,count,n;
        int a[100];
        scanf("%d",&n);
        count=0;
        while(n--){
          scanf("%d",&t);
          if(t%2==0){
              count=count+1;
          }
          else{
              count=count-1;
          }
        }
        if(count>0){
            printf("READY FOR BATTLE");
        }
        else{
            printf("NOT READY");
        }
    	return 0;
    }
    

