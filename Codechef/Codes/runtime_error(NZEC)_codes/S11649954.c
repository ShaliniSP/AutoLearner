
    #include<stdio.h>
    int main()
    {
       int i,j,k,arr[100],counte=0,counto=0;
       scanf("%d\n",&j);
       for(i=0;i<j;i++)
       {
           scanf("%d ",&arr[i]);
       }
       for(k=0;k<j;k++)
       {
           if(arr[k]%2==0)
           {
               counte=counte+1;
           }
           else
           {
               counto=counto+1;
           
           }
       }
       if(counte>counto)
       {
           printf("READY FOR BATTLE");
       }
       else
       {
           printf("NOT READY");
       }
    }

