// Make a programm to learn structure and storing data of students
#include <stdio.h>
int main()
{
    int n;
    printf("Enter No. of students \n");
    scanf("%d", &n); // Here, 'n' is not the no. of students 'n+1' is !!
    n = n + 1;
// Making Structure named 'class' in which we are storing data
    struct Class
    {
        char name[60];
        char roll_No[11];
        char mob_no[11];
    } s[n]; // here s[n] are name of structure
// calling structure named 'class'
    struct Class;
// loop no. 1 for storing the data 
    int i;
    for (i = 1; i < n; i++)
    {
    Mark_1_for_not_confirm:
        printf("Enter the name of student %d is :- \n", i);
        scanf("%s", &s[i].name);
        printf("Enter the Roll No. of student %d is :- \n", i);
    // Mark_2_for_Read_Again:
        scanf("%s", &s[i].roll_No);
        // if (s[i].roll_No == "\n" || s[i].roll_No == " ")
        // {
        //     goto Mark_2_for_Read_Again;
        // }
        printf("Enter the Mobile No. of student %d is :- \n", i);
        scanf("%s", &s[i].mob_no);
        printf("\n");
// Conforming from user that data entered is correct or not
        char check;
    Mark_3_for_Conferm_Again:
        printf("Please Confirm The DATA you Entered \n");
        printf("y for Yes , n for No :- ");
    Mark_4_for_Read_Again:
        scanf("%c", &check);
        if (check == 'y') // if data is ok then store next data
        {
            printf("OK \n");
        }
        else if (check == 'n') // if data is not ok then enter the data again
        {
            printf("Please Enter Again \n");
            goto Mark_1_for_not_confirm;
        }
        else if (check == '\n') // miss type or keyboard miss behave
        {
            goto Mark_4_for_Read_Again;
        }
        else if (check != 'y' && check != 'n') // if user enter something alse then y and n then ask user again for confermation
        {
            goto Mark_3_for_Conferm_Again;
        }
    }
// loop 1 ends ....... all the data has been stored ......
    printf("\n");
    printf("Data You Have Entered\n");
    printf("\n");
// loop 2 for printing the data 
    int j;
    for (j = 1; j < n; j++)
    {
        printf("The name of Student %d is :- %s \n", j, s[j].name);
        printf("The Roll No. of Student %d is :-  %s \n", j, s[j].roll_No);
        printf("The Mobile No. of Student %d is :-  %s \n", j, s[j].mob_no);
        printf("\n");
    }
//loop 2 ends ..... printing all the data ......
    return 0;
}