
    #include<stdio.h>
    int main(){
    int i,n,m,odd=0,even=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
    even=even+1;
    }
    else{odd=odd+1;}
    }
    if(even>odd){
    printf("READY FOR BATTLE");
    }else{
    printf("NOT READY");
    }
    return 0;
    }

