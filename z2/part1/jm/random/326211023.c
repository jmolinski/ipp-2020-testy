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
uuid: 326211023
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 13, 6, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_free_fields(board, 6) == 133 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_golden_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_free_fields(board, 6) == 109 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 100 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );


char* board861826554 = gamma_board(board);
assert( board861826554 != NULL );
assert( strcmp(board861826554, 
"1......3....\n"
"6...3.6.....\n"
"...5.....253\n"
"3346.4.5...6\n"
".....6....6.\n"
".....5..3..6\n"
"4.363..13.5.\n"
"153..6.31.4.\n"
".14.223.6.1.\n"
"4....4...5.3\n"
".......2.5.1\n"
".2614...235.\n"
"....35..1...\n") == 0);
free(board861826554);
board861826554 = NULL;
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_free_fields(board, 1) == 84 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_free_fields(board, 2) == 80 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );


char* board828901200 = gamma_board(board);
assert( board828901200 != NULL );
assert( strcmp(board828901200, 
"1.....53....\n"
"6...336256..\n"
"5..5..554253\n"
"3346.4.5.6.6\n"
"66..46..116.\n"
"335565.63.46\n"
"4.363.113.5.\n"
"153..6131.4.\n"
".14.2236621.\n"
"4.5..46.25.3\n"
"5.31.3.22551\n"
"42614.2.235.\n"
".4..35.415.4\n") == 0);
free(board828901200);
board828901200 = NULL;
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );


char* board920793817 = gamma_board(board);
assert( board920793817 != NULL );
assert( strcmp(board920793817, 
"145...53....\n"
"66.2336256..\n"
"5..5..554253\n"
"334616.5.6.6\n"
"665.46..116.\n"
"335555.63.46\n"
"4.363211365.\n"
"153..6134.4.\n"
".14.2236621.\n"
"4.5.346.25.3\n"
"5.31.3.22551\n"
"4261412.2353\n"
".4..35.415.4\n") == 0);
free(board920793817);
board920793817 = NULL;
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_golden_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_golden_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );


char* board285142378 = gamma_board(board);
assert( board285142378 != NULL );
assert( strcmp(board285142378, 
"145.5.53....\n"
"66.2336256..\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..116.\n"
"335555.63.46\n"
"4.363211365.\n"
"153..6134.42\n"
"114.2236621.\n"
"445.346.25.3\n"
"5.31.3.22551\n"
"4261412.2353\n"
".4..35.415.4\n") == 0);
free(board285142378);
board285142378 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );


char* board576497132 = gamma_board(board);
assert( board576497132 != NULL );
assert( strcmp(board576497132, 
"145.5.53..1.\n"
"66.2336256..\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..116.\n"
"335555563.46\n"
"4.363211365.\n"
"153..6134.42\n"
"114.2236621.\n"
"4451346.25.3\n"
"5.31.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board576497132);
board576497132 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );


char* board547982103 = gamma_board(board);
assert( board547982103 != NULL );
assert( strcmp(board547982103, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..116.\n"
"335555563.46\n"
"4.363211365.\n"
"1531.6134.42\n"
"114.2236621.\n"
"4451346.25.3\n"
"5.31.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board547982103);
board547982103 = NULL;
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board978717196 = gamma_board(board);
assert( board978717196 != NULL );
assert( strcmp(board978717196, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..116.\n"
"335555563.46\n"
"4.363211365.\n"
"1531.6134.42\n"
"114.2236621.\n"
"4451346.25.3\n"
"5.31.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board978717196);
board978717196 = NULL;
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );


char* board414216794 = gamma_board(board);
assert( board414216794 != NULL );
assert( strcmp(board414216794, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..116.\n"
"335555563.46\n"
"4.3632113654\n"
"1531.6134.42\n"
"114.2236621.\n"
"4451346.2563\n"
"5.31.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board414216794);
board414216794 = NULL;
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );


char* board157723145 = gamma_board(board);
assert( board157723145 != NULL );
assert( strcmp(board157723145, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.46..1162\n"
"335555563.46\n"
"4.3632113654\n"
"153166134.42\n"
"114.2236621.\n"
"4451346.2563\n"
"5.31.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board157723145);
board157723145 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );


char* board645193712 = gamma_board(board);
assert( board645193712 != NULL );
assert( strcmp(board645193712, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.466.1162\n"
"335555563.46\n"
"4.3632113654\n"
"153166134.42\n"
"114.2236621.\n"
"445134662563\n"
"5131.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board645193712);
board645193712 = NULL;
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );


char* board144321243 = gamma_board(board);
assert( board144321243 != NULL );
assert( strcmp(board144321243, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.466.1162\n"
"335555563.46\n"
"4.3632113654\n"
"153166134.42\n"
"114.2236621.\n"
"445134662563\n"
"5131.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board144321243);
board144321243 = NULL;
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board828115505 = gamma_board(board);
assert( board828115505 != NULL );
assert( strcmp(board828115505, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5..554253\n"
"334616.5.666\n"
"665.466.1162\n"
"335555563.46\n"
"4.3632113654\n"
"153166134.42\n"
"114.2236621.\n"
"445134662563\n"
"5131.3.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board828115505);
board828115505 = NULL;
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 2) == 0 );


char* board320567631 = gamma_board(board);
assert( board320567631 != NULL );
assert( strcmp(board320567631, 
"145.5.536.1.\n"
"66.2336256.3\n"
"55.5.2554253\n"
"334616.5.666\n"
"665.466.1162\n"
"335555563.46\n"
"4.3632113654\n"
"153166134.42\n"
"114.2236621.\n"
"445134662563\n"
"513143.22551\n"
"4261412.2353\n"
"24..35.415.4\n") == 0);
free(board320567631);
board320567631 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_golden_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );


gamma_delete(board);

    return 0;
}
