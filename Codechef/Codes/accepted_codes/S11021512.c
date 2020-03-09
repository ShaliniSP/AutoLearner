
    #include<stdio.h>
    int main(){
    int t,n,i,count=0,count1=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
    scanf("%d",&n);
    if(n%2==0)
    count++;
    else
    count1++;
    }
    if(count>count1)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    
    return 0;
    }
    
    

