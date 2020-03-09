
    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    int main(){
        int n,b,max(0);
        std::cin>>n;
        while(n--){
            std::cin>>b;
            if (b%2) max++;
        }
        if (n%2){
            if(max>n/2) std::cout<<"READY FOR BATTLE";
            else std::cout<<"NOT READY";
        }
        else{
            if(max>=n/2+1) std::cout<<"READY FOR BATTLE";
            else std::cout<<"NOT READY";
            
            
        }
        
    }
    

