#include <stdio.h>

void addMenu();
void order();
int profit=0;

int main(){

    // Main Menu
    while(1)
    {
        for (int i = 0; i < 50; i++) puts("");        
        puts("Welcome to Opercooked");
        printf("Today Profit: $ %d\n", profit);
        puts("========================");
        puts("1. Add Dessert or Beverage");
        puts("2. View Cooking Process");
        puts("3. View Order History");
        puts("4. Order Dessert or Beverage");
        puts("5. Exit");
        int inputMenu;
        printf(">> ");
        scanf ("%d", &inputMenu); getchar();
        for (int i = 0; i < 50; i++) puts("");
        if (inputMenu == 1) addMenu();
        else if (inputMenu == 4) order();
        else if (inputMenu == 5) break;    
    }

    return 0;
}