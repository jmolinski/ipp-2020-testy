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
uuid: 984475126
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 5, 6, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 73 );


char* board786759203 = gamma_board(board);
assert( board786759203 != NULL );
assert( strcmp(board786759203, 
"..6.4..........\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board786759203);
board786759203 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );


char* board245250909 = gamma_board(board);
assert( board245250909 != NULL );
assert( strcmp(board245250909, 
".26.4.......2..\n"
"3...51.........\n"
".....2.........\n"
"661..........1.\n"
"1...4.........4\n") == 0);
free(board245250909);
board245250909 = NULL;
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );


char* board881365449 = gamma_board(board);
assert( board881365449 != NULL );
assert( strcmp(board881365449, 
".2624......42..\n"
"455.51..55.....\n"
"6....2.1...1...\n"
"661...1.641.21.\n"
"1..343..4.....4\n") == 0);
free(board881365449);
board881365449 = NULL;
assert( gamma_golden_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board560479035 = gamma_board(board);
assert( board560479035 != NULL );
assert( strcmp(board560479035, 
"42624...5..42..\n"
"455.513.55.....\n"
"6....2.1...1..2\n"
"661...1.641.21.\n"
"1..343..4.....4\n") == 0);
free(board560479035);
board560479035 = NULL;
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_golden_move(board, 3, 1, 6) == 0 );


char* board240911069 = gamma_board(board);
assert( board240911069 != NULL );
assert( strcmp(board240911069, 
"4262446.5..42..\n"
"455.513.55.....\n"
"6....211...11.2\n"
"6616..1.641.21.\n"
"1..343..42..6.4\n") == 0);
free(board240911069);
board240911069 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_golden_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );


char* board586759951 = gamma_board(board);
assert( board586759951 != NULL );
assert( strcmp(board586759951, 
"4262446.5..42..\n"
"455.513.55...1.\n"
"6.5..211...11.2\n"
"6612..1.641.21.\n"
"1..343..42..6.4\n") == 0);
free(board586759951);
board586759951 = NULL;
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );


char* board103635820 = gamma_board(board);
assert( board103635820 != NULL );
assert( strcmp(board103635820, 
"4262446.5.542..\n"
"455.513255..316\n"
"625..211.3.1142\n"
"6662.51.641521.\n"
"1323434.42..6.4\n") == 0);
free(board103635820);
board103635820 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 14, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_free_fields(board, 5) == 14 );


gamma_delete(board);

    return 0;
}
