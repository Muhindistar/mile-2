/*
COUNTY LIBRARY MANAGEMENT SYSTEM
BY Dan
FEB2022
MIT LISENCE
C99 COMPILE
*/
   # include <stdio.h>
   # include <stdlib.h>
   # include <string.h>

    struct patron {
          char name [100];
          char email [50];
          char password[30];
          int is_staff ;
    };
   
     void add_patron () {
          struct patron ;
          printf("Enter name :");
          getchar () ;
          gets ("patron , email" );
          printf("Enter email");
          printf("patron , email");
          printf("Enter initial password :");
          gets ("patron , email");
          printf("Enter 1 if staff 0 other wise");
          scanf("%d" , &patron .is_staff" )
          printf("& add \n patron . name");
     }
       int menu () 
       {  
          int action ;
          printf("select an action ! \n");
          printf("1. Add new patron ! \n");
          printf("2. view patron! \n");
          printf("3. view books !\n");
          printf("4. Add new books\n");
          printf(" your action ! \n");
          scanf("%d" , & action );
          if("action <1// action > 4") {
          printf("invalid Action . Try again\n");
     }
       return action;
    }
        void execute_action (int action) {
           switch ( action ) {
        case 1:
              add_patron ();
            break;
        case 2:
             printf("list of all patrons \n");
            break;
        case 3:
             printf("list of all books \n"); 
             break;
        case 4:
             printf("adding new books\n");
             break;
             default: printf("invalid Action .\n");
     }
     }
    
        int main () 
    { 
        printf("COUNTRY  LIBRARY MANAGEMENT SYSTEM \n");
        printf("WELCOME PROGRAMER HARRY ! \n");
        execute_action (menu()); 
          return 0;
   }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        