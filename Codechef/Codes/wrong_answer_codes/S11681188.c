
    #include<stdio.h>
    int main(){
    int t,i,c=0,b=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    int a=0;
    scanf("%d",&a);
    if((a%2)==0)b=b+1;
    else{c=c+1;}
    }
    if(b>c)printf("ready");
    else printf("not ready");
    return 0;
    }
    

