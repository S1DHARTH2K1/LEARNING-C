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