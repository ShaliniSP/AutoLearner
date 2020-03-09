
    #include <stdio.h>
     //Compiler version g++ 4.9
    
     int main()
     {
     	int t,a,b;
     	int c=0;
    scanf("%d",&t);
    b=t;
    while(t--)
    {
    	scanf("%d",&a);
    	if((a%2)==0)
    	{
    	c++;
    	}
    }
    if(c>(b-c))
    {
    printf("READY FOR BATTLE");
    } 
    else {
    	printf("NOT READY");
    }
    return 0;
    }

