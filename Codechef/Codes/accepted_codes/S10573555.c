
    #include <stdio.h>
    
    int main(void) {
    
    
       int t,i;
       scanf("%d",&t);
        int a[t],c1=0,c2=0;
       for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
          if(a[i]%2==0)
           c1++;
           
           else
            c2++;
        }  
         if(c1>c2)
          printf("READY FOR BATTLE");
          
         else
          printf("NOT READY");
           
    	return 0;
    }
    
    

