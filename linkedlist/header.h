#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#include "checks.h"

#define MAX_LINE_LENGTH 145
#define MIN_PLAYERS 9
#define MAX_PLAYERS 12
#define MIN_BIRTHYEAR 2009
#define MAX_BIRTHYEAR 2014
#define MAX_NAME_LENGTH 32
#define MAX_CITY_LEN 64
#define STREETNUM_MIN 99
#define MIN_PHONE_LIM 100000000
#define MAX_PHONE_LIM 9999999999
#define BUFFER_SIZE 1024

typedef struct player 
{
char* name;
char* lastname;
char* guradfirt;
char* guradlast;
int birthYear;
int streetnum;
char* city;
char* streetname;
int phonenum;
} player;

player searchPlayer(player*, int, char);

char buffer[BUFFER_SIZE];

bool isDataValid;
// FILE* roster;
char menu_option;


char ch = 'y';
int i=0;
int j;
int number;

enum phonetype
{
    home,
    mobile,
    cell
};

enum relationship
{
    mother,
    father,
    grandmother,
    grandfather,
    other
};

 player player1[MAX_PLAYERS];
 
 void getName(){
     printf("\nEnter the player's name: ");
        scanf("%s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].name = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].name, buffer);
        
        printf("This string equals: ""%s \n", player1[i].name);
 }
 
 void getLastName(){
     printf("\nEnter the player's last name: ");
        scanf("%[^\n]s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].lastname = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].lastname, buffer);
        
        printf("This string equals: ""%s \n", player1[i].lastname);
 }
 
 //player birth year
void getBirthYear(){
isDataValid = false;
    while (isDataValid == false){
        
        //retreive year
        printf("\nEnter your year of birth: ");
        
        scanf("%d", &player1[i].birthYear);

        if (player1[i].birthYear > MAX_BIRTHYEAR || player1[i].birthYear < MIN_BIRTHYEAR) {
            printf("You must put a valid year between 2009 and 2014");
            
            continue;
        } else {
            printf("Your birthyear is :""%d \n", player1[i].birthYear);
            isDataValid = true;
           
        }
    }
        
}

//get streetnumber
void getStreetNum(){
isDataValid = false;
    while (isDataValid == false){
        
        //retreive street num
        printf("\nEnter your address of residence(street number, name, and, city): ");
        printf("\nEnter your street number: ");
        scanf("%d", &player1[i].streetnum);
        
         if (player1[i].streetnum <= STREETNUM_MIN)
            {
                printf("Enter a street number between 3 and 5 digits.");
                // clean_Stdin();
                continue;
            }
            else
            {
                isDataValid = true;
                // clean_Stdin();
            }
            printf("Your streetnum is :" " %d \n", player1[i].streetnum);
    }
}

//get streetname
void getStreetName(){
     printf("\nEnter the street name: ");
        scanf("%s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].streetname = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].streetname, buffer);
        
        printf("This string equals: ""%s \n", player1[i].streetname);
 }
 
 //get city
 void getCity(){
     printf("\nEnter the city name: ");
        scanf("%[^\n]s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].city = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].city, buffer);
        
        printf("This string equals: ""%s \n", player1[i].city);
 }
 
 //get guardian first name
 void getGuardFirst(){
     printf("\nEnter the Guardian's first name: ");
        scanf("%s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].guradfirt = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].guradfirt, buffer);
        
        printf("This string equals: ""%s \n", player1[i].guradfirt);
 }
 
 //get guardian last
 void getGuardLast(){
     printf("\nEnter the Guardian's last name: ");
        scanf("%s", buffer);
        getchar();
        
        do{
        printf("This string equals :" "%d \n", strlen(buffer));
        }while( 0 != checkString(buffer, MAX_NAME_LENGTH));
        
        player1[i].guradlast = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        
        strcpy(player1[i].guradlast, buffer);
        
        printf("This string equals: ""%s \n", player1[i].guradlast);
 }
 
 //get phonenumber
void getPhoneNum(){
isDataValid = false;
    while (isDataValid == false){
        
        //retreive year
        printf("\nEnter guardian's phone number, Format: [xxxxxxxxxx]: ");
        scanf("%d", &player1[i].phonenum);

        if (player1[i].phonenum > MAX_PHONE_LIM || player1[i].phonenum < MIN_PHONE_LIM) {
            printf("You must enter a valid nine digit phone number.");
            
            continue;
        } else {
            isDataValid = true;
           
        }
        printf("Your phonenumber is :" " %d \n", player1[i].phonenum);
    }
}

 void DisplayRoster(){
     
        sortMenu();
     
 }
    
void Addplayers(){
    
    printf("\nPlease enter The number of players for the directory(pick 9 - 12): \n");
    scanf(" %d", &number);

     if (number > MAX_PLAYERS || number < MIN_PLAYERS ) {
            printf("That number is not valid, enter a number between 9 - 12: ");
            scanf(" %d", &number);
            
        } else {
            printf("The number of players is: ""%d \n", number);
            // clean_Stdin();
        }

    for (i=0; i<number; i++){  
        
        printf("(player 1 begins at interation 0.)The interation is: ""%d \n", i+1);
        
        bool isDataValid;
		
        getName();
        getLastName();
        getBirthYear();
        getStreetNum();
        getStreetName();
        getCity();
        getGuardFirst();
        getGuardLast();
        getPhoneNum();
        
        printf("------TEAM MUST BE DISPLAYED BEFORE BEING SAVED.-----");
        
        printf("\n\nWould you like to add another player? ('y' for Yes, 'n' for no ) : ");
        scanf(" %c", &ch); 
     
        if(ch=='y'){
         printf("Add another player :");
        } else {
             break;
        }
        
    }
    
     for (i=0; i<number; i++){
                    bool isDataValid3;
        
        printf("\nFor player %s", player1[i].name);
         //phonetype
        enum phonetype a[i];
        do
        {
            printf("\nPlease enter your Phone type (0 for home, 1 for work, 2 for cell.): ");
            scanf("%d", &a[i]);

            if (a[i] == home || a[i] == mobile || a[i] == cell)
            {
                isDataValid3 = true;
            }
            else
            {
                printf("\nError, please re-enter appropriate phonetype type.\n");
                printf("\nPlease enter your Phone type (0 for home, 1 for work, 2 for cell.): ");
                scanf("%d", &a[i]);
                continue;
            }
        } while (isDataValid3 == false);
        
        
        //relationship
        enum relationship b[i];
        do
        {
            printf("\nPlease enter your relation type to guardian. (0 for mother, 1 for father, 2 for grandmother.) ");
            printf("\nor (3 for grandfather, 4 for other.): ");
            scanf("%d", &b[i]);

            if (b[i] == mother || b[i] == father || b[i] == grandmother || b[i] == grandfather || b[i] == other)
            {
                isDataValid3 = true;
            }
            else
            {
                printf("\nError, please re-enter appropriate relation type to guardian.\n");
                printf("\nPlease enter your relation type (0 for mother, 1 for father, 2 for grandmother.) ");
                printf("\nor (3 for grandfather, 4 for other.): ");
                scanf("%d", &b[i]);
            }
        } while (isDataValid3 == false);
        
            } //end of for loop
    // for (i=0; i<number; i++){
    
    // DisplayRoster();
    // };
    
    
}

//sort menu button
void sortMenu(){
    // do{
        printf("Display Sort Menu\n");
        printf("Choose how you want your information to be displayed: \n");
        printf("a. Unsorted\n");
        printf("b. Sorted by age\n");
        printf("c. Sorted by last name\n");
        printf("d. End Sort Menu.\n");
        printf(" Please enter an option from the Sort Menu: \n");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
            case 'a': //unsorted
            
        for (i=0; i<number; i++){
    
                    bool isDataValid3;
        
        printf("\nFor player %s", player1[i].name);
         //phonetype
        enum phonetype a[i];
        do
        {
            printf("\nPlease enter your Phone type (0 for home, 1 for work, 2 for cell.): ");
            scanf("%d", &a[i]);

            if (a[i] == home || a[i] == mobile || a[i] == cell)
            {
                isDataValid3 = true;
            }
            else
            {
                printf("\nError, please re-enter appropriate phonetype type.\n");
                printf("\nPlease enter your Phone type (0 for home, 1 for work, 2 for cell.): ");
                scanf("%d", &a[i]);
                continue;
            }
        } while (isDataValid3 == false);
        
        
        //relationship
        enum relationship b[i];
        do
        {
            printf("\nPlease enter your relation type to guardian. (0 for mother, 1 for father, 2 for grandmother.) ");
            printf("\nor (3 for grandfather, 4 for other.): ");
            scanf("%d", &b[i]);

            if (b[i] == mother || b[i] == father || b[i] == grandmother || b[i] == grandfather || b[i] == other)
            {
                isDataValid3 = true;
            }
            else
            {
                printf("\nError, please re-enter appropriate relation type to guardian.\n");
                printf("\nPlease enter your relation type (0 for mother, 1 for father, 2 for grandmother.) ");
                printf("\nor (3 for grandfather, 4 for other.): ");
                scanf("%d", &b[i]);
            }
        } while (isDataValid3 == false);
        
        } // end of for loop
        
        printf("%-20s%-20s%-10s%-10s%-20s%-20s%-20s%-20s%-10s\n","NAME","LASTNAME","BIRTHYEAR","ADDRESS","STREETNAME","CITY","GUARDIANFIRST","GUARDIANLAST","PHONE");
        printLine();
        for (i=0; i<number; i++){
        
        //print statements    
    // printf("this iteration is :""%d", i);
    // fprintf(stdout, "\n %s %d %s ", &player1[i].name, player1[i].birthYear[i], &player1[i].city);
            printf("%-20s%-20s%-10d%-10d%-20s%-20s%-20s%-20s%-10d\n", player1[i].name, player1[i].lastname, player1[i].birthYear, player1[i].streetnum, player1[i].streetname, player1[i].city, player1[i].guradfirt, player1[i].guradlast, player1[i].phonenum);
        }
    //   for (i=0; i<number; i++){
            // enum phonetype a[i];
            //print enums
            printLine();
            printf("%-40s\n","PHONETYPE");
            printLine();
        for (i=0; i<number; i++){
            enum phonetype a[i];
     if (a[i] == home){
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: home\n");
        } else if (a[i] == mobile) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mobile\n");
        } else if (a[i] == cell) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: cell\n");
        };
        }

            printLine();
            printf("%-40s\n","RELATIONSHIP");
            printLine();
        for (i=0; i<number; i++){
        
        enum relationship b[i];
        //mother, father, grandmother, grandfather, other
         if (b[i] == mother){
             printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mother\n");
        } else if (b[i] == father) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: father\n");
        } else if (b[i] == grandmother) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandmother\n");
        } else if (b[i] == grandfather) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandfather\n");
        } else if (b[i] == other) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: other\n");
        };
                
            }; //end of for loop
        printLine();
        // menuDisplayPressed();
                
            break; //end of case a
            
            //sort by age
            case 'b':
          

                printf("before sorting:\n");
                printAge(player1, number);
                sortAge(player1, number);
                printf("after sorted by Age:\n");
                printAge(player1, number);
        
       printLine();
            printf("%-40s\n","PHONETYPE");
            printLine();
        for (i=0; i<number; i++){
            enum phonetype a[i];
     if (a[i] == home){
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: home\n");
        } else if (a[i] == mobile) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mobile\n");
        } else if (a[i] == cell) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: cell\n");
        };
        }

            printLine();
            printf("%-40s\n","RELATIONSHIP");
            printLine();
        for (i=0; i<number; i++){
        
        enum relationship b[i];
        //mother, father, grandmother, grandfather, other
         if (b[i] == mother){
             printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mother\n");
        } else if (b[i] == father) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: father\n");
        } else if (b[i] == grandmother) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandmother\n");
        } else if (b[i] == grandfather) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandfather\n");
        } else if (b[i] == other) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: other\n");
        };
                
            }; //end of for loop
        printLine();
                
                return 0;
                
                menuDisplayPressed();
                
                break; //end of case b
                
            //sort by lastname
            case 'c':
        
            sortLastName(player1, number);
            printf("after sorted by LastName:\n");
            printLastName(player1, number);
            
           printLine();
            printf("%-40s\n","PHONETYPE");
            printLine();
        for (i=0; i<number; i++){
            enum phonetype a[i];
     if (a[i] == home){
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: home\n");
        } else if (a[i] == mobile) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mobile\n");
        } else if (a[i] == cell) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: cell\n");
        };
        }

            printLine();
            printf("%-40s\n","RELATIONSHIP");
            printLine();
        for (i=0; i<number; i++){
        
        enum relationship b[i];
        //mother, father, grandmother, grandfather, other
         if (b[i] == mother){
             printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's phonetype is: mother\n");
        } else if (b[i] == father) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: father\n");
        } else if (b[i] == grandmother) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandmother\n");
        } else if (b[i] == grandfather) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: grandfather\n");
        } else if (b[i] == other) {
            printf("For player %s : \n", player1[i].name);
            printf("\nGuardian's relation is: other\n");
        };
                
            }; //end of for loop
        printLine();
            menuDisplayPressed();
                
                break; //end of case c
            case 'd':
                printf("You have exited the sort menu. \n");
                
                break;
            default:
                printf("invalid input");
            break;
            
        } //end of switch
    // } while(menu_option != 'd' ); //end of do while switch statement
    
    // menuDisplayPressed();

}

