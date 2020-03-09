
    #include<stdio.h>
    int main()
    {
        int i,n,a[100],count1,count2 ;
           count1=0 ;
           count2=0 ;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
           scanf("%d",&a[i]);
           }
           for(i=0;i<n;i++)
           {
           if(a[i]%2==0)
           count1++ ;
           else
           count2++ ;
           }
           if(count1>count2)
           printf("READY FOR BATTLE\n");
           else
           printf("NOT READY\n");
        }
    

