
    #include<stdio.h>
    int main(){
        int num,lucky=0,unlucky=0,soldier[100],i;
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&soldier[i]);
            if((soldier[i]%2)==0)
                lucky++;
            else
                unlucky++;
        }
        if(lucky>unlucky)
            printf("READY FOR BATTLE");
        else
            printf("NOT READY");
        return 0;
    }

