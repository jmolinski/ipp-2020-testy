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
uuid: 521275721
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 14, 5, 35);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_move(board, 5, 15, 11) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 246 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_free_fields(board, 2) == 242 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );


char* board246122340 = gamma_board(board);
assert( board246122340 != NULL );
assert( strcmp(board246122340, 
".1...2....4........\n"
".4.2.........4.....\n"
"1.......3......5...\n"
"..........2........\n"
"...................\n"
"...............1...\n"
"..25...............\n"
".....1.23.5........\n"
"4...4...2....5.....\n"
"...............4...\n"
"2........3.........\n"
"..1..............3.\n"
"...44......3.......\n"
"...................\n") == 0);
free(board246122340);
board246122340 = NULL;
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 231 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 8, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 17, 10) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 15, 9) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 12, 17) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 17, 4) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 1, 16, 11) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 4, 18, 1) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_free_fields(board, 3) == 200 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, 8, 18) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_golden_move(board, 3, 12, 1) == 0 );


char* board297719951 = gamma_board(board);
assert( board297719951 != NULL );
assert( strcmp(board297719951, 
".1...2...24........\n"
".4.2...4.....4.....\n"
"1..5....3..23..51..\n"
"...2..2.4.24.....4.\n"
"..1.......5.3..3...\n"
"4.......5......1...\n"
"..25.3.............\n"
"..5..1.23.51.1.....\n"
"4.354...2...15.....\n"
"...2....2......4.3.\n"
"2...4.3.43.5.4.....\n"
"4.13.........1...3.\n"
"...44...11.3......4\n"
"..........1.2......\n") == 0);
free(board297719951);
board297719951 = NULL;
assert( gamma_move(board, 4, 16, 12) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 2, 18, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_free_fields(board, 5) == 192 );
assert( gamma_move(board, 1, 0, 4) == 1 );


char* board861449824 = gamma_board(board);
assert( board861449824 != NULL );
assert( strcmp(board861449824, 
".1...2...24........\n"
".4.2...4.....4..4..\n"
"1..5..4.3..23..51..\n"
"...2..2.4.24.....4.\n"
"..1.......5.3..3..2\n"
"4.......5......1...\n"
"..25.3.............\n"
"..5..1.23.51.1...5.\n"
"4.354...2...15.....\n"
"1..2....2....2.4.3.\n"
"2...4.3.43.5.4.....\n"
"4.13.........1...3.\n"
"...44...11.3......4\n"
"..........1.2......\n") == 0);
free(board861449824);
board861449824 = NULL;
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );


char* board802500160 = gamma_board(board);
assert( board802500160 != NULL );
assert( strcmp(board802500160, 
".1...2...24........\n"
".4.2...4.....4..45.\n"
"1.35.24.3..23..51..\n"
"...2..2.4.24.....4.\n"
"..1.......5.3..3..2\n"
"4.1.....5......1...\n"
"..25.3.............\n"
"..5..1.23.51.1...5.\n"
"4.3544..2...15.....\n"
"1..2...42...12.4.3.\n"
"2...4.3.43.5.4.....\n"
"4.13........31...3.\n"
"...44...11.3......4\n"
"....2.....1.2......\n") == 0);
free(board802500160);
board802500160 = NULL;
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 15, 2) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 9, 16) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 5, 14, 12) == 1 );


char* board239627768 = gamma_board(board);
assert( board239627768 != NULL );
assert( strcmp(board239627768, 
".1...2...24........\n"
".4.2...4.....45.45.\n"
"1.35.24.3..23..51..\n"
"...2..2.4.24.....4.\n"
"..1.......5.3..3..2\n"
"4.1.....5......1...\n"
".525.3.............\n"
"..5..1.23.51.1...5.\n"
"4.3544..2...15.....\n"
"1..2...42...12.4.3.\n"
"2...4.3.43.5.4.....\n"
"4.13..3.....31.5.3.\n"
"...44...11.3......4\n"
"....2.....1.2......\n") == 0);
free(board239627768);
board239627768 = NULL;
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 17, 8) == 1 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 12, 12) == 1 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 3, 13, 15) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 4, 18, 8) == 1 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 1, 9, 17) == 0 );
assert( gamma_free_fields(board, 1) == 169 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 2, 18) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 2) == 169 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 17, 13) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 1, 18, 5) == 1 );
assert( gamma_move(board, 2, 18, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_free_fields(board, 4) == 157 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 1, 13, 16) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 16, 13) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );


