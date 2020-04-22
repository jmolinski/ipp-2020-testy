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
uuid: 626675222
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 13, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_free_fields(board, 3) == 178 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 2) == 174 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_free_fields(board, 5) == 168 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_free_fields(board, 5) == 160 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );


char* board433947648 = gamma_board(board);
assert( board433947648 != NULL );
assert( strcmp(board433947648, 
"..............\n"
"........33..14\n"
"..4..53.4.5...\n"
"..4...........\n"
"..............\n"
"..............\n"
".1.........1..\n"
"......2.....1.\n"
".........3....\n"
".4.5..........\n"
"...4.3.....1..\n"
"4.3...........\n"
".1....1.......\n") == 0);
free(board433947648);
board433947648 = NULL;
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board994763649 = gamma_board(board);
assert( board994763649 != NULL );
assert( strcmp(board994763649, 
"5...5.........\n"
"........33..14\n"
".24..53.4.5...\n"
"..4...........\n"
"..............\n"
"..53.......1..\n"
".1.........1..\n"
"......2.....1.\n"
"......3..3....\n"
".4.5..........\n"
"...4.32....1..\n"
"4.3...4.......\n"
".1....1....2..\n") == 0);
free(board994763649);
board994763649 = NULL;
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board909559114 = gamma_board(board);
assert( board909559114 != NULL );
assert( strcmp(board909559114, 
"5...5.........\n"
"........33..14\n"
".24..5354.5...\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
"......22....1.\n"
"......3..3....\n"
".4.5..3..2....\n"
"...4.32....1..\n"
"4.3...4....1..\n"
".13...1....2..\n") == 0);
free(board909559114);
board909559114 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board449294130 = gamma_board(board);
assert( board449294130 != NULL );
assert( strcmp(board449294130, 
"5...5.........\n"
"........33..14\n"
".24..5354.5...\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
"......22....1.\n"
".....33..3....\n"
".4.5..3..2....\n"
"...4.32....1..\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board449294130);
board449294130 = NULL;
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_free_fields(board, 2) == 22 );


char* board880957905 = gamma_board(board);
assert( board880957905 != NULL );
assert( strcmp(board880957905, 
"5...5.........\n"
"........33..14\n"
"224..5354.5...\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
"......22....1.\n"
"...5.33..3....\n"
".4.5..3..2....\n"
"...4.32....1..\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board880957905);
board880957905 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board814332134 = gamma_board(board);
assert( board814332134 != NULL );
assert( strcmp(board814332134, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
".1....22....1.\n"
"...5.33..3....\n"
".4.5..3..2....\n"
"..34.32....1..\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board814332134);
board814332134 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board120981534 = gamma_board(board);
assert( board120981534 != NULL );
assert( strcmp(board120981534, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
".1....22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...1..\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board120981534);
board120981534 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board534955166 = gamma_board(board);
assert( board534955166 != NULL );
assert( strcmp(board534955166, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
".1....22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board534955166);
board534955166 = NULL;
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );


char* board598869043 = gamma_board(board);
assert( board598869043 != NULL );
assert( strcmp(board598869043, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board598869043);
board598869043 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board735107102 = gamma_board(board);
assert( board735107102 != NULL );
assert( strcmp(board735107102, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
"..53.......1..\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board735107102);
board735107102 = NULL;
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );


char* board999884327 = gamma_board(board);
assert( board999884327 != NULL );
assert( strcmp(board999884327, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board999884327);
board999884327 = NULL;
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );


char* board801431426 = gamma_board(board);
assert( board801431426 != NULL );
assert( strcmp(board801431426, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board801431426);
board801431426 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board228734501 = gamma_board(board);
assert( board228734501 != NULL );
assert( strcmp(board228734501, 
"5..55.........\n"
"........33..14\n"
"224..5354.5.1.\n"
"..4....2......\n"
"..............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.3....\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"4.3...4....1..\n"
".13...11...2..\n") == 0);
free(board228734501);
board228734501 = NULL;
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board663678974 = gamma_board(board);
assert( board663678974 != NULL );
assert( strcmp(board663678974, 
"55.55.........\n"
"........33.114\n"
"224..5354.5.14\n"
"..4....2....1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.33...\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board663678974);
board663678974 = NULL;


char* board332645990 = gamma_board(board);
assert( board332645990 != NULL );
assert( strcmp(board332645990, 
"55.55.........\n"
"........33.114\n"
"224..5354.5.14\n"
"..4....2....1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.33...\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board332645990);
board332645990 = NULL;
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board619062511 = gamma_board(board);
assert( board619062511 != NULL );
assert( strcmp(board619062511, 
"55.55.........\n"
"........33.114\n"
"224..5354.5.14\n"
"..4....2....1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
"...5.333.33...\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board619062511);
board619062511 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );


char* board179562249 = gamma_board(board);
assert( board179562249 != NULL );
assert( strcmp(board179562249, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..4..5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..2....\n"
"..34.322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board179562249);
board179562249 = NULL;
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );


char* board893028839 = gamma_board(board);
assert( board893028839 != NULL );
assert( strcmp(board893028839, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..4..5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board893028839);
board893028839 = NULL;
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );


char* board265550623 = gamma_board(board);
assert( board265550623 != NULL );
assert( strcmp(board265550623, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..4..5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board265550623);
board265550623 = NULL;
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );


char* board643523404 = gamma_board(board);
assert( board643523404 != NULL );
assert( strcmp(board643523404, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..4..5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board643523404);
board643523404 = NULL;
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_free_fields(board, 1) == 29 );


char* board843820054 = gamma_board(board);
assert( board843820054 != NULL );
assert( strcmp(board843820054, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..4..5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board843820054);
board843820054 = NULL;
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );


char* board966796958 = gamma_board(board);
assert( board966796958 != NULL );
assert( strcmp(board966796958, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..44.5.22...1.\n"
".5............\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board966796958);
board966796958 = NULL;
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );


char* board323429239 = gamma_board(board);
assert( board323429239 != NULL );
assert( strcmp(board323429239, 
"55.55....3....\n"
"........33.114\n"
"224..5354.5.14\n"
"..44.5.22...1.\n"
".5.....2......\n"
".553.......11.\n"
".1.......2.1..\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5..3..22...\n"
"..343322...11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board323429239);
board323429239 = NULL;
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 17 );


char* board398312596 = gamma_board(board);
assert( board398312596 != NULL );
assert( strcmp(board398312596, 
"55.55...33....\n"
"........33.114\n"
"224..535435.14\n"
"2.44.5.22...1.\n"
".5...5.2......\n"
".553.......11.\n"
".1.......2.11.\n"
".11...22....1.\n"
".4.5.333.33...\n"
".4.5.33..22...\n"
"..3433221..11.\n"
"433...4....1..\n"
"413...11..22..\n") == 0);
free(board398312596);
board398312596 = NULL;
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
