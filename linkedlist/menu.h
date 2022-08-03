//Donald Bowler
//CS-1714-A1T
//June,21,2022

//projrec3menu-

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<unistd.h>

#define ROSTER_FILE "roster.txt"


int menuNoLoad() {
    
    
    //fopen and rewrite
    printf("       TEAM ROSTER PROGRAM!!!\n");
    printLine();
    
    do{
        printf("Main Menu\n");
        printf("THERE IS NO LOAD NOW.\n");
        printf("b. Add Players\n");
        printf("c. Display Team.\n");
        printf("e. Quit.\n");
        printf("f. Search Last Name From Load.\n");
        printLine();
        printf(" Please enter an option from the main menu: ");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
                
            case 'b':
                Addplayers();
                menuDisplayPressed();
                break;
            case 'c':
                // for (i=0; i<number; i++){
        
                DisplayRoster();
                // };
                break;
            case 'e':
                printf("You have exited the Team Roster Application. ");
                break;
            case 'f':
                
                printf("Please enter the lastname you want to search for: \n");
                // for (i=0; i<number; i++){
                scanf("%s", buffer);
                // };
                
                for (i=0; i<number; i++){
                if(!strcmp(buffer, player1[i].lastname))
                {
                    break;
                }
                }
                
                if(player1[i].lastname != number) {
                     printf("%s is present with name %s, %s %d", buffer, player1[i].lastname, player1[i].name);
                    printf("Your address is : \n"" %d %s %s \n", player1[i].streetnum, player1[i].streetname, player1[i].city);
                    printf("Guardian info : \n"" %s %s \n", player1[i].guradfirt, player1[i].guradlast);
                    printf("Guardian's phonenumber :""%d \n", player1[i].phonenum);
                    
                            enum phonetype a[i];
            //print enums
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
                    
                    
                }
                else {
                    printf("%s is not present in the database", buffer);
                }
                
            break; //end of case f
            default:
                printf("invalid input");
            break; //end of case f
            
        } //end of switch
    } while(menu_option !='e'); //end of do while switch statement
    
    
    
    return 0;
}


int menuAddedPlay() {
    
    
    //fopen and rewrite
    printf("       TEAM ROSTER PROGRAM!!!\n");
    printLine();
    
    do{
        printf("Main Menu\n");
        printf("THERE IS NO LOAD NOW.\n");
        printf("b. Add Players\n");
        printf("c. Display Team.\n");
        printf("e. quit.\n");
        printf("f. Search Last Name From Load.\n");
        printLine();
        printf(" Please enter an option from the main menu: ");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
            case 'b':
                Addplayers();
                break;
                
            case 'c':
                // for (i=0; i<number; i++){
        
                DisplayRoster();
                // };
                break;
            case 'e':
                printf("You have exited the Team Roster Application. ");
                break;
           case 'f':
                
                printf("Please enter the lastname you want to search for: \n");
                // for (i=0; i<number; i++){
                scanf("%s", buffer);
                // };
                
                for (i=0; i<number; i++){
                if(!strcmp(buffer, player1[i].lastname))
                {
                    break;
                }
                }
                
                if(player1[i].lastname != number) {
                     printf("%s is present with name %s, %s %d", buffer, player1[i].lastname, player1[i].name);
                    printf("Your address is : \n"" %d %s %s \n", player1[i].streetnum, player1[i].streetname, player1[i].city);
                    printf("Guardian info : \n"" %s %s \n", player1[i].guradfirt, player1[i].guradlast);
                    printf("Guardian's phonenumber :""%d \n", player1[i].phonenum);
                    
                        enum phonetype a[i];
            //print enums
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
                }
                else {
                    printf("%s is not present in the database", buffer);
                }
                
            break;
            
        } //end of switch
    } while(menu_option !='e'); //end of do while switch statement
    
    
    
    return 0;
}