char* board732672969 = gamma_board(board);
assert( board732672969 != NULL );
assert( strcmp(board732672969, 
".1...2.2.24.....34.\n"
".4.2..24....545.45.\n"
"1.35.24.3.523..51..\n"
"...2..2.4.245....4.\n"
"..1.......543..3..2\n"
"4.1.1..554...1.1.24\n"
".525.3...1.5.......\n"
"..55.1.23.5151...5.\n"
"4.3544..2.5.15....1\n"
"1.12..242.5.12.4.3.\n"
"2...4.3.43.5.4....2\n"
"4.13..3....431.5.3.\n"
"...44..211.3......4\n"
"..3.2.....1.2......\n") == 0);
free(board732672969);
board732672969 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 13, 13) == 1 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 150 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 5, 17, 0) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_free_fields(board, 2) == 146 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 145 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 12) == 1 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 17, 0) == 0 );
assert( gamma_free_fields(board, 5) == 140 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 17, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );


char* board753392826 = gamma_board(board);
assert( board753392826 != NULL );
assert( strcmp(board753392826, 
".1.1.2.2.24..5..34.\n"
".4.24.24....545.452\n"
"1.35.2433.523..51..\n"
"...2..2.4.245....4.\n"
".41..1....543..3..2\n"
"4.1.1..554.2.1.1.24\n"
"5525.3..2125.......\n"
"..55.1.2355151...5.\n"
"4.3544..2.5.15...51\n"
"1.125.242.5.12.4.3.\n"
"2..14.3343.534....2\n"
"4.13..3....43125.3.\n"
"..444..211.3......4\n"
"..3.2...1.1.2....5.\n") == 0);
free(board753392826);
board753392826 = NULL;
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_free_fields(board, 4) == 129 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_free_fields(board, 5) == 128 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 13, 18) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_free_fields(board, 2) == 125 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 5, 10, 18) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 1, 15, 0) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_free_fields(board, 5) == 117 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 16, 9) == 1 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_free_fields(board, 3) == 112 );
assert( gamma_move(board, 4, 16, 5) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_free_fields(board, 1) == 109 );


char* board885678748 = gamma_board(board);
assert( board885678748 != NULL );
assert( strcmp(board885678748, 
"11.1.2.2.24.25..34.\n"
".4.24.24....545.452\n"
"1.35524335523..51..\n"
".3.2..2.4.245....43\n"
".41..1....543..3332\n"
"4.1.14.554.2.141.24\n"
"5525.3..2125.......\n"
".555.1.2355151...5.\n"
"413544..2.5.151.451\n"
"1.125.24215.12.4.3.\n"
"2..14.3343.534....2\n"
"4.13..3...543125.3.\n"
".4444..211.3.5....4\n"
"..3.2.2.1.1.24.1.5.\n") == 0);
free(board885678748);
board885678748 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_move(board, 2, 12, 17) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 15, 1) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 16) == 0 );
assert( gamma_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 3) == 107 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 107 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 15, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_golden_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 18, 7) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 17) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 18, 2) == 1 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 18, 13) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 1, 16, 4) == 1 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_golden_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 12, 15) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 15, 2) == 0 );


char* board129989583 = gamma_board(board);
assert( board129989583 != NULL );
assert( strcmp(board129989583, 
"11.1.2.2.24325..345\n"
".4424.24.3..545.452\n"
"1235524335523..51..\n"
"33.251214.245....43\n"
".41551.13.543..3332\n"
"4.1214.554.24141.24\n"
"5525.3..21252.....2\n"
".555.1.2355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2.314.3343.534.1..2\n"
"4.13..34..543125.32\n"
".4444..211.3.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board129989583);
board129989583 = NULL;
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 18, 10) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_move(board, 5, 18, 13) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 38 );
assert( gamma_golden_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );


char* board206853873 = gamma_board(board);
assert( board206853873 != NULL );
assert( strcmp(board206853873, 
"11.1.2.2.24325..345\n"
".4424.24.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245....43\n"
".41551.13.543..3332\n"
"4.1214.554.24141.24\n"
"552513.221252.....2\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"21314.3343.534.1..2\n"
"4.13..34..543125.32\n"
".4444.221123.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board206853873);
board206853873 = NULL;
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 3, 4, 18) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );


