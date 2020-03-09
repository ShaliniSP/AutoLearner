
    #include<stdio.h>
    int main()
    {
            int i,count=0,count1=0,k;
            int p;
            scanf("%d",&p);
            for(i = 1; i <= p; i++){
                    scanf("%d",&k);
            }
            for(i = 0 ;i <= p ; i++){
                    if(k % 2 == 0)
                            count++;
                    else
                            count1++;
            }
            if( count > count1)
                    printf("READY FOR BATTLE");
            else
                    printf("NOT READY");
    }
    

