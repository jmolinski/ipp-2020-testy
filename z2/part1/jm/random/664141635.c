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
uuid: 664141635
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 5, 5, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board941825237 = gamma_board(board);
assert( board941825237 != NULL );
assert( strcmp(board941825237, 
".......2.\n"
".........\n"
".14......\n"
".........\n"
".........\n") == 0);
free(board941825237);
board941825237 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 6) == 0 );


char* board199279188 = gamma_board(board);
assert( board199279188 != NULL );
assert( strcmp(board199279188, 
".5.....2.\n"
"...1.....\n"
".14......\n"
".........\n"
".........\n") == 0);
free(board199279188);
board199279188 = NULL;
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board491197272 = gamma_board(board);
assert( board491197272 != NULL );
assert( strcmp(board491197272, 
"15..4..2.\n"
"...13...4\n"
".14......\n"
".........\n"
"3........\n") == 0);
free(board491197272);
board491197272 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );


char* board402584984 = gamma_board(board);
assert( board402584984 != NULL );
assert( strcmp(board402584984, 
"15..2..25\n"
"...13...4\n"
"114......\n"
".......3.\n"
"3........\n") == 0);
free(board402584984);
board402584984 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );


char* board420743357 = gamma_board(board);
assert( board420743357 != NULL );
assert( strcmp(board420743357, 
"15352.425\n"
"..3131..4\n"
"1141.....\n"
"..432..3.\n"
"3..4.....\n") == 0);
free(board420743357);
board420743357 = NULL;
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );


char* board294095984 = gamma_board(board);
assert( board294095984 != NULL );
assert( strcmp(board294095984, 
"153524425\n"
"2.3131..4\n"
"1141.....\n"
".5432..33\n"
"3..4.....\n") == 0);
free(board294095984);
board294095984 = NULL;
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


char* board528606128 = gamma_board(board);
assert( board528606128 != NULL );
assert( strcmp(board528606128, 
"153514425\n"
"243131..4\n"
"1141..211\n"
"55432..33\n"
"31.43..5.\n") == 0);
free(board528606128);
board528606128 = NULL;
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );


char* board908904058 = gamma_board(board);
assert( board908904058 != NULL );
assert( strcmp(board908904058, 
"153514425\n"
"243131..4\n"
"1141..211\n"
"55432..33\n"
"31.43..5.\n") == 0);
free(board908904058);
board908904058 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board644580075 = gamma_board(board);
assert( board644580075 != NULL );
assert( strcmp(board644580075, 
"153514425\n"
"243131..4\n"
"1141..211\n"
"55432..33\n"
"31.43..5.\n") == 0);
free(board644580075);
board644580075 = NULL;
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );


gamma_delete(board);

    return 0;
}
