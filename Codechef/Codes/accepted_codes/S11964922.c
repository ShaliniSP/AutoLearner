
    #include<stdio.h>
    int main()
    {
        int i,num,j,m;
        int a[100];
         int count1,count2;
         count1 = 0;
         count2 = 0;
       scanf("%d",&num);
    
      for(i=0;i<num;i++)
      {
          scanf("%d",&a[i]);
      }
    
        for(i=0;i<num;i++)
        {
            if(a[i]%2==0)
            {
               count1++;    // bracket must be included if 'if; is followed by else
            }
               else
               {
                count2++;
               }
           }
    
           if(count1>count2)
           {
               printf("READY FOR BATTLE\n");
           }
    
           else
           {
              printf("NOT READY\n");
           }
    
      return 0;
    }
    

