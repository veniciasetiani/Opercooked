#include <stdio.h>
void addMenu();
void mainMenu(){
	int input1;
	int profit;
	puts("Welcome to Operccooked");
	printf("Today's profit: $%d\n",profit);
	puts("===========================");
	puts("1. Add Dessert or Beverage");
	puts("2. View Cooking Process");
	puts("3. View Order History");
	puts("4. Order Dessert or Beverage");
	puts("5. Exit");
	printf(">> ");
	scanf("%d",&input1);
//	int input1;
	switch (input1){
		case 1:
			printf("\e[1;1H\e[2J");
			addMenu();
			getchar();
			getchar();
			
		case 2:
			printf("\e[1;1H\e[2J");
			getchar();
			getchar();
		
		case 3:
			printf("\e[1;1H\e[2J");
			getchar();
			getchar();
		
		case 4:
			printf("\e[1;1H\e[2J");
			getchar();
			getchar();
		
		case 5:
			printf("\e[1;1H\e[2J");
			getchar();
			getchar();
	}
}

void addMenu(){
	int input;
	printf("\e[1;1H\e[2J");
		puts("What do you want to add?");
		puts("1. Dessert");
		puts("2. Drink");
		printf("Choose: ");
		scanf("%d", &input);
		switch (input) {
			case 1:
			printf("\e[1;1H\e[2J");
			//dessert();
			getchar();
		
			case 2:
			printf("\e[1;1H\e[2J");
			//drink();
			getchar();
		
}
}
int main ()
{
	int input1;
	int profit;
	puts("Welcome to Operccooked");
	printf("Today's profit: $%d\n",profit);
	puts("===========================");
	puts("1. Add Dessert or Beverage");
	puts("2. View Cooking Process");
	puts("3. View Order History");
	puts("4. Order Dessert or Beverage");
	puts("5. Exit");
	printf(">> ");
	scanf("%d",&input1);
	mainMenu();
	
	return 0;
}
