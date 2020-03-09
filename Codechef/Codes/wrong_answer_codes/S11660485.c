
    /*-------Mahasena-------*/
    
    
    
    #include<stdio.h>
    int main(void)
    {
        int a=0,b=0,c,i[10],j;
        scanf("%d",&c);
        for(j=0;j<c;j++){
            scanf("%d",&i[j]);
        }
        for(j=0;j<c;j++){
            if(i[j]%2==0)
               a++;
            else{
                b++;
            }
        }
        if(a>b)
            printf("RAEDY FOR BATTLE\n");
        else
            printf("NOT READY\n");
        return 0;
    }
    

