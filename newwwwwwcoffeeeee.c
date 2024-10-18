
#include<stdio.h>
#include<math.h>



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
float total_value = 0.0;

int beans_quantity = 100;
int water_quantity = 250;
int milk_quantity = 260;
int syrup_quantity = 50;
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
        printf("Menu:\n");
        printf("1.order your coffee\n");
        printf("2. admin\n");
        printf("3. exit\n");
        printf("select : ");
        scanf("%d", &option);
        if(option ==1){
        cofeemenu();
        coffeeorder();
        }
        else if (option ==2){
        admin();
        }
        else if (option==3){
        printf("exting\n");
        break;
        }
        else{
        ("error input try agian\n");
        }
}

}
void dispcoffeemenu() {
    printf("coffees :\n");
    printf("1. espresso - $%.5f\n",espresso_price );
    printf("2. cappuccino - $%.5f\n",cappuccino_price );
    printf("3. mocha - $%.5f\n",mocha_price );
    }
    void coffeeorder(){
    int choice;
    dispcoffeemenu();
    printf("Select a coffee type: ");
    scanf("%d", &order);
    if (order ==1){
        if(water_quantity >= espresso_water && beans_quantity >= espresso_beans){
              beans_quantity -= espresso_beans;
                water_quantity -= espresso_water;
                total_amount += espresso_price;
                processpayment(espresso_price);
                printf("Espresso ready\n");
            } else {
                printf("There are insufficient ingredients for Espresso.\n");
            }
        }
        break;
    else if (order ==2){
            if (milk_quantity >= cappuccino_milk && water_quantity >= cappuccino_water &&
                beans_quantity >= cappuccino_beans) {
                beans_quantity -= cappuccino_beans;
                water_quantity -= cappuccino_water;
                milk_quantity -= cappuccino_milk;
                total_amount += cappuccino_price;
                processpayment(cappuccino_price);
                printf("Espresso ready\n");
            } else {
                printf("There are insufficient ingredients for Espresso.\n");
            }
            break;
    else if (order == 3){
            if (coffee_beans_quantity >= mocha_beans && syrup_quantity >= mocha_syrup &&
                milk_quantity >= mocha_milk && water_quantity >= mocha_water ) {
                coffee_beans_quantity -= mocha_beans;
                water_quantity -= mocha_water;
                milk_quantity -= mocha_milk;
                syrup_quantity -= mocha_syrup;
                total_amount += mocha_price;
                processpayment(mocha_price);
                printf("Espresso ready\n");
            } else {
                printf("There are insufficient ingredients for Espresso.\n");
            }
            break;
    }
}
void processpayment(float price) {
    float amount;
    if (choice == 1 )
     printf("the amount is 3.5$\n");
    else if (choice == 2);
     printf("the amount is 4.5$\n");
    else if(choice == 3)
     printf("amount is 5.5$\n");
    else 
      printf("Error in payment. Order cancelled\n");
    printf("Please enter payment amount: ");
    scanf("%f", &amount);


    void adminmode(){
        int pass;

        printf("enter admin password\n");
        scanf("%d",&pass);
        int adminoption
        if(pass==adminpass){
            printf("Admin menu \n");
            printf("1.display ingredients quantit\n");
            printf("2.replenish ingredients \n");
            printf("3.display total sales")
            printf("4.change price\n");
            printf("5.exit\n");
            printf("select option: ");
            scanf("%d", &adminoption);
        }
            if (adminoption == 1 ){
                checkingredientlevel();
            }
            else if (adminoption == 2){
            replenish();
            }
            else if (adminoption == 3){
            changeprice();
            }
            else if (adminoption == 4){
            dispsales();
            }
            else if (adminoption==5){
                printf("exiting admin mode\n");
                break;
            }


        else 
        printf("wrong password try again \n");

    }


void checkingredientlevel(){
    printf(" %d grams of coffe beans left\n",beans_quantity);
    printf(" %d ml of water left \n",water_quantity);
    printf("%d ml of milk left \n",milk_quantity);
    printf(" %d grams of syrup left \n",syrup_quantity)
}
void replenish(){
    int adding_beans;
    printf("enter the amount of beans being added\n");
    scanf("%d\n",&adding_beans);
    beans_quantity+=adding_beans;
        int adding_water;
    printf("enter the amount of water being added\n");
    scanf("%d\n",&adding_water);
    water_quantity+=adding_water;
        int adding_milk;
    printf("enter the amount of milk being added\n");
    scanf("%d\n",&adding_milk);
    milk_quantity+=adding_milk;
        int adding_syrup;
    printf("enter the amount of beans being added\n");
    scanf("%d\n",&syrup);
    syrup_quantity+=adding_syrup;
    printf("replenished\n")
}

void changeprice()
{
    int pricechange;
        printf("coffee prices currently:\n");
    printf("1. espresso - %.5f\n",espresso_price );
    printf("2. cappuccino - %.5f\n",cappuccino_price );
    printf("3. mocha - %.5f\n",mocha_price );
    printf("slect which coffee's price you would like to change\n");
    scanf("%d\n",&pricechange);
    if (pricechange==1){
        printf("enter the new price\n");
        scanf("%.5f",espresso_price);
        break;
    }
    else if (pricechange==2){
                printf("enter the new price\n");
        scanf("%.5f",cappuccino_price);
        break;
    }
    else if (pricechange==2){
                printf("enter the new price\n");
        scanf("%.5f",mocha_price);
        break;
    }
    else
    {
        printf("error input\n");
    }
    

    
    
}
void dispsales(){
printf(" the total sales is : %d",total_amount);
}
