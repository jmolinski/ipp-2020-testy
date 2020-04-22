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
uuid: 950068349
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_free_fields(board, 9) == 78 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_free_fields(board, 8) == 67 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_free_fields(board, 9) == 56 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );


char* board447020341 = gamma_board(board);
assert( board447020341 != NULL );
assert( strcmp(board447020341, 
"..8.......\n"
"75.8.4.21.\n"
"....9265.6\n"
"26..5...4.\n"
"5...3..37.\n"
"....167...\n"
"5.3....2.9\n"
".8849.....\n"
"9..9..1...\n") == 0);
free(board447020341);
board447020341 = NULL;
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_free_fields(board, 9) == 9 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board547716022 = gamma_board(board);
assert( board547716022 != NULL );
assert( strcmp(board547716022, 
"..8...4..5\n"
"75.8.4.21.\n"
"....926596\n"
"26..5...4.\n"
"553.33.37.\n"
"..26167...\n"
"5.31...2.9\n"
"98849.....\n"
"98.9..1..1\n") == 0);
free(board547716022);
board547716022 = NULL;
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );


char* board663289437 = gamma_board(board);
assert( board663289437 != NULL );
assert( strcmp(board663289437, 
"..8...4..5\n"
"75.8.4.21.\n"
".4..926596\n"
"26..5...4.\n"
"553.33.37.\n"
".726167...\n"
"5.31...2.9\n"
"988496....\n"
"98.9..1..1\n") == 0);
free(board663289437);
board663289437 = NULL;
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 6 );


char* board232254835 = gamma_board(board);
assert( board232254835 != NULL );
assert( strcmp(board232254835, 
"..84..4385\n"
"75.874.21.\n"
".44.926596\n"
"26..53..4.\n"
"553233.37.\n"
".7261677..\n"
"5.31.172.9\n"
"9884963...\n"
"98.9..1.81\n") == 0);
free(board232254835);
board232254835 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_free_fields(board, 9) == 7 );


gamma_delete(board);

    return 0;
}
