#define espresso_beans 8
#define espresso_water 30
#define espresso_milk 0
#define espresso_syrup 0
#define espresso_price 3.5

#define cappuccino_beans 8
#define cappuccino_water 30
#define cappuccino_milk 70 
#define cappuccino_syrup 0
#define cappuccino_price 4.5

#define mocha_beans 8
#define mocha_water 39
#define mocha_milk 160
#define mocha_syrup 30
#define mocha_price 5.5

#define adminpass "coffemachine"

#define beans_threshold 10
#define water_threshold 100
#define milk_threshold 80 
#define syrup_threshold 35

//defining the real value varibale total_amount which gives the total sales amount 
float real_value = 0.0;

int beans_quantity = 100;
int water_quantity = 250;
int milk quantity = 260;
int syrup_quantity = 50;`
//function prototypes 
void menudisplay();
void coffeeorder();
void admin();
void checkingredientlevel();
void replenish();
void changeprice();
void dispsales();
void lowalert();
void processpayment(float price);

int main() {
    int choice;
    //menu loop
    while(1){
        printf("Menu:\n");
        printf("1.Order your coffee\n");
        printf("2. ddmin\n");
        printf("3. exit\n");
        printf("select : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                coffeeorder();
                break;
            case 2:
                admin();
                break;
            case 3:
                printf("exting\n");
                return 0;
            default:
                printf("error in input, please try again \n");
        }
    }
}
void displayCoffeeMenu() {
    printf("coffees :\n");
    printf("1. espresso - $%.5f\n",espresso_price );
    printf("2. cappuccino - $%.5f\n",cappuccino_price );
    printf("3. mocha - $%.5f\n",mocha_price );
    }
