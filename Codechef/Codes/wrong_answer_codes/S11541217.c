
    int main(){
    int a,c,d,e;
    int b=0;
    scanf("%d",&a);
    while (b<a){
    	scanf("%d",&e);
    	if (e%2==0) c=c+1;
    	else d=d+1;
    	b++;}
    if (c>d){ 
    	printf("READY FOR BATTLE");}
    else 
    	printf("NOT READY");
    return 0;
    }

