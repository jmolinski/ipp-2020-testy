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
uuid: 575924683
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 5, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board897517266 = gamma_board(board);
assert( board897517266 != NULL );
assert( strcmp(board897517266, 
".1...........\n"
".2.......1...\n"
"..3.4........\n"
"........2....\n"
"..6.2........\n") == 0);
free(board897517266);
board897517266 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_free_fields(board, 5) == 36 );


char* board856882182 = gamma_board(board);
assert( board856882182 != NULL );
assert( strcmp(board856882182, 
"41.1....5....\n"
"62346....132.\n"
".63.44...4..6\n"
".1...3422....\n"
"..632..41..4.\n") == 0);
free(board856882182);
board856882182 = NULL;
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );


char* board863947054 = gamma_board(board);
assert( board863947054 != NULL );
assert( strcmp(board863947054, 
"41.16..65.2..\n"
"62346....132.\n"
".63244...4..6\n"
".1...3422...5\n"
"..632.141..4.\n") == 0);
free(board863947054);
board863947054 = NULL;
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_free_fields(board, 1) == 23 );


char* board558345732 = gamma_board(board);
assert( board558345732 != NULL );
assert( strcmp(board558345732, 
"41.16..65.21.\n"
"62346....132.\n"
"163544..342.6\n"
".1..63422..55\n"
".6632.141..4.\n") == 0);
free(board558345732);
board558345732 = NULL;
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );


char* board105692830 = gamma_board(board);
assert( board105692830 != NULL );
assert( strcmp(board105692830, 
"41.16..65.213\n"
"62346.6..1325\n"
"163544..342.6\n"
".1..63422..55\n"
".6432.141..4.\n") == 0);
free(board105692830);
board105692830 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );


char* board716798760 = gamma_board(board);
assert( board716798760 != NULL );
assert( strcmp(board716798760, 
"41.16..653213\n"
"62346.6.21325\n"
"163544..342.6\n"
".3.663422.455\n"
"564322141..4.\n") == 0);
free(board716798760);
board716798760 = NULL;
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_free_fields(board, 3) == 11 );


char* board826482710 = gamma_board(board);
assert( board826482710 != NULL );
assert( strcmp(board826482710, 
"41516..653213\n"
"62346.6.21325\n"
"163544.634236\n"
".3.663422.455\n"
"564322141..4.\n") == 0);
free(board826482710);
board826482710 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );


gamma_delete(board);

    return 0;
}
