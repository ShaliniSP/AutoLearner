
    #include<stdio.h>
    int main(void){
    int n,count=0,count1=0;
    int values[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    scanf("%d",values[i]);
    
    if(values[i]%2==0)
    {count++;
    }
    else
    count1++;
    
    }
    if(count>count1)
    { printf("READY FOR BATTLE");
    }
    else
    printf("NOT READY");
    }
    
    

