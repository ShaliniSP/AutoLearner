
    #include<stdio.h>
    int main(){
    int t,n,i,count=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
    scanf("%d",&n);
    if(n%2==0)
    count++;
    }
    if(count%2==0)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    
    return 0;
    }
    
    

