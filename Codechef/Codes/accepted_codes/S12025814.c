
    #include<stdio.h>
    int main(){
     int n;
     scanf("%d",&n);
     if(n>=1&&n<=100){
      int a,b=0,c=0,i;
      for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0)
            b=b+1;
        else
            c=c+1;}
       if(b>c)
        printf("READY FOR BATTLE\n");
       else
        printf("NOT READY\n");}
     return 0;
    }
    

