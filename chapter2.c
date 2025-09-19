//PROGRAM 1(PASS BY VALUE)
// #include <stdio.h>

// // This function receives a COPY of the score's value
// void add_five(int score) {
//     score = score + 5;
//     printf("Inside the function, score is now: %d\n", score);
// }

// int main() {
//     int my_score = 10;
//     printf("Before the function, my_score is: %d\n", my_score);

//     add_five(my_score); // We pass the value 10 to the function

//     printf("After the function, my_score is still: %d\n", my_score); // It didn't change!

//     return 0;
// }
// WRONG WAY TO DO IT
// ------------------------------------------------------------

// CORRECT WAY TO DO IT
//PROGRAM 2 (PASS BY REFERENCE, PASSING ADDRESS, USING POINTERS)
// #include <stdio.h>
// void add_five(int *score_ptr){
//     *score_ptr = *score_ptr + 5;
//     printf("Inside the function, score is now: %d\n", *score_ptr);
// }
// int main(){
//     int my_score=10;
//     printf("Before the function, my_score is: %d\n",my_score);
//     add_five(&my_score);
//     printf("After the function, my_score is now: %d\n",my_score);
//     return 0;
// }
// ------------------------------------------------------------



//TASK 1 - PROGRAM 3
// Write a function called halve() that takes a pointer to a float as an argument.
// The function should divide the value of the variable it's pointing to by two.
// Test it in main with your price variable from the last exercise.

// #include <stdio.h>
// void halve(float *p) {
//     *p = *p / 2.0f;
// }
// int main() {
//     float price = 99.95f;
//     printf("1. The original price is: %f\n", price);
//     printf("2. Calling the 'halve' function and giving it the address of 'price'...\n");
//     halve(&price);
//     printf("3. Back in main, the new price is: %f\n", price);
//     halve(&price);
//     printf("4. Again back in main, the new price is: %f\n", price);
//     return 0;
// }
// ------------------------------------------------------------