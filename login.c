#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
# define TAB 9
# define BCKSPC

struct user{
    char fullName[50];
    char email[50];
    char username[50];
    char password[50];
    char phone[50];

};

void takeinput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}
void generateUsername(char email[50], char username[50])
{

for (int i = 0; i < strlen; i++)
  {
if (email[i] == '@') break;
else username[i] = email[i];
  }
}

void takepassword(char pwd[50]){
    int i;
    char ch;
    while(1){
        ch = getch();
        if(ch == ENTER || ch == TAB){
            pwd[i] = '\0';
            break;
        }
        else if(ch == BCKSPC i)
        {
            if(i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else{
            pwd[i++] = ch;
            printf("* \b");
        }
    }
}

int main()
{
    system("color 0b");
     FILE *fp;

    int opt, usrFound = 0;
    struct user user;
    char password2[50];

    printf("\n\t\t\t\t----------welcome to authentication system------------------");
    printf("\nPlease choose your operation");
    printf("\n1.Signup");
    printf("\n2.login");
    printf("\n3.Exit");

    printf("\n\nYour choice: \t");

    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt)
    {
        case 1:
        printf("\nEnter your full name:\t");
        takeinput(user.fullName);
        printf("\nEnter your email:\t");
        takeinput(user.email);
        printf("\nEnter your contact no:\t");
        takeinput(user.phone);
        printf("\nEnter your password:\t");
        takepassword(user.password);
        printf("\nConfirm your password:\t");
        takepassword(password2);
        if(!strcmp(user.password, password2))
        {
        generateUsername(user.email, user.username);
       fp = fopen("Users.dat", "a+");
       fwrite(&user, sizeof(struct user), 1, fp);
       if(fwrite != 0)
       {
       printf("\n\nUser registrationsuccess");
       }else printf("something went wrong");
        }
        else printf("something went wrong");

        break;
        case 2:
        char username[50], pword[50];
        struct user usr;

        printf("\nEnter your username:\t");
        takeinput(username);
        printf("\n Enter your password:");
        takepassword(pword);
        system("cls");

        fp = fopen("Users.dat", "r");
        while(fread(&usr, sizeof(struct user), 1, fp))
        {
            if(!strcmp(usr.username,username)){
                if(!strcmp(usr.password,pword)){
                    printf("\n\t\t\t\t\twelcome %s", usr.fullName);
                    printf("\n\n|Full Name:\t%s", usr.fullName);
                    printf("\n|Email:\t\t%s", usr.email);
                    printf("\n|Username:\t%s", usr.username);
                    printf("\n|Contact no, :t%s", usr.phone);
                }
                else{
                    printf("\n\ninvalid password!");
                }
                usrFound = 1;
            }
        }
        if(!usrFound){
            printf("\n\nuser unregistered");
        }
        break;
        case 3:
        printf("\t\t\t bye bye :)");
        return 0;
    }

    return 0;
}