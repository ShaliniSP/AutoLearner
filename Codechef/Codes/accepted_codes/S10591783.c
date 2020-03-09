
    #include<stdio.h>
    int main()
    {
    int n,a[100],i,x,e=0;
    scanf("%d",&n);	
      for(i=0;i<n;i++) 
     	{
            scanf("%d",&a[i]);
        }
      for(i=0;i<n;i++)
    		 {
    		 	if(a[i]%2==0)
    		 	   {
    		 	  	   e++;
    			   }
    				   }
    	       if(e>(n-e))
    	     	            {
    	  	                    	printf("READY FOR BATTLE\n");
    			 						   } 
               else
    		       {
    		         	printf("NOT READY\n");
    																			 }									   			             
    return 0;	
    }
    

