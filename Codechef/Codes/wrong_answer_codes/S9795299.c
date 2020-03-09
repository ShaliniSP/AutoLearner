
    #include<stdio.h>
    int main(){
        int n,i,ae=0,ao=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i]%2==0)
                ao++;
                else
                ae++;
        }
       
        if(ao>=ae){
            printf("NOT READY");
        }
        else{
            printf("READY FOR BATTLE");
        }
        return 0;
    }

