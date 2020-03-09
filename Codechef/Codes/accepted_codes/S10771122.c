
    #include <stdio.h>
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a[100001],i,count1 = 0,count2;
    	for(i=0;i<n;i++){
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++){
    		if(a[i]%2==0){
    			count1++;
    		}
    	}
    	count2 = n-count1;
    	if(count2>=count1){
    		printf("NOT READY\n");
    	}
    	else
    		printf("READY FOR BATTLE\n");
    	return 0;
    }
    

