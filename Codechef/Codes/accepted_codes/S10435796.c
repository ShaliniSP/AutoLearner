
    #include <stdio.h>
    
    int main(){
        int n,i,ceven = 0,codd = 0;
        int arr[150];
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
            if(arr[i]%2==0)
                ceven ++;
            else codd ++;
        }
        if(ceven>codd) printf("READY FOR BATTLE");
        else printf("NOT READY");
        return 0;
    }
    

