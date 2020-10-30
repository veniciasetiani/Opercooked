#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
//Tambahan library yaitu time.h sama stdlib.h(untuk randdan srand)

//Tambahan untuk global variable
int desserttime[100];


int main(){

    //random waktu pembuatan dessert(line 100)
    srand(time(0));
    int totaltime = (rand() % 40)+50;

    if(strcmp(toppingMenu, "caramel") == 0){
        totaltime += 10;
    }
    else if(strcmp(toppingMenu, "honey") == 0){
        totaltime+=15;
    }
    else if(strcmp(toppingMenu, "syrup") == 0){
        totaltime+=20;
    }

    dessertTime[currentMenu] = totaltime;

    return 0;
}