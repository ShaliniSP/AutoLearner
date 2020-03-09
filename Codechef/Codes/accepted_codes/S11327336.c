
    #include<stdio.h>
    int main()
    {
    	int n,one=0,two=0,i,num;
    	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&num);
    if(num%2==0)one++;
    else
    two++;
    }
    if(one>two)
    {printf("READY FOR BATTLE\n");
    	}
    	else
    	{printf("NOT READY\n");
    		}	
    		return 0;
    	}
    

