
    #include<stdio.h>
    int main()
    {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int count=0,temp=0;	
    for(i=0;i<n;i++){
    if(a[i]%2==0){
    count++;
    }
    else if(a[i]%2==1){
    temp++;
    }
    }	
    if(count>temp){
    printf("READY FOR BATTLE\n");
    }	
    else
    printf("NOT READY\n");
    return 0;
    }