int menuDisplayPressed(){
    // char ch = 'y';
    // int i=0;
    
    // players player1;
    
    //fopen and rewrite
    printf("       TEAM ROSTER PROGRAM!!!\n");
    printLine();
    
    do{
        printf("Main Menu\n");
        printf("THERE IS NO LOAD NOW.\n");
        printf("b. Add Players\n");
        printf("c. Display Team.\n");
        printf("d. Save Team.\n");
        printf("e. quit.\n");
        printf("f. Search Last Name From Load.\n");
        printLine();
        printf(" Please enter an option from the main menu: ");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
            case 'b':
                Addplayers();
                break;
                
            case 'c':
                // for (i=0; i<number; i++){
        
                DisplayRoster();
                // };
                break;
            case 'd':
                saveRoster();
                break;
            case 'e':
                printf("You have exited the Team Roster Application. ");
                break;
             case 'f':
                
                printf("Please enter the lastname you want to search for: \n");
                // for (i=0; i<number; i++){
                scanf("%s", buffer);
                // };
                
                for (i=0; i<number; i++){
                if(!strcmp(buffer, player1[i].lastname))
                {
                    break;
                }
                }
                
                if(player1[i].lastname != number) {
                     printf("%s is present with name %s, %s %d\n", buffer, player1[i].lastname, player1[i].name, player1[i].birthYear);
                    printf("Your address is : \n"" %d %s %s \n", player1[i].streetnum, player1[i].streetname, player1[i].city);
                    printf("Guardian info : \n"" %s %s \n", player1[i].guradfirt, player1[i].guradlast);
                    printf("Guardian's phonenumber :""%d \n", player1[i].phonenum);
                    
            enum phonetype a[i];
            //print enums
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
                
                }
                else {
                    printf("%s is not present in the database", buffer);
                }
                
            break; //end of case b
            default:
                printf("invalid input");
            break;
            
        } //end of switch
    } while(menu_option !='e'); //end of do while switch statement
    
    
    
    return 0;
}

int menuAddPressFrmMM(){
    // char ch = 'y';
    // int i=0;
    
    // players player1;
    
    
    //fopen and rewrite
    printf("       TEAM ROSTER PROGRAM!!!\n");
    printLine();
    
    do{
        printf("Main Menu\n");
        printf("a. Load Team\n");
        printf("b. Add Players\n");
        printf("c. Display Team.\n");
        printf("d. Save Team.\n");
        printf("e. quit.\n");
        printf("f. Search Last Name From Load.\n");
        printLine();
        printf(" Please enter an option from the main menu: ");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
            case 'a':
                    printf("\n\nPlease Enter the name of the team file you want to load, Format['roster.txt']: \n");
                scanf("%s", buffer);
                
                FILE* roster = fopen(buffer, "r");
                    if( access(buffer, F_OK ) != -1)
                    {
                        printf("file exists\n");
                        
                        //scan statements from file
                        for (i=0; i<number; i++){
                            
                         fscanf(roster, " %s %s %d ", &player1[i].name, &player1[i].lastname, &player1[i].birthYear);
                        fscanf(roster, " %d %s %s", &player1[i].streetnum, &player1[i].streetname, &player1[i].city);
                        fscanf(roster, " %s %s ", &player1[i].guradfirt, &player1[i].guradlast);
                         fscanf(roster, " %d ", &player1[i].phonenum);
            
            enum phonetype a[i];
            if (a[i] == home){
            fscanf(roster, "\nGuardian's phonetype is: home\n");
        } else if (a[i] == mobile) {
            fscanf(roster, "\nGuardian's phonetype is: mobile\n");
        } else if (a[i] == cell) {
            fscanf(roster, "\nGuardian's phonetype is: cell\n");
        };
        
        enum phonetype b[i];
         if (b[i] == mother){
            fscanf(roster, "\nGuardian's phonetype is: mother\n");
        } else if (b[i] == father) {
            fscanf(roster, "\nGuardian's relation is: father\n");
        } else if (b[i] == grandmother) {
            fscanf(roster, "\nGuardian's relation is: grandmother\n");
        } else if (b[i] == grandfather) {
            fscanf(roster, "\nGuardian's relation is: grandfather\n");
        } else if (b[i] == other) {
            fscanf(roster, "\nGuardian's relation is: other\n");
        };
                        }fclose(roster);
                        
                    printf("name and age: %s, %s %d", player1[i].lastname, player1[i].name, player1[i].birthYear);
                    printf("Your address is : \n"" %d %s %s \n", player1[i].streetnum, player1[i].streetname, player1[i].city);
                    printf("Guardian info : \n"" %s %s \n", player1[i].guradfirt, player1[i].guradlast);
                    printf("Guardian's phonenumber :""%d \n", player1[i].phonenum);
                        
                        menuNoLoad();
                        //------------------------
                    }
                    else
                    {
                        printf("file is not found\n");
                    }
                break;
            case 'b':
                Addplayers();
                break;
                
            case 'c':
                // for (i=0; i<number; i++){
        
                DisplayRoster();
                // };
                break;
            case 'd':
                saveRoster();
                break;
            case 'e':
                printf("You have exited the Team Roster Application. ");
                break;
             case 'f':
                
                printf("Please enter the lastname you want to search for: \n");
                // for (i=0; i<number; i++){
                scanf("%s", buffer);
                // };
                
                for (i=0; i<number; i++){
                if(!strcmp(buffer, player1[i].lastname))
                {
                    break;
                }
                }
                
                if(player1[i].lastname != number) {
                     printf("%s is present with name %s, %s %d\n", buffer, player1[i].lastname, player1[i].name, player1[i].birthYear);
                    printf("Your address is : \n"" %d %s %s \n", player1[i].streetnum, player1[i].streetname, player1[i].city);
                    printf("Guardian info : \n"" %s %s \n", player1[i].guradfirt, player1[i].guradlast);
                    printf("Guardian's phonenumber :""%d \n", player1[i].phonenum);
                    
            enum phonetype a[i];
            //print enums
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
                
                }
                else {
                    printf("%s is not present in the database", buffer);
                }
                
            break; //end of case b
            default:
                printf("invalid input");
            break;
            
        } //end of switch
    } while(menu_option !='e'); //end of do while switch statement
    
    
    
    return 0;
}


