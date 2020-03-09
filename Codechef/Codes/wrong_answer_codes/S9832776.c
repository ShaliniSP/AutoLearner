
    #include<stdio.h>
       int main(){
          int n;
          scanf("%d",&n);
    	  int ev=0,odd=0;
          int a;
          int i;
          for (i=0;i<n;i++){
    	        scanf("%d",&a);
    			if(!(a%2))			   
    			ev++;
    			else odd++;
                }
           if (ev>odd)
    	      printf("READY");
    	   else printf("NOT READY");
    	     return 0;}
    		 
    	  

