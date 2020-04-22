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
uuid: 732198999
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 8, 3, 12) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_free_fields(board, 8) == 110 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_golden_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );


char* board287341405 = gamma_board(board);
assert( board287341405 != NULL );
assert( strcmp(board287341405, 
".....2...\n"
".........\n"
".5.8.....\n"
"..6.53.45\n"
"...51....\n"
"6.......3\n"
".........\n"
".4.442335\n"
"..236.3.7\n"
".1.4237..\n"
"1.824....\n"
"..52.....\n"
".....1.7.\n"
"...6...47\n"
"21..1.312\n") == 0);
free(board287341405);
board287341405 = NULL;
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );


char* board848893891 = gamma_board(board);
assert( board848893891 != NULL );
assert( strcmp(board848893891, 
"...7.2...\n"
".........\n"
".5.8.....\n"
"..6.53.45\n"
"...51....\n"
"6.......3\n"
".........\n"
".4.442335\n"
"..236.3.7\n"
".1.4237..\n"
"1.8243...\n"
"..52.....\n"
".....1.7.\n"
"...6...47\n"
"21..1.312\n") == 0);
free(board848893891);
board848893891 = NULL;
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );


char* board307247612 = gamma_board(board);
assert( board307247612 != NULL );
assert( strcmp(board307247612, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51....\n"
"6.......3\n"
"...8.....\n"
".4.442335\n"
"..236.3.7\n"
".1.42374.\n"
"1.8243...\n"
"..527.75.\n"
"..6..1.7.\n"
"...6..847\n"
"21..1.312\n") == 0);
free(board307247612);
board307247612 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );


char* board841984342 = gamma_board(board);
assert( board841984342 != NULL );
assert( strcmp(board841984342, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51....\n"
"6.......3\n"
"...8.....\n"
".4.442335\n"
"..236.3.7\n"
"31.42374.\n"
"1.8243...\n"
"..527.75.\n"
"..6..1.7.\n"
"...6..847\n"
"21..1.312\n") == 0);
free(board841984342);
board841984342 = NULL;
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );


char* board197017922 = gamma_board(board);
assert( board197017922 != NULL );
assert( strcmp(board197017922, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51....\n"
"6.......3\n"
"...8...3.\n"
".4.442335\n"
"..23623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
"..6..1.7.\n"
"...6..847\n"
"21..1.312\n") == 0);
free(board197017922);
board197017922 = NULL;
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );


char* board973065343 = gamma_board(board);
assert( board973065343 != NULL );
assert( strcmp(board973065343, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51...3\n"
"6....8..3\n"
".4.888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
"..6..1.7.\n"
"...6..847\n"
"21..1.312\n") == 0);
free(board973065343);
board973065343 = NULL;
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_golden_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board941503459 = gamma_board(board);
assert( board941503459 != NULL );
assert( strcmp(board941503459, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"64.888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board941503459);
board941503459 = NULL;
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_golden_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );


char* board403097266 = gamma_board(board);
assert( board403097266 != NULL );
assert( strcmp(board403097266, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"64.888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board403097266);
board403097266 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_free_fields(board, 6) == 17 );


char* board497703949 = gamma_board(board);
assert( board497703949 != NULL );
assert( strcmp(board497703949, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"64.888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board497703949);
board497703949 = NULL;
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );


char* board267550726 = gamma_board(board);
assert( board267550726 != NULL );
assert( strcmp(board267550726, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"64.888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board267550726);
board267550726 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );


char* board747168814 = gamma_board(board);
assert( board747168814 != NULL );
assert( strcmp(board747168814, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"644888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board747168814);
board747168814 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 14) == 0 );


char* board338003520 = gamma_board(board);
assert( board338003520 != NULL );
assert( strcmp(board338003520, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"644888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"1.8243.6.\n"
"6.527.75.\n"
".66..187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board338003520);
board338003520 = NULL;
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );


char* board991010373 = gamma_board(board);
assert( board991010373 != NULL );
assert( strcmp(board991010373, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"644888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"188243.6.\n"
"6.527.75.\n"
".662.187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board991010373);
board991010373 = NULL;
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );


char* board990015011 = gamma_board(board);
assert( board990015011 != NULL );
assert( strcmp(board990015011, 
"...7.2...\n"
".......8.\n"
".5.8.....\n"
"..6.53.45\n"
"...51.8.3\n"
"6....8..3\n"
"644888.3.\n"
".4.442335\n"
"8223623.7\n"
"31.42374.\n"
"188243.6.\n"
"6.527.75.\n"
".662.187.\n"
"...66.847\n"
"21..1.312\n") == 0);
free(board990015011);
board990015011 = NULL;
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );


gamma_delete(board);

    return 0;
}
