
    #include<stdio.h>
    int main(){
     int n,a[100],i,even=0,odd=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
       scanf("%d",&a[i]);
       if((a[i]%2)==0){
        even+=1;
       }else{
        odd+=1;
       }
     }
     if(even>odd){
       printf("READY FOR BATTLE");
     }else{
       printf("NOT READY");
     }
    
    
    
    return 0;
    }
    

