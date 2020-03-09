
    #include<stdio.h>
    int main()
    {
    int s,w,odd=0,even=0,i;
    printf("Ener soldiers no.");
    scanf("%d",&s);
    if(s<=100){
        printf("Now enter soldier's weapon no.");
        for(i=0;i<s;i++)
        {
        scanf("%d",&w);
        if(w%2==0)even++;
        else odd++;
        }
        }
    if(even>odd)printf("READY FOR BATTLE");
    else printf("NOT READY");
    return 0;
    }
    

