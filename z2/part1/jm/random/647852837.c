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
uuid: 647852837
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );


char* board973112441 = gamma_board(board);
assert( board973112441 != NULL );
assert( strcmp(board973112441, 
"......\n"
"..5..1\n"
"....4.\n"
"...1..\n"
"...21.\n"
"361...\n"
"......\n"
".....5\n"
".2....\n"
"....3.\n"
"43....\n") == 0);
free(board973112441);
board973112441 = NULL;
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_golden_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board469203684 = gamma_board(board);
assert( board469203684 != NULL );
assert( strcmp(board469203684, 
"41.7..\n"
"7.5..1\n"
"6.434.\n"
"63.165\n"
".1.21.\n"
"3612.6\n"
".2..36\n"
"...655\n"
"12555.\n"
"2..33.\n"
"43.7..\n") == 0);
free(board469203684);
board469203684 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 10, 3) == 0 );


char* board763398195 = gamma_board(board);
assert( board763398195 != NULL );
assert( strcmp(board763398195, 
"4137.1\n"
"7.5..1\n"
"66434.\n"
"632165\n"
".1.21.\n"
"3612.6\n"
"62..36\n"
"...655\n"
"12555.\n"
"26.334\n"
"43.7..\n") == 0);
free(board763398195);
board763398195 = NULL;
assert( gamma_move(board, 5, 5, 0) == 1 );


char* board505164555 = gamma_board(board);
assert( board505164555 != NULL );
assert( strcmp(board505164555, 
"4137.1\n"
"7.5..1\n"
"66434.\n"
"632165\n"
".1.21.\n"
"3612.6\n"
"62..36\n"
"...655\n"
"12555.\n"
"26.334\n"
"43.7.5\n") == 0);
free(board505164555);
board505164555 = NULL;
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );


char* board413435989 = gamma_board(board);
assert( board413435989 != NULL );
assert( strcmp(board413435989, 
"4137.1\n"
"7.5..1\n"
"66434.\n"
"632165\n"
".1.211\n"
"3612.6\n"
"62.636\n"
"...655\n"
"12555.\n"
"26.334\n"
"43.7.5\n") == 0);
free(board413435989);
board413435989 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_golden_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );


char* board428677882 = gamma_board(board);
assert( board428677882 != NULL );
assert( strcmp(board428677882, 
"4137.1\n"
"7.5.41\n"
"664342\n"
"632165\n"
"517211\n"
"361266\n"
"62.636\n"
"...655\n"
"12555.\n"
"26.334\n"
"44.7.5\n") == 0);
free(board428677882);
board428677882 = NULL;
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );


gamma_delete(board);

    return 0;
}