void sortAge(player* player1, int length)
{
    // bubble sort, increasing
    player temp;
    int i = 0, j = 0;
    for(i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if(player1[i].birthYear > player1[j].birthYear)
            {
                temp = player1[i];
                player1[i] = player1[j];
                player1[j] = temp;
            }
        }
    }
}

void printAge(player *s, int n)
{
    int i = 0;
    printLine();
    printf("%-10s%-20s%-20s%-10s%-20s%-20s%-20s%-20s%-10s\n","BIRTHYEAR","NAME","LASTNAME","ADDRESS","STREETNAME","CITY","GUARDIANFIRST","GUARDIANLAST","PHONE");
    printLine();
    for (i = 0; i < n; i++)
        printf("%-10d%-20s%-20s%-10d%-20s%-20s%-20s%-20s%-10d\n", s[i].birthYear, s[i].name, s[i].lastname, s[i].streetnum, s[i].streetname, s[i].city, s[i].guradfirt, s[i].guradlast, s[i].phonenum);
        printf("\n");
}

void sortLastName(player* r, int length)
{
    // bubble sort, increasing
    player temp;
    int i = 0, j = 0;
    for(i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if(strcmp(r[i].lastname, r[j].lastname) > 0)
            {
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }
}

void printLastName(player *s, int n)
{
    int i = 0;
    printLine();
    printf("%-20s%-20s%-10s%-10s%-20s%-20s%-20s%-20s%-10s\n","LASTNAME","NAME","BIRTHYEAR","ADDRESS","STREETNAME","CITY","GUARDIANFIRST","GUARDIANLAST","PHONE");
    printLine();
    for (i = 0; i < n; i++)
        printf("%-20s%-20s%-10d%-10d%-20s%-20s%-20s%-20s%-10d\n", s[i].lastname, s[i].name, s[i].birthYear, s[i].streetnum, s[i].streetname, s[i].city, s[i].guradfirt, s[i].guradlast, s[i].phonenum);
        printf("\n");
}

player searchPlayer(player* r, int n, char buffer)
{
    //binary search
    int mid;
    int low = 0;
    int high = n -1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(r[mid].lastname == buffer)
            return r[mid];
        else if(r[mid].lastname > buffer)
            high = mid -1;
        else 
            low = mid +1;
    }
    return r[0];
}

void printLine(){
    int i;
    for(i=0; i<MAX_LINE_LENGTH;i++)
        printf("-");
    printf("\n");
}

//(strcmp(list_of_words[mid], target) == 0)
// if (strcmp(&list_of_words[mid], target) == 0){
//             printf("%s found at location %d.\n", target, mid+1);
//             break;
//         }
//         if (strcmp(&list_of_words[mid], target) == 1){
//             top= mid - 1;
//         }
//         if (strcmp(&list_of_words[mid], target) == -1){
//             bottom= mid + 1;
//         }
//     }
    