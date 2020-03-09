
    #include <stdio.h>
    
    int main(int argc, char *argv[])
    { int n,a[50];
    	//printf("Hello, world\n");
    	 printf("Number of soldiers=");
    	 // Scanner sc=new Scanner(System.in);
    	 // int n=sc.nextInt();
    	 //int a[]=new int[50];
    	scanf("%d",&n); 
    	   int i=1,e=0,o=0;
    	   while(i<=n)
    		{
    		  scanf("%d",&a[i++]);
    		}
    		for(i=1;i<=n;i++)
    		{
    		  if(a[i]%2==0) e++;
    		  else o++;
    		}
    		if(e>o) printf("READY FOR BATTLE");
    		else printf("NOT READY");
    
    	return 0;
    }
    

