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
uuid: 975694174
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );


char* board163057422 = gamma_board(board);
assert( board163057422 != NULL );
assert( strcmp(board163057422, 
".....4...\n"
".........\n"
"......21.\n"
"...132..2\n"
"..1.13...\n"
"31..1....\n"
".....3..4\n"
"1.2...33.\n"
"32....41.\n"
"..3..42.4\n") == 0);
free(board163057422);
board163057422 = NULL;
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board902607751 = gamma_board(board);
assert( board902607751 != NULL );
assert( strcmp(board902607751, 
"...2.4...\n"
".....4..4\n"
"2.....21.\n"
"...132222\n"
"..1.13...\n"
"31..1....\n"
"31...3..4\n"
"1.2.4333.\n"
"32....411\n"
"..3..4244\n") == 0);
free(board902607751);
board902607751 = NULL;
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );


char* board248361725 = gamma_board(board);
assert( board248361725 != NULL );
assert( strcmp(board248361725, 
"...244...\n"
"....34..4\n"
"2..1.2212\n"
"2..132222\n"
"..1.13...\n"
"31.21....\n"
"31...3..4\n"
"1.2.43333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board248361725);
board248361725 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board281097265 = gamma_board(board);
assert( board281097265 != NULL );
assert( strcmp(board281097265, 
"...244...\n"
"....34..4\n"
"2..1.2212\n"
"2..132222\n"
"..1.13...\n"
"31.21....\n"
"31..13.34\n"
"1.2.43333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board281097265);
board281097265 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board208395887 = gamma_board(board);
assert( board208395887 != NULL );
assert( strcmp(board208395887, 
".2.244...\n"
"....34..4\n"
"2.11.2212\n"
"2.1132222\n"
"..1.13.1.\n"
"312211...\n"
"31..13.34\n"
"122443333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board208395887);
board208395887 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );


char* board671244206 = gamma_board(board);
assert( board671244206 != NULL );
assert( strcmp(board671244206, 
".2.244...\n"
"....34..4\n"
"2.11.2212\n"
"2.1132222\n"
"..1.13.1.\n"
"312211...\n"
"31.413.34\n"
"122443333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board671244206);
board671244206 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );


char* board940292609 = gamma_board(board);
assert( board940292609 != NULL );
assert( strcmp(board940292609, 
".2.244...\n"
"....34..4\n"
"2.11.2212\n"
"2.1132222\n"
"..1.13.1.\n"
"312211...\n"
"31.413.34\n"
"122443333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board940292609);
board940292609 = NULL;
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board133635083 = gamma_board(board);
assert( board133635083 != NULL );
assert( strcmp(board133635083, 
".2.244...\n"
"....34..4\n"
"2.11.2212\n"
"211132222\n"
"..1.13.1.\n"
"312211...\n"
"31.413.34\n"
"122443333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board133635083);
board133635083 = NULL;
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_move(board, 3, 8, 8) == 0 );


char* board146165663 = gamma_board(board);
assert( board146165663 != NULL );
assert( strcmp(board146165663, 
".2.244...\n"
"...334..4\n"
"2.11.2212\n"
"211132222\n"
"..1.13.1.\n"
"312211..4\n"
"31.413.34\n"
"122443333\n"
"32...3411\n"
".33..4244\n") == 0);
free(board146165663);
board146165663 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );


gamma_delete(board);

    return 0;
}
