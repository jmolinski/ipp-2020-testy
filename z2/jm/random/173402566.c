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
uuid: 173402566
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 13, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_free_fields(board, 3) == 180 );


char* board810420454 = gamma_board(board);
assert( board810420454 != NULL );
assert( strcmp(board810420454, 
"..............\n"
"..............\n"
"..............\n"
"3.1...........\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board810420454);
board810420454 = NULL;
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 163 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board582600251 = gamma_board(board);
assert( board582600251 != NULL );
assert( strcmp(board582600251, 
"3.............\n"
"......41..453.\n"
".....5.4......\n"
"3.1.55.....5..\n"
"4..1.3.14...2.\n"
"...25.55.3....\n"
"1.3...2.....5.\n"
"4...5..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"....42..5.....\n"
".........1....\n") == 0);
free(board582600251);
board582600251 = NULL;
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );


char* board596408891 = gamma_board(board);
assert( board596408891 != NULL );
assert( strcmp(board596408891, 
"3.............\n"
"......41..453.\n"
".....5.4......\n"
"3.1.55.....5..\n"
"4..1.3.14...2.\n"
"...25.55.3....\n"
"1.3...2.....5.\n"
"4...5..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"....42..5.....\n"
".........1....\n") == 0);
free(board596408891);
board596408891 = NULL;
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board589222032 = gamma_board(board);
assert( board589222032 != NULL );
assert( strcmp(board589222032, 
"3.............\n"
"......41..453.\n"
".....5.4......\n"
"3.1.55.....5..\n"
"4..1.3.14...2.\n"
"...25.55.3....\n"
"1.3...2.....5.\n"
"4...5..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"....42..5.....\n"
".........1....\n") == 0);
free(board589222032);
board589222032 = NULL;
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 25 );


char* board268892328 = gamma_board(board);
assert( board268892328 != NULL );
assert( strcmp(board268892328, 
"3........24...\n"
"......41..453.\n"
".....5.4......\n"
"3.1.55.....5..\n"
"4..1.3.14...2.\n"
"1..25.55.3....\n"
"1.3...2..3..5.\n"
"4..25..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"....42..5.....\n"
".........1....\n") == 0);
free(board268892328);
board268892328 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_golden_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );


char* board730844586 = gamma_board(board);
assert( board730844586 != NULL );
assert( strcmp(board730844586, 
"3........24...\n"
"...2..41..453.\n"
".....5.44.....\n"
"3.1.55.....5..\n"
"4..1.3.14...2.\n"
"1..25.55.3....\n"
"1.3...2..3..5.\n"
"4..25..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"....42..5.....\n"
".........11...\n") == 0);
free(board730844586);
board730844586 = NULL;
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_golden_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_golden_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board839463718 = gamma_board(board);
assert( board839463718 != NULL );
assert( strcmp(board839463718, 
"3........24...\n"
"...2..41..443.\n"
".....5.44.....\n"
"3.1.55.....5..\n"
"4..153.14...2.\n"
"1..25.55.3....\n"
"1.3.5.2..3..5.\n"
"4..25..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4...\n"
"...242..5.1.5.\n"
"...5.....115..\n") == 0);
free(board839463718);
board839463718 = NULL;
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board653987393 = gamma_board(board);
assert( board653987393 != NULL );
assert( strcmp(board653987393, 
"3........24...\n"
"...2..41..443.\n"
".....5.44.....\n"
"3.1.55.....5..\n"
"4..153.14...2.\n"
"1..25.55.3....\n"
"1.3.5.2..3..5.\n"
"4.225..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4.2.\n"
"...242..511.5.\n"
"...5.....115..\n") == 0);
free(board653987393);
board653987393 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_golden_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board432280843 = gamma_board(board);
assert( board432280843 != NULL );
assert( strcmp(board432280843, 
"3.....4..24...\n"
"...2..41..443.\n"
"....55.44...3.\n"
"3.1.55.....55.\n"
"4..153.14...2.\n"
"1..25.55.3....\n"
"1.3.5.2..3..5.\n"
"4.225..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4.2.\n"
"...242..511.5.\n"
"...5.....115..\n") == 0);
free(board432280843);
board432280843 = NULL;
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );


