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
uuid: 749167402
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 9, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );


char* board360023292 = gamma_board(board);
assert( board360023292 != NULL );
assert( strcmp(board360023292, 
".......\n"
".......\n"
"...3...\n"
".2.....\n"
"...1...\n"
".......\n"
".......\n"
".......\n"
"....3..\n") == 0);
free(board360023292);
board360023292 = NULL;
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );


char* board734075166 = gamma_board(board);
assert( board734075166 != NULL );
assert( strcmp(board734075166, 
"..6....\n"
".4.....\n"
"...3...\n"
".2.....\n"
"...1...\n"
"..6....\n"
".......\n"
"5......\n"
"....3..\n") == 0);
free(board734075166);
board734075166 = NULL;
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );


char* board580921068 = gamma_board(board);
assert( board580921068 != NULL );
assert( strcmp(board580921068, 
"..6....\n"
".4.....\n"
"...3...\n"
".2.....\n"
"...1...\n"
"..6....\n"
"......7\n"
"5......\n"
"....3..\n") == 0);
free(board580921068);
board580921068 = NULL;
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );


char* board411298435 = gamma_board(board);
assert( board411298435 != NULL );
assert( strcmp(board411298435, 
"..69...\n"
".43....\n"
"6..3..1\n"
".2.....\n"
"...1...\n"
"4.6....\n"
".6....7\n"
"5.....5\n"
"23..3..\n") == 0);
free(board411298435);
board411298435 = NULL;
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );


char* board720502695 = gamma_board(board);
assert( board720502695 != NULL );
assert( strcmp(board720502695, 
"..691..\n"
"543....\n"
"6..3..1\n"
".2.....\n"
"...12..\n"
"4.6....\n"
".6....7\n"
"5.1.4.5\n"
"23..3..\n") == 0);
free(board720502695);
board720502695 = NULL;
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );


char* board389785270 = gamma_board(board);
assert( board389785270 != NULL );
assert( strcmp(board389785270, 
".86914.\n"
"543..57\n"
"6.239.1\n"
".2..2..\n"
"87.12..\n"
"4.6....\n"
"8619.87\n"
"5.1.4.5\n"
"23..3..\n") == 0);
free(board389785270);
board389785270 = NULL;
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );


char* board195687354 = gamma_board(board);
assert( board195687354 != NULL );
assert( strcmp(board195687354, 
".86914.\n"
"543..57\n"
"6.239.1\n"
".2..29.\n"
"87.129.\n"
"4.6....\n"
"8619.87\n"
"5.144.5\n"
"23..3..\n") == 0);
free(board195687354);
board195687354 = NULL;
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board751059155 = gamma_board(board);
assert( board751059155 != NULL );
assert( strcmp(board751059155, 
".86914.\n"
"543..57\n"
"6.239.1\n"
".2..299\n"
"87.129.\n"
"466.9..\n"
"8619987\n"
"5.14465\n"
"23.437.\n") == 0);
free(board751059155);
board751059155 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_golden_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_free_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );


gamma_delete(board);

    return 0;
}
