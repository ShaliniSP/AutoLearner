
    #include<stdio.h>
    int main(){
        int n,i,count=0,add=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            
        }
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                count+=1;
                
            }
            else{
                add+=1;
                
            }
            
        }
        if(count>add){
            puts("READY FOR BATTLE");
            
        }
        else{
            puts("NOT READY");
            
        }
        return 0;
    }