char* board358460383 = gamma_board(board);
assert( board358460383 != NULL );
assert( strcmp(board358460383, 
"3.....4..24...\n"
"...2..41..443.\n"
"....55.44...3.\n"
"3.1.55.....55.\n"
"4..153.14...2.\n"
"1..25.55.3....\n"
"1.355.2..3..5.\n"
"4.225..3.1....\n"
"...2..........\n"
"...2...1....2.\n"
"...2....3.4.2.\n"
"...242..511.5.\n"
"...5.....115..\n") == 0);
free(board358460383);
board358460383 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );


char* board156241640 = gamma_board(board);
assert( board156241640 != NULL );
assert( strcmp(board156241640, 
"3.....4..24...\n"
"...2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"1.355.2..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board156241640);
board156241640 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );


char* board846674453 = gamma_board(board);
assert( board846674453 != NULL );
assert( strcmp(board846674453, 
"3.....4..24...\n"
"...2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"1.355.2..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board846674453);
board846674453 = NULL;
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );


char* board343064145 = gamma_board(board);
assert( board343064145 != NULL );
assert( strcmp(board343064145, 
"3.....4..24...\n"
"...2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"1.355.2..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board343064145);
board343064145 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_golden_move(board, 5, 6, 6) == 1 );


char* board209095934 = gamma_board(board);
assert( board209095934 != NULL );
assert( strcmp(board209095934, 
"3.....4..24...\n"
"...2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"1.355.5..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board209095934);
board209095934 = NULL;
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );


char* board850370880 = gamma_board(board);
assert( board850370880 != NULL );
assert( strcmp(board850370880, 
"3.....4..24...\n"
".2.2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"11355.5..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board850370880);
board850370880 = NULL;
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board958527977 = gamma_board(board);
assert( board958527977 != NULL );
assert( strcmp(board958527977, 
"3.....4..24...\n"
".2.2..414.443.\n"
"....55.44...3.\n"
"3.1.55..4..55.\n"
"4..153.143..2.\n"
"1.325.55.3....\n"
"11355.5..3..5.\n"
"4.225..311....\n"
".4.2..........\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board958527977);
board958527977 = NULL;
assert( gamma_golden_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );


char* board939035336 = gamma_board(board);
assert( board939035336 != NULL );
assert( strcmp(board939035336, 
"3.....4..24...\n"
".2.2..414.443.\n"
".2..55.44...3.\n"
"3.1.55..4..55.\n"
"44.153.143..2.\n"
"14325.55.3....\n"
"11355.5.33..5.\n"
"42225..311....\n"
".4.2...1......\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board939035336);
board939035336 = NULL;
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 3) == 17 );


char* board654743686 = gamma_board(board);
assert( board654743686 != NULL );
assert( strcmp(board654743686, 
"3.....4..24.1.\n"
".2.2..414.443.\n"
".2.555.44..433\n"
"311555..4..55.\n"
"441153.143..2.\n"
"14325.55.3....\n"
"11355.5.33..5.\n"
"42225..311....\n"
".4.2...1......\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board654743686);
board654743686 = NULL;
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );


char* board639482039 = gamma_board(board);
assert( board639482039 != NULL );
assert( strcmp(board639482039, 
"3.....4..24.1.\n"
".2.2..4142443.\n"
".2.555.44..433\n"
"311555..4..55.\n"
"441153.143..2.\n"
"14325.55.3....\n"
"11355.5.33..5.\n"
"42225..311....\n"
".4.2...1......\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board639482039);
board639482039 = NULL;
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );


char* board454070639 = gamma_board(board);
assert( board454070639 != NULL );
assert( strcmp(board454070639, 
"3.....4..24.1.\n"
".2.2..4142443.\n"
".2.555.44..433\n"
"311555..4..55.\n"
"441153.143..2.\n"
"14325.55.3....\n"
"11355.5.33..5.\n"
"42225..311....\n"
".4.2...1......\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board454070639);
board454070639 = NULL;
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 0, 13) == 0 );


char* board179049056 = gamma_board(board);
assert( board179049056 != NULL );
assert( strcmp(board179049056, 
"3.....4..24.1.\n"
".2.2..41424433\n"
".2.555.44..433\n"
"311555..4..55.\n"
"441153.143..2.\n"
"14325.55.3....\n"
"11355.5.33..5.\n"
"42225..311....\n"
".4.2...1......\n"
"...22..1...22.\n"
"...2....3.4.2.\n"
"..2242..511.5.\n"
"..254....115..\n") == 0);
free(board179049056);
board179049056 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


gamma_delete(board);

    return 0;
}
