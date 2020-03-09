
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    		//to find whether soldiers are ready for the battle or not!!
    		int main()
    		{
    		int n;
    		scanf("%d",&n);
    		int a[n];
    		int i;
    		int counteven=0,countodd=0;
    			for(i=0;i<n;i++)
    			{
    			scanf("%d",&a[i]);
    			}
    			for(i=0;i<n;i++)
    			{
    			  if(a[i]%2==0)
    			    {
    			    counteven++;
    			    }
    			   else
    			    {
    			    countodd++;
    			    }
    			}
    			if(counteven>countodd)
    			{
    			printf("READY FOR BATTLE\n");
    			}
    			else
    			{
    			printf("NOT READY\n");
    			}
    		return 0;
    		}
    			

