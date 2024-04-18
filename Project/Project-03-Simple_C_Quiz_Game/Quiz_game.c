#include<stdio.h>
int score = 0;
int check(int ans,int input){
    if (ans == input)
    {
        score++;
    }

}

int main(){
    printf("---------> Welcome to the Quiz Game <---------\n\n");

    printf("Q1. What is the capital of France?\n");
    printf("1) London\n");
    printf("2) Madrid\n");
    printf("3) Paris\n");
    printf("4) Rome\n");
    int ans;
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,3);




printf("Q2. Which planet is known as the \"Red Planet\"?\n");
printf("1) Venus\n");
printf("2) Jupiter\n");
printf("3) Mars\n");
printf("4) Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,3);


printf("Q3. Who wrote the play \"Romeo and Juliet\"?\n");
printf("1) Charles Dickens\n");
printf("2) William Shakespeare\n");
printf("3) Jane Austen\n");
printf("4) F. Scott Fitzgerald\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q4. What is the largest mammal in the world?\n");
printf("1) Elephant\n");
printf("2) Blue Whale\n");
printf("3) Giraffe\n");
printf("4) Polar Bear\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);


printf("Q5. Which gas makes up the majority of Earth's atmosphere?\n");
printf("1) Oxygen\n");
printf("2) Carbon dioxide\n");
printf("3) Nitrogen\n");
printf("4) Hydrogen\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,3);



printf("Q6. What is the currency of Japan?\n");
printf("1) Yen\n");
printf("2) Won\n");
printf("3) Ringgit\n");
printf("4) Baht\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);

printf("Q7. Who is the author of \"To Kill a Mockingbird\"?\n");
printf("1) Harper Lee\n");
printf("2) Mark Twain\n");
printf("3) J.K. Rowling\n");
printf("4) George Orwell\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);

printf("Q8. Which of the following is the largest planet in our solar system?\n");
printf("1) Mars\n");
printf("2) Earth\n");
printf("3) Jupiter\n");
printf("4) Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,3);


printf("Q9. What is the chemical symbol for gold?\n");
printf("1) Au\n");
printf("2) Ag\n");
printf("3) Fe\n");
printf("4) Cu\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);

printf("Q10. Which continent is home to the Sahara Desert?\n");
printf("1) Asia\n");
printf("2) Africa\n");
printf("3) South America\n");
printf("4) Australia\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q11. Who is the current President of the United States (as of my knowledge cutoff date in September 2021)?\n");
printf("1) Joe Biden\n");
printf("2) Donald Trump\n");
printf("3) Barack Obama\n");
printf("4) George W. Bush\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);

printf("Q12. Which of the following is not a primary color?\n");
printf("1) Red\n");
printf("2) Blue\n");
printf("3) Green\n");
printf("4) Yellow\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,3);

printf("Q13. What is the largest ocean on Earth?\n");
printf("1) Atlantic Ocean\n");
printf("2) Indian Ocean\n");
printf("3) Arctic Ocean\n");
printf("4) Pacific Ocean\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,4);

printf("Q14. Who painted the Mona Lisa?\n");
printf("1) Vincent van Gogh\n");
printf("2) Leonardo da Vinci\n");
printf("3) Pablo Picasso\n");
printf("4) Michelangelo\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q15. Which gas do plants absorb from the atmosphere during photosynthesis?\n");
printf("1) Oxygen\n");
printf("2) Carbon dioxide\n");
printf("3) Nitrogen\n");
printf("4) Hydrogen\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q16. What is the largest organ in the human body?\n");
printf("1) Heart\n");
printf("2) Liver\n");
printf("3) Brain\n");
printf("4) Skin\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,4);

printf("Q17. Which country is known as the Land of the Rising Sun?\n");
printf("1) China\n");
printf("2) Japan\n");
printf("3) South Korea\n");
printf("4) Thailand\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q18. Who wrote \"The Great Gatsby\"?\n");
printf("1) F. Scott Fitzgerald\n");
printf("2) Ernest Hemingway\n");
printf("3) Mark Twain\n");
printf("4) William Faulkner\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);

printf("Q19. What is the largest organ inside the human body?\n");
printf("1) Heart\n");
printf("2) Liver\n");
printf("3) Stomach\n");
printf("4) Kidney\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,2);

printf("Q20. What is the chemical symbol for water?\n");
printf("1) H2O\n");
printf("2) CO2\n");
printf("3) O2\n");
printf("4) N2\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    printf("\n");
    check(ans,1);


printf("\n\n\nCONGRATULATIONS! You have completed the quiz!\n");
printf("Your score is %d\n", score*5);
printf("TOTAL CORRECT ANSWERS: %d\n", score);


printf("\n\nN.B. This quiz game has constant questions and answers. If you want to play again, please restart the program.\n");
printf("Thank you for playing!\n\n\n\n\n\n\n");

printf("---------> Quiz Game by Md. Siamul Islam Soaib <---------\n");
printf("------------------------>THE END<------------------------\n");





}
