
    include<stdio.h>
    int main(){
    int n,i,ce=0,co=0;
    scanf("%d",n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",a[i]);
    if(a[i]%2=0){
    ce=ce+1;
    }
    else{
    co=co+1;
       }
       }
       if(ce>co){
       printf("READY FOR BATTEL");
       }
       else{
       printf("NOT READY");
       }
       RETURN 0;
       } 
     
    

