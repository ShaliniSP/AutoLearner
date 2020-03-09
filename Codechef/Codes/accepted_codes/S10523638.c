
    #include<stdio.h>
    
     int main( void )
    {
      int i , odd = 0 , even = 0 , n , temp;
      
      scanf( "%d" , &n );
      
      	for( i = 0 ; i < n ; i++ )
           {
             scanf( "%d" , &temp );
             
             	if( temp % 2 )
             	 odd++;
             	else
             	 even++;
           }
           
            if( even > odd )
             printf( "READY FOR BATTLE\n" );
            else
             printf( "NOT READY\n" );
             
       return 0;
    }                 	  
             	  	  

