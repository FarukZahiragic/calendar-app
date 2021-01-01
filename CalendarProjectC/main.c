#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Calculator app in C
    char month[15], yesNo[4] = "yes";
    int i, days = 31;
    printf("Welcome to the 2021 Calendar app!\n");
    while(strcmp(yesNo, "yes") == 0) {
    printf("Choose a month (full lowercase name of month): ");
    scanf("%s", month);
    printf("%s 2021\n", month);
    printf("Mon Tue Wen Thu Fri Sat Sun\n");
    // Output of a selected month
    if (strcmp(month, "january") == 0) {
            printf("                ");
            for(i=1;i<=days;i++) {
                if (i==3) {
                    printf("%d   \n", i);
                }
                else if ((i-3)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "february") == 0) {
            days=28;
            for(i=1;i<=days;i++) {
                if (i==7) {
                    printf("%d   \n", i);
                }
                else if (i%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "march") == 0) {
            for(i=1;i<=days;i++) {
                if (i==7) {
                    printf("%d   \n", i);
                }
                else if (i%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "april") == 0) {
            days=30;
            printf("            ");
            for(i=1;i<=days;i++) {
                if (i==4) {
                    printf("%d   \n", i);
                }
                else if ((i-4)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "may") == 0) {
            printf("                    ");
            for(i=1;i<=days;i++) {
                if (i==2) {
                    printf("%d   \n", i);
                }
                else if ((i-2)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "june") == 0) {
            days=30;
            printf("    ");
            for(i=1;i<=days;i++) {
                if (i==6) {
                    printf("%d   \n", i);
                }
                else if ((i-6)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "july") == 0) {
            printf("            ");
            for(i=1;i<=days;i++) {
                if (i==4) {
                    printf("%d   \n", i);
                }
                else if ((i-4)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "august") == 0) {
            printf("                        ");
            for(i=1;i<=days;i++) {
                if (i==1) {
                    printf("%d   \n", i);
                }
                else if ((i-1)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "september") == 0) {
            days=30;
            printf("        ");
            for(i=1;i<=days;i++) {
                if (i==5) {
                    printf("%d   \n", i);
                }
                else if ((i-5)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "october") == 0) {
            printf("                ");
            for(i=1;i<=days;i++) {
                if (i==3) {
                    printf("%d   \n", i);
                }
                else if ((i-3)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "november") == 0) {
            days=30;
            for(i=1;i<=days;i++) {
                if (i==7) {
                    printf("%d   \n", i);
                }
                else if (i%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else if (strcmp(month, "december") == 0) {
            printf("        ");
            for(i=1;i<=days;i++) {
                if (i==5) {
                    printf("%d   \n", i);
                }
                else if ((i-5)%7==0) {
                    printf("%d  \n", i);
                }
                else if(i>=10) {
                    printf("%d  ", i);
                }
                else {
                    printf("%d   ", i);
                }
        }
    }
    else {
        printf("Invalid name of month, please try again.");
    }
    printf("\nDo you want to continue (yes/no)?\n");
    scanf("%s", yesNo);
    if(!(strcmp(yesNo, "yes") == 0 || strcmp(yesNo, "no") == 0)) {
        printf("Invalid input (use yes or no).\n");
        printf("\nDo you want to continue (yes/no)?\n");
        scanf("%s", yesNo);
    }
    }
}
