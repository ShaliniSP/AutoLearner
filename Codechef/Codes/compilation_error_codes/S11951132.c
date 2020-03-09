
    # include <iostream>
    # include <cstdio>
    
    using namespace std;
    
    int main()
    {
    	int T;
    	scanf("%d",&T);
    	while(T--)
    	{
    		long int n,num,odd,even;
    		odd = even = 0;
    		scanf("%ld",&n);
    		for(long int i = 0; i < N; i++)
    		{
    			scanf("%ld",&num);
    			if(num % 2 == 0)
    				odd++;
    
    			else
    				even++;
    		}
    		if(odd < even)
    			printf("READY FOR BATTLE\n");
    
    		else
    			printf("NOT READY\n");
    	}
    	return 0;
    }

