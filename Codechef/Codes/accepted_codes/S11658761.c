
    #include<stdio.h>
    int even(int number){
    if(number % 2 == 0){
        return 1;
    }
    else if(number % 2 != 0){
        return 0;
    }
    }
    int main(){
    int i;
    int size;
    int counteven = 0, countodd = 0;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(even(arr[i])){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    if(counteven>countodd){
        printf("READY FOR BATTLE\n");
    }
    else{
        printf("NOT READY\n");
    }
    return 0;
    }
    

