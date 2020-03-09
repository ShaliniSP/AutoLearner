
    #include<stdio.h>
    int main()
    {
    				int n;
    				scanf("%d",&n);
    				int a,i,b=0,c=0;
    				for(i=0;i<n;i++)
    				{
    						scanf("%d",&a);
    						if(a%2==0)
    						{
    								b++;
    						}
    						else
    						{
    								c++;
    						}
    				}
    				if(b>c)
    				{
    						printf("READY FOR BATTLE\n");
    				}
    				else
    				{
    						printf("NOT READY\n");
    				}
    		return 0;
    }
    

