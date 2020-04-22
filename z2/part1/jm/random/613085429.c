#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 613085429
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 11, 6, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_free_fields(board, 6) == 123 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 119 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board811768355 = gamma_board(board);
assert( board811768355 != NULL );
assert( strcmp(board811768355, 
".........1..\n"
".........6.5\n"
".2....5.4...\n"
".4....3.....\n"
"...2........\n"
"..5....14...\n"
"............\n"
"......6.....\n"
"............\n"
"4.1.........\n"
"......3.....\n") == 0);
free(board811768355);
board811768355 = NULL;
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );


char* board419355255 = gamma_board(board);
assert( board419355255 != NULL );
assert( strcmp(board419355255, 
".........1..\n"
".........6.5\n"
".2....5.4...\n"
".4....3.....\n"
"...25.......\n"
"3.5....14...\n"
".......4....\n"
"......6.....\n"
"............\n"
"4.1.........\n"
"......3...2.\n") == 0);
free(board419355255);
board419355255 = NULL;
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 111 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 105 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 100 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 100 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 92 );
assert( gamma_move(board, 2, 0, 2) == 1 );


char* board142902072 = gamma_board(board);
assert( board142902072 != NULL );
assert( strcmp(board142902072, 
"..5......1..\n"
"...5..6..6.5\n"
".21...5.42..\n"
".4...43.3...\n"
".5.25.5.....\n"
"3.51...14...\n"
"...44..4....\n"
"1..1.66...2.\n"
"2......3....\n"
"4.1.5.......\n"
"..4...3.2.2.\n") == 0);
free(board142902072);
board142902072 = NULL;
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );


char* board429683179 = gamma_board(board);
assert( board429683179 != NULL );
assert( strcmp(board429683179, 
"355.....211.\n"
"...5..62.6.5\n"
".21...5442..\n"
".41.443.3.53\n"
".5125.5...16\n"
"5.51.5.1465.\n"
"36344..4....\n"
"16.1.66.662.\n"
"2.....33....\n"
"461.56...5..\n"
"2.45.33.222.\n") == 0);
free(board429683179);
board429683179 = NULL;
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );


char* board828971602 = gamma_board(board);
assert( board828971602 != NULL );
assert( strcmp(board828971602, 
"355.....211.\n"
"..652.62.6.5\n"
".21.2.5442.4\n"
".41.44343.53\n"
".5125.5...16\n"
"5.51.5214652\n"
"36344..4....\n"
"16.1.66.662.\n"
"21....331..1\n"
"411.56...5..\n"
"2.45.33.222.\n") == 0);
free(board828971602);
board828971602 = NULL;
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_golden_move(board, 6, 7, 6) == 0 );


char* board537464608 = gamma_board(board);
assert( board537464608 != NULL );
assert( strcmp(board537464608, 
"3555....211.\n"
"..652.6216.5\n"
"321.2.544264\n"
".41344343453\n"
".5125.5...16\n"
"5.5155214652\n"
"363445.4.6.6\n"
"16.1.66.662.\n"
"23525.3314.1\n"
"411256...5..\n"
"2.45.33.222.\n") == 0);
free(board537464608);
board537464608 = NULL;
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );


char* board205818672 = gamma_board(board);
assert( board205818672 != NULL );
assert( strcmp(board205818672, 
"35554.3.211.\n"
"..652.6216.5\n"
"321323544264\n"
".41344343453\n"
".5125.5..416\n"
"5.5155214652\n"
"363445.4.6.6\n"
"1621.665662.\n"
"2352513314.1\n"
"411256...5..\n"
"2.45.333222.\n") == 0);
free(board205818672);
board205818672 = NULL;
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );


gamma_delete(board);

    return 0;
}
