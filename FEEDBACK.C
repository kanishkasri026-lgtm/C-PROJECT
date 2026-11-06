#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int ch;
    char name[3000];
    fp = fopen("FEEDBACK.txt","w");

    if (fp == NULL)
{
printf("File cannot be opened\n");
return 1;
}
fprintf(fp,"Feedback of C programming\n");
fprintf(fp,"1. Learning C with the compiler of turbo C is very complicated\n");
fprintf(fp,"2. The main difficulty begins in the coding execution\n");
fprintf(fp,"3. The practical class need much more time\n");
fprintf(fp,"4. Need a latest compiler\n");
fprintf(fp,"5. Need much teaching to understand logic in leetcode\n");

fclose(fp);
printf("Data written successfully");


fp = fopen("FEEDBACK.txt","a");
if (fp == NULL)
{
printf("File cannot be openedfor appending\n");
return 1;
}
fprintf(fp, "\nFeedback of C Trainer\n");
fprintf(fp, "1. Much need interaction about the topic\n");
fprintf(fp, "2. Difficult to write coding\n");
fprintf(fp, "3. Need more clear explanation\n");
fprintf(fp, "4. The algorithm explanation is very clear\n");
fprintf(fp, "5. Unable to solve the error with that explanation\n");
fclose(fp);
printf("\nFeedback appended successfully\n");


fp = fopen("FEEDBACK.txt","r");
if (fp == NULL)
{
printf("Error in file opening\n");
getch();
return 1;
}
printf("\n DISPLAYING TOTAL FILE CONTENTS\n");
while ((ch = fgetc(fp)) != EOF)
{
putchar(ch);
}
fclose(fp);

printf("\nPress any key to return to the edit page");
getch();
return 0;
}