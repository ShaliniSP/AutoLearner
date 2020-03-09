
    #include <stdio.h>
    
    int main(void)
    {
    	int n,a;
    	int r,nr;
    	scanf(" %d",&n);
    	r=nr=0;
    	while(n--){
    		scanf(" %d",&a);
    		if(a%2==0)
    			r++;
    		else
    			nr++;
    	}
    	printf("%s\n",r>nr?"READY FOR BATTLE":"NOT READY");
    
    	return 0;
    }
    

