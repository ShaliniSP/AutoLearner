
    #include<stdio.h>
    int main(void)
    {
        int t,temp,even=0,num;
        char ay[20]="READY FOR BATTLE";
        char ay1[20]="NOT READY";
        scanf("%d",&t);
        num=t;
        while(t--)
        {
           scanf("%d",&temp);
           if(temp%2==0)
            even++;
        }
        if(even>(num/2))
         {
            
             printf("%s\n",ay);
         }
        else
        {
            
            printf("%s\n",ay1);
        }
        return 0;
    }
    

