
    #include<stdio.h>
    int main()
    {
    	int a,b,luck,badluck;
    	scanf("%d",&a);
    	luck=0,badluck=0;
    	while(a--)
    	{
    		scanf("%i",&b);
    		if(b%2==0){
    			luck++;
    			}
    		else{
    			badluck++;
    			}
    	}
    	luck>badluck?puts("READY FOR BATTLE"):puts("NOT READY");
    	
    	return 0;
    }

