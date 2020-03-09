
    #include<stdio.h>
    int main(){
    	int n,i;
    	scanf("%d",&n);
    	int a[n],no=n,o=0,e=0;
    	while(no--){
    	scanf("%d",&a[i]);
        if (a[i]%2==0) e++;
        else o++;
    	}
    	if(e>o)
    	printf("READY FOR BATTLE\n");
    	else printf("NOT READY\n");
    	return 0;
    }

