
    #include<stdio.h>
    int main(){
    int i,n,c=0;
        scanf("%d\n",&n);
        int arr[n];
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        c+=1;
        }
        if(c>n-c)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    }
    
    

