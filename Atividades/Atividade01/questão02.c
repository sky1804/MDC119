#include <stdio.h>

int main(){

  int multi;
    
    for(multi=1; multi<100; multi++){
        
        if (multi%3==0){
            
            printf ("%d\n", -multi);
        }
    }
    



    return 0;
}