
    #include<stdio.h>
    #include<stdlib.h>
    
    int main(){
    
    int *soldiers,size;
    int i;
    int even_count=0,odd_count=0;
    
        scanf("%d",&size);
        soldiers=(int*)calloc(size,sizeof(int));
    
         for(i=0;i<size;i++){
            scanf("%d",&soldiers[i]);
         }
    
         for(i=0;i<size;i++){
            if((soldiers[i]%2)==0){
             ++even_count;
            }else{
             ++odd_count;
            }
         }
         if(even_count>odd_count){
           printf("READY FOR BATTLE\n");
         }else{
           printf("NOT READY\n");
         }
         free(soldiers);
    return 0;
    }
    

