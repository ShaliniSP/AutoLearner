
    #include<stdio.h>
    #include<stdlib.h>
    int main(){
    int n,i,j,even=0,odd=0;
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    	{
    	if(a[i]%2==0)
    		even++;
    	else
    		odd++;
    	}
    if(even>odd)
    	printf("READY FOR BATTLE");
    else
    	printf("NOT READY");
    return 0;
    }

