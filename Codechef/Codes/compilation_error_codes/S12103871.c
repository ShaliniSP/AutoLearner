
    #include <iostream>
    
    int main(){
    int n,b,max(0);
    std::cin>>n;
    while(n--){
    std::cin>>b;
    if (b%2) max++;
    }
    if (n%2){
    if(max>n/2) cout<<"READY FOR BATTLE";
    else cout<<"NOT READY";
    }
    else{
    if(max>=n/2+1) cout<<"READY FOR BATTLE";
    else cout<<"NOT READY";
    
    
    }
    
    }
    }

