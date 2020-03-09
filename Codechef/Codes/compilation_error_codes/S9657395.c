
    #include<stdio.h>
    int main(void)
    {
    int a,b[100],odd,even;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {scanf("%d",&b[i]);
     if(b[i]%2==0)
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

