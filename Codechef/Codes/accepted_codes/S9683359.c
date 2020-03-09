
    #include <stdio.h>
    
    int main(void) {
    	int s,w,l=0,u=0;
    	scanf("%d",&s);
    	while(s--!=0)
    	{
    	  scanf("%d",&w);
    	  if(w%2==0) l++;
    	  else u++;
    	}
    	if(l>u) printf("READY FOR BATTLE");
    	else printf("NOT READY");
    	return 0;
    }
    

