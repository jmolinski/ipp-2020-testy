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
uuid: 500623790
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board610015032 = gamma_board(board);
assert( board610015032 != NULL );
assert( strcmp(board610015032, 
"......\n"
"2.....\n"
"......\n"
"......\n"
".....3\n"
"2...3.\n"
"......\n"
".4....\n"
"......\n") == 0);
free(board610015032);
board610015032 = NULL;
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 2, 0) == 0 );


char* board312581643 = gamma_board(board);
assert( board312581643 != NULL );
assert( strcmp(board312581643, 
"...1..\n"
"2.2..6\n"
"......\n"
"2.1...\n"
"..6.63\n"
"21..33\n"
".....1\n"
".4....\n"
"..5..2\n") == 0);
free(board312581643);
board312581643 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );


char* board122215538 = gamma_board(board);
assert( board122215538 != NULL );
assert( strcmp(board122215538, 
"54.143\n"
"262..6\n"
"43.6.5\n"
"2.1231\n"
".56.63\n"
"215433\n"
"6151.1\n"
"44..16\n"
"135.12\n") == 0);
free(board122215538);
board122215538 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );


char* board638634309 = gamma_board(board);
assert( board638634309 != NULL );
assert( strcmp(board638634309, 
"54.143\n"
"262.26\n"
"43.6.5\n"
"2.1231\n"
"556.63\n"
"215433\n"
"6151.1\n"
"445.16\n"
"134.12\n") == 0);
free(board638634309);
board638634309 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
