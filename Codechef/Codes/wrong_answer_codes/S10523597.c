
    #include<stdio.h>
    
     int main( void )
    {
      int even = 0 , odd = 0 , n , temp;
      
      scanf( "%d" , &n );
      
      	while( n-- )
         {
           scanf( "%d" , &temp );
           
           	if ( temp % 2 )
                 odd++;
                else
                 even++;
         }
         
          if ( even > odd )           
           printf( "READY fOR BATTLE\n" );
          else
           printf( "NOT READY\n" );
         
      return 0;
    }                 	
      
    

