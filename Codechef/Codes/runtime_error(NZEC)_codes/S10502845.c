
    #include<stdio.h>
    int main()
    {
    	 int n  , i=0 , count1 =0 , count2 = 0 , num; 
    	 scanf("%d" , &n) ; 
    	 int a[n] ;
    	 int q = n ;  
    	 while ( n --)
    	 {
    	 	 scanf("%d" , &a[i]) ; 
    	 	 i ++ ; 
    	 }
    	 for ( i=0 ; i<q ; i++)
    	 {
    	 	 num = a[i] ; 
    	 	 if ( num % 2 ==0)
    	 	 {
    	 	 	 count1 ++ ; 
    		  }
    		  else if ( num %2 !=0)
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

