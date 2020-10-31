#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char typeMenu[100][255];
char menuName[100][255];
char topping[100][255];
double calories[100];
int currentMenu = 1;
int menuPrice[100];
int dessertTime[100];

void addDesert();

void addDesert(){
    strcpy(typeMenu[currentMenu], "Dessert");
    char namaMenu[255], toppingMenu[255];
    int price;
    double calorie;

    //input nama dessert
    while(1)
    {
    printf ("Input the name [at least 5 characters]: ");
    scanf ("%[^\n]", namaMenu); getchar();
    if (strlen(namaMenu) >= 5) break;
    }
    strcpy(menuName[currentMenu], namaMenu);

    //input harga
    while(1)
    {
        printf ("Input the price [10 - 500]: "); 
        scanf ("%d", &price); getchar();
        if (price >= 10 && price <= 500) break;
    }
    menuPrice[currentMenu] = price;

    //input topping
    while(1)
    {
        printf ("Input the topping ['Caramel' | 'Honey' | 'Syrup'](Case Insensitive): ");
        scanf ("%s", toppingMenu); getchar();
        if (toppingMenu[0] > 'Z') toppingMenu[0] -= 32;
        for (int i = 1; i < strlen(toppingMenu); i++)
        {
            if (toppingMenu[i] < 'a') toppingMenu[i] += 32;
        }
        if (strcmp("Caramel", toppingMenu) == 0 || strcmp("Honey", toppingMenu) == 0 || strcmp("Syrup", toppingMenu) == 0) break;
    }
    strcpy(topping[currentMenu], toppingMenu);

    //input kalori
    while(1)
    {
        printf ("Insert calories [1.00 - 99.00]: ");
        scanf ("%lf", &calorie); getchar();
        if (calorie >= 1.00 && calorie <= 99.00) break;
    }
    calories[currentMenu] = calorie;
    printf("Successfully added a new menu!");
    getchar();
    currentMenu++;

    //ngitung cooking time
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
    
}
