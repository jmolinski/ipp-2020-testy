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
uuid: 298512629
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );


char* board171398487 = gamma_board(board);
assert( board171398487 != NULL );
assert( strcmp(board171398487, 
".........\n"
".........\n"
".........\n"
"........2\n"
".........\n"
"...2.....\n"
"......4..\n"
"3...1....\n") == 0);
free(board171398487);
board171398487 = NULL;
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board687561842 = gamma_board(board);
assert( board687561842 != NULL );
assert( strcmp(board687561842, 
"1...5....\n"
"5........\n"
"5..4.....\n"
"........2\n"
"....24...\n"
"3..2.....\n"
".....34..\n"
"3...1....\n") == 0);
free(board687561842);
board687561842 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );


char* board330861471 = gamma_board(board);
assert( board330861471 != NULL );
assert( strcmp(board330861471, 
"1...5....\n"
"5........\n"
"5..4.....\n"
"........2\n"
"....24...\n"
"3..2.....\n"
".....34..\n"
"3...1....\n") == 0);
free(board330861471);
board330861471 = NULL;
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board839730118 = gamma_board(board);
assert( board839730118 != NULL );
assert( strcmp(board839730118, 
"12..5.5..\n"
"5........\n"
"5..4...2.\n"
"......452\n"
"...5241..\n"
"3..2.33..\n"
".5...34..\n"
"3...1....\n") == 0);
free(board839730118);
board839730118 = NULL;
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 5, 0) == 1 );


char* board111631570 = gamma_board(board);
assert( board111631570 != NULL );
assert( strcmp(board111631570, 
"12..5352.\n"
"5...34.4.\n"
"5..41..2.\n"
"....1.452\n"
"..45241..\n"
"3232.33.3\n"
"2534134.4\n"
"3...15..5\n") == 0);
free(board111631570);
board111631570 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board794997580 = gamma_board(board);
assert( board794997580 != NULL );
assert( strcmp(board794997580, 
"12..1352.\n"
"5...3414.\n"
"55.414.2.\n"
"3.5.1.452\n"
"3.452415.\n"
"3232.33.3\n"
"2534134.4\n"
"3...15..5\n") == 0);
free(board794997580);
board794997580 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );


char* board938595598 = gamma_board(board);
assert( board938595598 != NULL );
assert( strcmp(board938595598, 
"12521352.\n"
"5.5.3414.\n"
"55.414422\n"
"3.5.1.452\n"
"334524132\n"
"3232.3323\n"
"253414434\n"
"3..315..5\n") == 0);
free(board938595598);
board938595598 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


gamma_delete(board);

    return 0;
}
