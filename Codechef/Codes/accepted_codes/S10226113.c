
    #include<stdio.h>
    int main(void) {
    	int n, a[100],o=0,e=0, i;
    	scanf("%d",&n);
    	for(i =0;i<n;i++){
    		scanf("%d",&a[i]);
    		if(a[i]%2==0) 
    		e++;
    		else 
    		o++;
    	}
    	if(e>o) 
    	printf("READY FOR BATTLE");
    	else 
    	printf("NOT READY");
    	return 0;
    }

