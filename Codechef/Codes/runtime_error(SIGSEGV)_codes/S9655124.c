
    #include<stdio.h>
    void main(){
    int n,a[n],c1=0,c2=0,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",a);
    }
    for(i=0;i<n-1;i++){
        if(a[i]%2==0)
        c1++;
        else
        c2++;
    }
    if(c1>c2)
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
    }
    

