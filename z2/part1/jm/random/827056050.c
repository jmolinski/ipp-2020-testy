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
uuid: 827056050
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 118 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_free_fields(board, 7) == 88 );


char* board169844094 = gamma_board(board);
assert( board169844094 != NULL );
assert( strcmp(board169844094, 
".6...32.4..\n"
"4...5.74.61\n"
"..5....771.\n"
"...1..52...\n"
".2..3.6....\n"
"..5.......4\n"
"..352.....3\n"
"...1.......\n"
".......5...\n"
"....2.....3\n"
"1...4.3....\n") == 0);
free(board169844094);
board169844094 = NULL;
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_busy_fields(board, 5) == 7 );


char* board150733015 = gamma_board(board);
assert( board150733015 != NULL );
assert( strcmp(board150733015, 
"461..32.4..\n"
"4...5474.61\n"
"..5...1771.\n"
"...1.452..5\n"
".2..3.6....\n"
"3.5....7..4\n"
"..352.....3\n"
"3.21..4....\n"
".7...1157..\n"
"....2....33\n"
"1...4.3....\n") == 0);
free(board150733015);
board150733015 = NULL;
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );


char* board424307422 = gamma_board(board);
assert( board424307422 != NULL );
assert( strcmp(board424307422, 
"461..32.4..\n"
"4...5474.61\n"
"..5..61771.\n"
"...1.452..5\n"
".2..3.6.76.\n"
"325.2..7..4\n"
"..352....63\n"
"3.21.14.6.5\n"
".7...1157..\n"
"....221..33\n"
"1...4.3....\n") == 0);
free(board424307422);
board424307422 = NULL;
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_free_fields(board, 7) == 58 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );


char* board976610025 = gamma_board(board);
assert( board976610025 != NULL );
assert( strcmp(board976610025, 
"461..32.4..\n"
"4...5474.61\n"
"..5..61771.\n"
"...14452..5\n"
".2..3.6.76.\n"
"325.2..7..4\n"
"..352....63\n"
"3.21.14.6.5\n"
".7...1157..\n"
"....221.633\n"
"1...4.3.6..\n") == 0);
free(board976610025);
board976610025 = NULL;
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );


char* board459595947 = gamma_board(board);
assert( board459595947 != NULL );
assert( strcmp(board459595947, 
"461..32.4.7\n"
"4.5.5474.61\n"
"..55.61711.\n"
"...14452..5\n"
".2..3.6276.\n"
"325.2277..4\n"
".2352.4..63\n"
"3.21.14.6.5\n"
".7...1157..\n"
"...72216633\n"
"1...4.3.6..\n") == 0);
free(board459595947);
board459595947 = NULL;
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );


char* board742801518 = gamma_board(board);
assert( board742801518 != NULL );
assert( strcmp(board742801518, 
"461..32.4.7\n"
"4.5.5474.61\n"
"..55.61711.\n"
"1..14452..5\n"
".2.23.62765\n"
"325.2277..4\n"
".2352.44.63\n"
"3.21114.665\n"
".7...1157..\n"
"...72216633\n"
"1...4.3.6..\n") == 0);
free(board742801518);
board742801518 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board170350939 = gamma_board(board);
assert( board170350939 != NULL );
assert( strcmp(board170350939, 
"461..32.467\n"
"4.5.5474.61\n"
"..55661711.\n"
"1..14452..5\n"
".2.23.62765\n"
"325.2277..4\n"
".2352.44.63\n"
"3.21114.665\n"
"37...1157..\n"
".6.72216633\n"
"1...4.3.6..\n") == 0);
free(board170350939);
board170350939 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_golden_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 12 );


char* board741302702 = gamma_board(board);
assert( board741302702 != NULL );
assert( strcmp(board741302702, 
"461..32.467\n"
"4.5.5474.61\n"
"..55661711.\n"
"1..14452..5\n"
".2.23.62765\n"
"325.2277..4\n"
".2352.44.63\n"
"3.21114.665\n"
"372..1157..\n"
".6.72216633\n"
"1...4.3.6..\n") == 0);
free(board741302702);
board741302702 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );


char* board188800679 = gamma_board(board);
assert( board188800679 != NULL );
assert( strcmp(board188800679, 
"461..32.467\n"
"4.5.5474461\n"
"2555661711.\n"
"1..14452..5\n"
".2.23.62765\n"
"325.22777.4\n"
".2352.44.63\n"
"3.21114.665\n"
"372..1157.3\n"
".6.72216633\n"
"1.7.4.3.6..\n") == 0);
free(board188800679);
board188800679 = NULL;
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
