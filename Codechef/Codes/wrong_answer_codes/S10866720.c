
    #include<stdio.h>
    int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int x,y,i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        x=0;y=0;
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    x++;
    else
    y++;
    }
    if(x<=y)
    printf("NOT READY\n");
    else
        printf("READY FOR BATTLE\n");
    }
    return 0;
    }
    

