
    #include<stdio.h>
    int main()
    {
    	 int n  , count1 =0 , count2 = 0 , num; 
    	 scanf("%d" , &n) ;   
    	 while ( n --)
    	 {
    	 	 scanf("%d" , &num) ;  
    	 	
    	 
    	 	 if ( num % 2 ==0)
    	 	 {
    	 	 	 count1 ++ ; 
    		  }
    		  else
    		  {
    		  	 count2 ++ ; 
    		  }
    	}
    	 
    	 if ( count1> count2)
    	 {
    	 	 printf ("READY FOR BATTLE") ; 
    	 }
    	 else 
    	 {
    	 	 printf("NOT READY") ; 
    	 }
    	 
    }

