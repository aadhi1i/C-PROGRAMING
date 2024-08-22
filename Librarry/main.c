#include <stdio.h>
#include <string.h>

struct library{
    char us[20];
    char pass[8];
};

struct book{
    char bname[20];
    char aname[20];
    float pr;
};

struct User{
    char r_name[20];
    char r_place[20];
    char r_user[20];
    char r_pass[20];
    int r_age;
};

int main()
{
    struct library lib[10];
    int option;
    char u1[20];
    char p1[8];

    strcpy(lib[0].us, "dona");
    strcpy(lib[0].pass, "123456");

    int i = 0, j = 0; 

    struct book bc[10];
    struct User uc[10];

    start:
    printf("\nMain Menu \n1. Admin \n2. User \n3. Exit");
    printf("\nEnter Your Choice:");
    scanf("%d",&option);

    switch(option){
        case 1:
            printf("Enter Username:");
            scanf("%s", u1);
            printf("Enter the Password:");
            scanf("%s", p1);
            if(strcmp(lib[0].us, u1) == 0 && strcmp(lib[0].pass, p1) == 0){
                printf("Login successfully!!\n");

                int b_option,  exists = 0;
                
                book_menu:
                printf("\nBook Menu \n1. Add Book \n2. View Book \n3. Update price \n4. Delete Book \n5. Exit");
                printf("\nEnter Your Choice:");
                scanf("%d",&b_option);

                switch(b_option)
                {
                   case 1:
                 printf("Enter Book Name:");
                  scanf("%s",bc[i].bname);

                  
                  for(int k = 0; k < i; k++) {
                  if(strcmp(bc[k].bname, bc[i].bname) == 0) 
                  {
                  exists = 1;
                 break;
             }
          }

                if(exists) {
                 printf("Book name already exists.\n");
                 goto book_menu;  
               }

                    printf("Enter Author Name:");
                    scanf("%s",bc[i].aname);
                    printf("Enter the price:");
                    scanf("%f",&bc[i].pr);
                    i++;
                    goto book_menu;
                      break;


                      case 2:
                        for(int k=0; k<i; k++){
                            printf("Book Name: %s\n",bc[k].bname);
                            printf("Author Name: %s\n",bc[k].aname);
                            printf("Price of %s: %.2f\n",bc[k].bname,bc[k].pr);
                        }
                        goto book_menu;
                        break;

                    case 3:
                        char bd[20];
                        float price;
                        printf("Enter The Book Name:");
                        scanf("%s",bd);
                        for( int k=0; k<i; k++){
                            if(strcmp(bc[k].bname, bd) == 0){
                                printf("Enter The new price:");
                                scanf("%f", &price);
                                bc[k].pr = price;
                                printf("New price: %.2f\n", bc[k].pr);
                            }
                        }
                        goto book_menu;
                        break;
                        
                        case 4:
                        char de[10];
                        printf("Enter Book Name You Want Delete:");
                        scanf("%s",de);
                        int found = 0;
                        for(int l=0; l<i; l++){
                        if(strcmp(bc[l].bname, de) == 0){
                        printf("Book Name: %s\n",bc[l].bname);
                        printf("Author Name: %s\n",bc[l].aname);
                        printf("Price of %s: %.2f\n",bc[l].bname,bc[l].pr);
                        found = 1;
                        printf("Deleting!!");
            
                       for(int m=l; m<i-1; m++){
                       bc[m] = bc[m+1];
                       }
                       i--; 
                       break;
                    }
                }
                      if(!found){
                     printf("No Data !!");
                   }
                    goto book_menu;
                     break;
                        
                    case 5:
                        goto start;
                        break;
                    default:
                        printf("\nInvalid option. Please try again.\n");
                        goto book_menu;
                }
            } else {
                printf("\nInvalid username or password. Please try again.\n");
                goto start;
            }
            break;

        case 2:
            int u_option, k , found = 0;
            char um[20];
            char up[20];

            user_menu:
            printf("\nUser Menu \n1. Registration \n2. Login \n3. Exit");
            printf("\nEnter Your Option:");
            scanf("%d",&u_option);

            switch(u_option)
            {
                           case 1:
                printf("Enter Your Name:");
                scanf("%s",uc[j].r_name);
                printf("Enter Your Place:");
                scanf("%s",uc[j].r_place);
                printf("Enter Your Age:");
                scanf("%d",&uc[j].r_age);
                printf("Enter Your Username:");
                scanf("%s",uc[j].r_user);
                
                for(int k = 0; k < j; k++) {
                    if(strcmp(uc[k].r_user, uc[j].r_user) == 0) {
                        found = 1;
                        break;
                    }
                }

                if(found) {
                    printf("Username already exists.\n");
                    goto user_menu; 
                }
                printf("Enter Your Password:");
                scanf("%s",uc[j].r_pass);
                j++; 
                goto user_menu;
                break;

            case 2:
                printf("Enter Username:");
                scanf("%s",um);
                printf("Enter The Password:");
                scanf("%s",up);

                for(k=0; k<j; k++){ 
                    if(strcmp(uc[k].r_user, um) == 0 && strcmp(uc[k].r_pass, up) == 0){
                        printf("Login successfully !!");
                        int u_choice;
                        user_sub_menu:
                        printf("\nUser Sub Menu \n1. View Books \n2. Search book \n3. Exit");
                        printf("\nEnter Your Choice:");
                        scanf("%d",&u_choice);

                        switch(u_choice)
                        {
                            case 1:
                                for(int l=0; l<i; l++){
                                    printf("Book Name: %s\n",bc[l].bname);
                                    printf("Author Name: %s\n",bc[l].aname);
                                    printf("Price of %s: %.2f\n",bc[l].bname,bc[l].pr);
                                }
                                goto user_sub_menu;
                                break;
                                
                                case 2:
                                char s_book[10];
                                printf("Enter The Book You Want To Search:");
                                    scanf("%s",s_book);
                                    for( int l=0; l<i; l++){
                                        if(strcmp(bc[l].bname, s_book) == 0){
                                            printf("Book Name: %s\n",bc[l].bname);
                                            printf("Author Name: %s\n",bc[l].aname);
                                            printf("Price of %s: %.2f\n",bc[l].bname,bc[l].pr);
                                        }else{
                                            printf("No Data !!");
                                        }
                                    }
                                    goto user_sub_menu;
                                    break;
                                

                            case 3:
                                goto user_menu;
                                break;

                            default:
                                printf("\nInvalid option. Please try again.\n");
                                goto user_sub_menu;
                        }
                    } else {
                        printf("\nInvalid username or password. Please try again.\n");
                        goto user_menu;
                    }
                }
                break;

            case 3:
                goto start;
                break;

            default:
                printf("\nInvalid option. Please try again.\n");
                goto user_menu;
        }
        break;

    case 3:
    default:
        printf("\nInvalid option. Please try again.\n");
        goto start;
    }
    return 0;
}