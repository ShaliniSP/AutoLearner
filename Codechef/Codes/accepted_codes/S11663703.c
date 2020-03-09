
    #include<stdio.h>
    
    int main()
    {
        int n, element, evenCount = 0, oddCount = 0;
        scanf( "%d", &n );
        while( n -- )
        {
            scanf( "%d", &element );
            if( element & 1 )
                oddCount ++;
            else
                evenCount ++;
        }
        if( evenCount > oddCount )
            puts( "READY FOR BATTLE" );
        else
            puts( "NOT READY" );
        return 0;
    }
    

