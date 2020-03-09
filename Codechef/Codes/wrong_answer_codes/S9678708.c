
    #include <stdio.h>
    
    int main(int argc, char *argv[])
    { int n,a[50];
    
    	 printf("Number of soldiers=");
    	scanf("%d",&n); 
    	   int i,e=0,o=0;
    	for(i=0;i<n;i++)
    	{scanf("%d",&a[i]);
    	 if(a[i]%2==0) e++;
    	 else o++;
            }
    		if(e>o) printf("READY FOR BATTLE");
    		else printf("NOT READY");
    
    	return 0;
    }
    

