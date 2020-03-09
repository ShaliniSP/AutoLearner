
    #include<stdio.h>
    int main() 
    {
    int t,i,a=0,b=0;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++){
    scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++){
    if (n[i]%2==0) { a++;}
    else {b++;}
    }
    if (a>b) printf("READY FOR BATTLE\n");
    else printf("NOT READY\n");
    return 0;
    }    

