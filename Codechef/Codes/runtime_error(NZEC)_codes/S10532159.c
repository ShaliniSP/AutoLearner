
    #include<stdio.h>
    int main(){
    int i,n,c=0,a;
        scanf("%d\n",&n);
        for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0)
        c+=1;
        }
        if(c>n-c)
        printf("READY FOR BATTLE");
        else
        printf("NOT READY");
    }
    
    

