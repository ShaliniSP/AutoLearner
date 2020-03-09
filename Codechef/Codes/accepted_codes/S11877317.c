
    # include <stdio.h>
     
    int main ( void ) {
     
    	int n , weapon , count = 0 , i ;
     
    	scanf ( "%d" , & n ) ;
     
    	for ( i = 0 ; i < n ; i ++ ) {
     
    		scanf ( "%d" , & weapon ) ;
     
    		if ( weapon % 2 == 0 ) {
     
    			count ++ ;
     
    		}
     
    	}
     
    	count > n - count ? printf ( "READY FOR BATTLE" ) : printf ( "NOT READY" ) ;
     
    	return 0;
    } 