char* board198145646 = gamma_board(board);
assert( board198145646 != NULL );
assert( strcmp(board198145646, 
"11.1.2.2.24325..345\n"
".4424.24.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2..43\n"
"541551113.543..3332\n"
"4.1214.554.24141.24\n"
"552513.221252.....2\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"21314.3343.53431..2\n"
"4.13..34..543125.32\n"
".4444.221123.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board198145646);
board198145646 = NULL;
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );


char* board927480009 = gamma_board(board);
assert( board927480009 != NULL );
assert( strcmp(board927480009, 
"11.1.222.24325..345\n"
".4424.24.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2..43\n"
"5415511133543..3332\n"
"4.1214.554124141.24\n"
"552513.221252.....2\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"21314.3343.53431..2\n"
"4.13..34..543125.32\n"
".4444.221123.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board927480009);
board927480009 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 3, 16, 7) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 5, 11, 17) == 0 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 18, 9) == 0 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_golden_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 16, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board616576273 = gamma_board(board);
assert( board616576273 != NULL );
assert( strcmp(board616576273, 
"5121.222.24325..345\n"
".4424.24.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"4.1214.554124141.24\n"
"552513.2232522..3.2\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"21314.3343.53431..2\n"
"4.13..34..543125.32\n"
"44444.221123.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board616576273);
board616576273 = NULL;
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 1, 17, 7) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 5, 11, 17) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 36 );


char* board863201993 = gamma_board(board);
assert( board863201993 != NULL );
assert( strcmp(board863201993, 
"5121.222.24325..345\n"
".4424224.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"4.1214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2131453343.53431..2\n"
"4.13..34..543125.32\n"
"44444.221123.5.4..4\n"
".23.2.2.151224.1.5.\n") == 0);
free(board863201993);
board863201993 = NULL;
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 4, 18, 0) == 1 );


char* board445208121 = gamma_board(board);
assert( board445208121 != NULL );
assert( strcmp(board445208121, 
"5121.222.243254.345\n"
".4424224.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"4.1214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2131453343.53431..2\n"
"4.13..34..543125.32\n"
"44444.221123.5.4..4\n"
".23.2.2.151224.1.54\n") == 0);
free(board445208121);
board445208121 = NULL;
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 40 );


char* board802005379 = gamma_board(board);
assert( board802005379 != NULL );
assert( strcmp(board802005379, 
"5121.222.243254.345\n"
".4424224.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"421214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2131453343.53431..2\n"
"4.13..34..543125.32\n"
"444443221123.5.4..4\n"
".23.2.24151224.1.54\n") == 0);
free(board802005379);
board802005379 = NULL;
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );


char* board343422323 = gamma_board(board);
assert( board343422323 != NULL );
assert( strcmp(board343422323, 
"5121.222.243254.345\n"
".4424224.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"421214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2131453343.53431..2\n"
"4.13..34..543125.32\n"
"444443221123.5.4..4\n"
".23.2.24151224.1.54\n") == 0);
free(board343422323);
board343422323 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 15) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 18, 13) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );


char* board297742193 = gamma_board(board);
assert( board297742193 != NULL );
assert( strcmp(board297742193, 
"5121.222.243254.345\n"
"34424224.3.1545.452\n"
"12355243355233.51..\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"421214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151...5.\n"
"413544.42.53151.451\n"
"1.125.24215512.413.\n"
"2131453343.53431..2\n"
"4.13..34..543125.32\n"
"444443221123.5.4..4\n"
".2332.24151224.1.54\n") == 0);
free(board297742193);
board297742193 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 16, 6) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 17, 11) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 1, 4, 18) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );


char* board900702996 = gamma_board(board);
assert( board900702996 != NULL );
assert( strcmp(board900702996, 
"5121.222.243254.345\n"
"34424224.3.1545.452\n"
"12355243355233.511.\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"421214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151..35.\n"
"413544.42.531513451\n"
"1.125.24215512.413.\n"
"1131453343.53431..2\n"
"4213..34..543125.32\n"
"444443221123.5.4..4\n"
"12332.24151224.1.54\n") == 0);
free(board900702996);
board900702996 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 16, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board689275918 = gamma_board(board);
assert( board689275918 != NULL );
assert( strcmp(board689275918, 
"5121.222.243254.345\n"
"34424224.3.1545.452\n"
"12355243355233.511.\n"
"332251214.245.2.443\n"
"5415511133543..3332\n"
"421214.554124141.24\n"
"552513.2232522..312\n"
".555.152355151..35.\n"
"413544.42.531513451\n"
"1.125.24215512.413.\n"
"1131453343.53431..2\n"
"4213..34..543125432\n"
"444443221123.5.4..4\n"
"12332.24151224.1.54\n") == 0);
free(board689275918);
board689275918 = NULL;
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );


gamma_delete(board);

    return 0;
}
