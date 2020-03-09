
    #include <stdio.h>
    
    int main(){
        int n,arr[100],i,c=0,d=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        c++;
        else
        d++;
        }
        if(c>d)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    return 0;
    }

