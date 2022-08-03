//Donald Bowler
//CS-1714-A1T
//June,21,2022

//Proj3-

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<unistd.h>

#include "header.h"
#include "menu.h"

#define ROSTER_FILE "roster.txt"

int main(int argc, char* argv[]) {
    player player1[MAX_PLAYERS];
    
    
    //fopen and rewrite
    printf("       TEAM ROSTER PROGRAM!!!\n");
    printLine();
    
    do{
        printf("Main Menu\n");
        printf("a. Load Team\n");
        printf("b. Add Players\n");
        printf("c. Display Team.\n");
        printf("e. Quit.\n");
        printLine();
        printf(" Please enter an option from the main menu: ");
        scanf(" %c",&menu_option);
        
        switch(menu_option){
            //load team
            case 'a':
                printf("\n\nPlease Enter the name of the team file you want to load, Format['roster.txt']: \n");
                scanf("%s", buffer);
                
                FILE* roster = fopen(buffer, "r+");
                    if( access(buffer, F_OK ) != -1)
                    {
                        printf("----FILE EXISTS---\n");
                        printf("YOU ARE NOW REWRITTING FILE, PLEASE INPUT OLD AND NEW INPUTS YOU WOULD LIKE TO USE :\n");
                        Addplayers();
                        menuNoLoad();
                        //------------------------
                    }
                    else
                    {
                        printf("file %s is not found\n", buffer);
                    }
                
                break;
                
            case 'b':
                Addplayers();
                menuAddPressFrmMM();
                break;
            case 'c':

                DisplayRoster();
                printf("ERROR! USER MUST ADD PLAYERS BEFORE BEING DISPLAYED! \n");
                
                break;
                //quit
            case 'e':
                printf("You have exited the Team Roster Application. ");
                break;
            default:
                printf("invalid input. Be sure to add users before displaying them. \n");
            break;
            
        } //end of switch
    } while(menu_option !='e'); //end of do while switch statement
   
    
    free(player1[i].name); 
    free(player1[i].lastname); 
    free(player1[i].guradfirt); 
    free(player1[i].guradlast); 
    free(player1[i].streetname); 
    free(player1[i].city); 
    
    
}

///strlen for maximum size
//strlen(buffer) compared with the limit lab3gl2.c