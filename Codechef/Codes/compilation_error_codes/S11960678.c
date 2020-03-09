
    #include<stdio.h>
    
    int main()
    {
       int n;
       scanf("%d",&n);
       int a[n],count1=0,count2=0;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           if(a[i]%2==0)
             count2+=1;
           else
             count1+=1;
       }
       if(count1>=count2)
        prinf("NOT READY\n");
       if(count1<count2)
        printf("READY FOR BATTLE\n");
      return 0;
     }          
             

