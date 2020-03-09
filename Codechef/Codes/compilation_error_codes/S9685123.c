
    include<stdio.h>
    void main() 
    { long int i,num,n,k;
     int count=0;
      scanf("%lu lu",&n,&k);
       for(i=0;i<n;i++) {
        if(num%k==0) {
         count++;
          }
       }
           printf("%d",count); 
           getch();
    }

