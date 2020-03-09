
    #include <stdio.h>
    
    int main(void) {
    
    	int i, n, wep[100];
         scanf("%d", &n);
        if(n<=100){
        for (i = 0; i < n; ++i)
        scanf("%d", &wep[i]);
        int odd=0,even=0;
        for(i=0;i<n;i++)
        {
        	if(wep[i]%2==0)
        	even++;
        	else
        	odd++;
        }
        if(odd>even)
        	printf("NOT READY");
        	else
        	printf("READY FOR BATTLE");
        }
        else
        {}
    	return 0;
    }
    

