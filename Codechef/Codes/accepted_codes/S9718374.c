
    #include<stdio.h>
    int main()
    {
    	int n,a,b,x;
    	scanf("%d",&n);
    	b=n;a=0;
    	while(b>0){
    		x=malloc(sizeof(int));
    		scanf("%d",&x);
    		if(x%2==0){a++;}
    		b--;	
    	}
    	b=n-a;
    	if(a>b){printf("READY FOR BATTLE");}
    	else{printf("NOT READY");}
    	return 0;
    }

