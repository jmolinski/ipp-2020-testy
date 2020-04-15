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
uuid: 506977698
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 4, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 164 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );


char* board380162171 = gamma_board(board);
assert( board380162171 != NULL );
assert( strcmp(board380162171, 
".....3.2....1..\n"
"4..............\n"
"...2..3........\n"
"......2........\n"
"......3...3....\n"
".....2.........\n"
".....1.........\n"
"4..4...........\n"
"...1....1..3...\n"
".......12......\n"
".......4..1....\n") == 0);
free(board380162171);
board380162171 = NULL;
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 142 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_free_fields(board, 1) == 126 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 126 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board235251940 = gamma_board(board);
assert( board235251940 != NULL );
assert( strcmp(board235251940, 
"2.3.43.23...14.\n"
"4....4.3.......\n"
"...2..3..2..4..\n"
".1..232......4.\n"
".2....3.4.33.1.\n"
"..1.32.14......\n"
"4..441..31.....\n"
"4..4.21..31....\n"
"...1...11.33..1\n"
"...43..12..3.2.\n"
"...3.1.42.1....\n") == 0);
free(board235251940);
board235251940 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 97 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );


char* board242556565 = gamma_board(board);
assert( board242556565 != NULL );
assert( strcmp(board242556565, 
"2.3.43.23...14.\n"
"4....4.3..2....\n"
"...22.33.2..4..\n"
".1..232.....34.\n"
".2....3.4.33.1.\n"
".11.32.14......\n"
"4..441.431.....\n"
"4..4.21..31....\n"
"4..1.2.11.33..1\n"
".2.43..12..3.2.\n"
".2.341.42.1....\n") == 0);
free(board242556565);
board242556565 = NULL;
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );


char* board675780440 = gamma_board(board);
assert( board675780440 != NULL );
assert( strcmp(board675780440, 
"2.3343.23...14.\n"
"4.1..443..2..4.\n"
"...22.33.2..4..\n"
".1.2232.....34.\n"
".2....3.4.33.14\n"
".11.32.14......\n"
"4..441.431.....\n"
"4..4.21..31....\n"
"4.21.2111.332.1\n"
".2.43..12..3.22\n"
".2.341442.1....\n") == 0);
free(board675780440);
board675780440 = NULL;
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );


char* board373121216 = gamma_board(board);
assert( board373121216 != NULL );
assert( strcmp(board373121216, 
"2.3343.23...14.\n"
"4.1..443..2.14.\n"
"...22.3322..44.\n"
".1.223232...34.\n"
".21..23.4.33.14\n"
".11.32.144.....\n"
"4..441.431.....\n"
"4.44.21..314...\n"
"4.2112111.332.1\n"
".2.432.12.33.22\n"
".2.341442.1..2.\n") == 0);
free(board373121216);
board373121216 = NULL;
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board234694369 = gamma_board(board);
assert( board234694369 != NULL );
assert( strcmp(board234694369, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222.33222.44.\n"
".1.223232...34.\n"
".21..23.4.33.14\n"
".11132.144...1.\n"
"4..44144312....\n"
"4444.21.3314...\n"
"442112111.332.1\n"
".2.432.12433.22\n"
".2.341442.1..2.\n") == 0);
free(board234694369);
board234694369 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_golden_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );


char* board828921123 = gamma_board(board);
assert( board828921123 != NULL );
assert( strcmp(board828921123, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222.33222.44.\n"
".1.223232...34.\n"
".21..2334.33.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444.21.3314...\n"
"442112111.332.1\n"
".2.432.12433.22\n"
".2.341442.1..2.\n") == 0);
free(board828921123);
board828921123 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 22 );


char* board549117764 = gamma_board(board);
assert( board549117764 != NULL );
assert( strcmp(board549117764, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222.33222.44.\n"
".1.223232...34.\n"
".21..2334.33.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444321.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1..2.\n") == 0);
free(board549117764);
board549117764 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_golden_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 32 );


char* board371369373 = gamma_board(board);
assert( board371369373 != NULL );
assert( strcmp(board371369373, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222.33222.44.\n"
".1.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444321.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1..2.\n") == 0);
free(board371369373);
board371369373 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board257021942 = gamma_board(board);
assert( board257021942 != NULL );
assert( strcmp(board257021942, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222433222.44.\n"
".1.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444331.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1.22.\n") == 0);
free(board257021942);
board257021942 = NULL;
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );


char* board824972619 = gamma_board(board);
assert( board824972619 != NULL );
assert( strcmp(board824972619, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222433222.44.\n"
".1.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444331.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1.22.\n") == 0);
free(board824972619);
board824972619 = NULL;
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 32 );


char* board770309982 = gamma_board(board);
assert( board770309982 != NULL );
assert( strcmp(board770309982, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222433222.44.\n"
".1.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444331.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1.22.\n") == 0);
free(board770309982);
board770309982 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );


char* board358870764 = gamma_board(board);
assert( board358870764 != NULL );
assert( strcmp(board358870764, 
"2.3343223...144\n"
"4.1..443.224144\n"
"..222433222.44.\n"
".1.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312..1.\n"
"4444331.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1.22.\n") == 0);
free(board358870764);
board358870764 = NULL;
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board351428951 = gamma_board(board);
assert( board351428951 != NULL );
assert( strcmp(board351428951, 
"2.3343223.21144\n"
"4.1..443.224144\n"
"..222433222.44.\n"
".2.223232...34.\n"
".21..2334333.14\n"
".11132.144..31.\n"
"4..44144312.11.\n"
"4444331.3314...\n"
"442112111.332.1\n"
"22.432.12433.22\n"
".2.341442.1.22.\n") == 0);
free(board351428951);
board351428951 = NULL;
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


gamma_delete(board);

    return 0;
}
