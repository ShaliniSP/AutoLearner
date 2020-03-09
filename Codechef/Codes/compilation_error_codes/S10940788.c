
    #include<stdio.h>
    #include<math.h>
    
    int main(){
    int n ; 
    scanf("%d",&n);
    int a[n];
    	while(n >0){
    	scanf("%d",&a[i]);
    	n--;
    	}
    	int i,j ,c=0,d=0; 
    	for(i=0;i<n;i++){
    		if ( a[i] % 2 == 0 )
    				c++ ;
    		else
    				d++;
    		
    		}		
    	if(c>d)	
    	printf("READY FOR BATTLE \n");
    	else
    	printf("NOT READY \n");
    	
    	}		
    	}

