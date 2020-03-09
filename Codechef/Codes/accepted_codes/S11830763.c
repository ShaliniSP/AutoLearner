
    #include <stdio.h>
    #include<math.h>
    
    int main() 
    {
    	int t, n, i, cr=0, cnr=0;
    	scanf("%d", &t);
    	for(i=0; i<t; i++)
    	{
    		scanf("%d", &n);
    		if(n%2==0)	cr++;
    		else	cnr++;
    	}
    	if(cr>cnr)	printf("READY FOR BATTLE\n");
    	else	printf("NOT READY");
    	return 0;
    }

