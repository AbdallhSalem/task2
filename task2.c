#include <stdio.h>
#include <string.h>

union user_activation
{
    struct active
    {
        char flag[5];
    } A;
};

struct Registration
{
    char firstName[15];
    char lastName[15];
    char Email[20];
    char password[15];
};

struct Login
{
    char password[15];
    char Email[20];
};

int main()
{
    union user_activation U;
    struct Registration R;
    struct Login L;
    printf("\n                 REGISTRATION\n");

    printf("Enter FirstName :");
    gets(R.firstName);
    printf("Enter LastName :");
    gets(R.lastName);
    printf("Enter Email :");
    gets(R.Email);
    printf("Enter Flag :");
    scanf("%s", U.A.flag);
    printf("Enter PassWord :");
    scanf("%d", R.password);

    printf("\n");
    printf("                   LOGIN\n");
    printf("Enter Email :");
    scanf("%s", L.Email);

    printf("Enter PassWord :");
    scanf("%d", L.password);

   

    if (strcmp(R.Email, L.Email) == 0 && strcmp(R.password, L.password) == 0)
    {
        if (strcmp(U.A.flag, "1") == 0 || strcmp(U.A.flag, "true") == 0)
        {
            printf("you are active + Successfully Logged in!");
        }
        else if (strcmp(U.A.flag, "1") != 0 || strcmp(U.A.flag, "true") != 0)
        {
            printf("you are not active !");
        }
    }

    else
    {
        printf("Failed to login");
    }
}