int saveRoster() {
    printf("\n\nPlease Enter the name of the team file you want to save, Format['roster.txt']: \n");
    scanf("%s", buffer);
     FILE* roster = fopen(buffer, "w");
        if(access(buffer, F_OK ) != -1)
        {
            for (i=0; i<number; i++){ 
            // fprintf(roster, "\n %s %d %s \n", &player1[i].name[i], player1->birthYear[i], &player1[i].city[i]);
            
            fprintf(roster, "\n %s %s %d ", player1[i].name, player1[i].lastname, player1[i].birthYear);
            fprintf(roster, "\n %d %s %s", player1[i].streetnum, player1[i].streetname, player1[i].city);
            fprintf(roster, "\nGuardian's name is:\n"" %s %s ", player1[i].guradfirt, player1[i].guradlast);
            fprintf(roster, "\nGuardian's phone number is: "" %d ", player1[i].phonenum);
            
            enum phonetype a[i];
            if (a[i] == home){
            fprintf(roster, "\nGuardian's phonetype is: home\n");
        } else if (a[i] == mobile) {
            fprintf(roster, "\nGuardian's phonetype is: mobile\n");
        } else if (a[i] == cell) {
            fprintf(roster, "\nGuardian's phonetype is: cell\n");
        };
        
        enum phonetype b[i];
         if (b[i] == mother){
            fprintf(roster, "\nGuardian's phonetype is: mother\n");
        } else if (b[i] == father) {
            fprintf(roster, "\nGuardian's relation is: father\n");
        } else if (b[i] == grandmother) {
            fprintf(roster, "\nGuardian's relation is: grandmother\n");
        } else if (b[i] == grandfather) {
            fprintf(roster, "\nGuardian's relation is: grandfather\n");
        } else if (b[i] == other) {
            fprintf(roster, "\nGuardian's relation is: other\n");
        };
            
            //&player1[i].name[i], player1->birthYear[i], &player1[i].city[i]
            } //end of for loop
            // saveRoster(roster);
            fclose(roster);
        }
        else
        {
            printf("Failed to open file %s to write into\n", buffer);
        }
}



//((strcmp(word,string[mid]))<0)



