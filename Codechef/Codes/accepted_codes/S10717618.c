
    #include<stdio.h>
     
    int main(){
     
    int n,i,lucky=0,unlucky=0,a[100];
     
    scanf("%d",&n);	
    if(n<=100)
    {
    for(i=1;i<=n;i++)
     {
    	scanf("%d",&a[i]);		
    	if(a[i] % 2 ==0)
    		lucky++;
    	else
    		unlucky++;
    	
     }
    }
    if(lucky > unlucky)
    	printf("READY FOR BATTLE");
    else
    	printf("NOT READY");
    	return 0;
    }
     

