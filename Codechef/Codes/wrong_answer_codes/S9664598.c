
    #include<stdio.h>
    
    int main()
    {
    int a,w,i,even=0,odd=0;
    printf("Enter soldier no.:");
    scanf("%d",&a);
    
    for(i=0;i<a;i++){
    	printf("Enter soldier's weapon no:");
    	scanf("%d",&w);
    
    	if(w%2==0)even++;
    	else odd++;
    	}
    if(even>odd)printf("READY FOR BATTLE");
    else printf("NOT READY");
    return 0;
    }
    

