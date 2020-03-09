
    #include <stdio.h>
    #include <stdlib.h>
    #include<math.h>
    
    
    
    int main()
    {
    
    	int n,eve,odd,i,m;
    	eve=0;odd=0;
    	//freopen("rq.txt","r",stdin);
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
      	scanf("%d",&m);
      	if(m%2==0)
      		eve++;
      	else
      		odd++;
    	}
    	if(eve>odd)
    	printf("READY FOR BATTLE");
    	else
    	printf("NOT READY");
        return 0;
    }

