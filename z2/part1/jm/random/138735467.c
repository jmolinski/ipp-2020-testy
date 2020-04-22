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
uuid: 138735467
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 10, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );


char* board304791333 = gamma_board(board);
assert( board304791333 != NULL );
assert( strcmp(board304791333, 
".....\n"
".5...\n"
".635.\n"
".....\n"
".....\n"
"3....\n"
"..35.\n"
"2....\n"
"...4.\n"
"...1.\n") == 0);
free(board304791333);
board304791333 = NULL;
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board898365077 = gamma_board(board);
assert( board898365077 != NULL );
assert( strcmp(board898365077, 
"...53\n"
".5...\n"
".635.\n"
"...6.\n"
"4....\n"
"32621\n"
".2356\n"
"2..21\n"
"4154.\n"
"4..1.\n") == 0);
free(board898365077);
board898365077 = NULL;


char* board665123139 = gamma_board(board);
assert( board665123139 != NULL );
assert( strcmp(board665123139, 
"...53\n"
".5...\n"
".635.\n"
"...6.\n"
"4....\n"
"32621\n"
".2356\n"
"2..21\n"
"4154.\n"
"4..1.\n") == 0);
free(board665123139);
board665123139 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );


char* board755923729 = gamma_board(board);
assert( board755923729 != NULL );
assert( strcmp(board755923729, 
"...53\n"
".545.\n"
".635.\n"
"...6.\n"
"42...\n"
"32621\n"
".2356\n"
"2.621\n"
"4154.\n"
"43.1.\n") == 0);
free(board755923729);
board755923729 = NULL;
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );


char* board361790452 = gamma_board(board);
assert( board361790452 != NULL );
assert( strcmp(board361790452, 
"...53\n"
".545.\n"
".635.\n"
"...6.\n"
"42...\n"
"32621\n"
".2356\n"
"2.621\n"
"4154.\n"
"43.1.\n") == 0);
free(board361790452);
board361790452 = NULL;
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );


char* board219737108 = gamma_board(board);
assert( board219737108 != NULL );
assert( strcmp(board219737108, 
"...53\n"
"4545.\n"
".635.\n"
"...6.\n"
"42...\n"
"32621\n"
".2356\n"
"2.621\n"
"4154.\n"
"43.1.\n") == 0);
free(board219737108);
board219737108 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


gamma_delete(board);

    return 0;
}
