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
uuid: 679448288
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 5, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_free_fields(board, 4) == 220 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 5, 12, 14) == 1 );


char* board780368813 = gamma_board(board);
assert( board780368813 != NULL );
assert( strcmp(board780368813, 
"............5..\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"......1.......4\n"
"...............\n"
"........5..4...\n"
"3...3..........\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"....2...1......\n") == 0);
free(board780368813);
board780368813 = NULL;
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_golden_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_free_fields(board, 5) == 204 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_free_fields(board, 1) == 202 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 199 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );


char* board795356587 = gamma_board(board);
assert( board795356587 != NULL );
assert( strcmp(board795356587, 
"..4.........5..\n"
"....4..5.......\n"
".....5.....2..5\n"
".........1.....\n"
"...............\n"
"......1.2.....4\n"
".............1.\n"
"...1....53.4...\n"
"3...3..........\n"
"........1......\n"
"4..............\n"
"...........4...\n"
"...31.35.......\n"
"...............\n"
"..5.2...1..3...\n") == 0);
free(board795356587);
board795356587 = NULL;
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_free_fields(board, 4) == 189 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );


char* board158923869 = gamma_board(board);
assert( board158923869 != NULL );
assert( strcmp(board158923869, 
"..4.4.....2.5..\n"
"....4..5.......\n"
"....25..1..2.25\n"
".12.....11.....\n"
"..5.......4...4\n"
"...5..1.2.....4\n"
"............21.\n"
"...1..2.53.4...\n"
"3...3..........\n"
"....2.1.1...4..\n"
"45..3.5..4.....\n"
"..........14...\n"
"..531.35.......\n"
"...............\n"
"..5.2...1..3...\n") == 0);
free(board158923869);
board158923869 = NULL;
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );


char* board530969022 = gamma_board(board);
assert( board530969022 != NULL );
assert( strcmp(board530969022, 
"3.4.4.....2.5..\n"
"....4..5.......\n"
"....25..1..2.25\n"
".12.....11.....\n"
"..5.......4...4\n"
"4..5..1.2.....4\n"
"............21.\n"
"...1..2.53.4...\n"
"3...3..........\n"
"....2.1.1...4..\n"
"45..3.5.544....\n"
"..........14...\n"
"..531.35.......\n"
"............2..\n"
"..5.2...1..3...\n") == 0);
free(board530969022);
board530969022 = NULL;
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_free_fields(board, 2) == 163 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );


char* board447036063 = gamma_board(board);
assert( board447036063 != NULL );
assert( strcmp(board447036063, 
"3.4.4.....2.5.2\n"
".3..4..5..5....\n"
"....25.11..2.25\n"
".12..3..11.....\n"
"..5.......4...4\n"
"4..5..1.2.....4\n"
"............21.\n"
"...1..2.53.4...\n"
"3...3..........\n"
"....2.1.1...4..\n"
"45..3.5.544....\n"
"..........14...\n"
"..531.35.......\n"
".......5....2..\n"
"..5.2...1..3...\n") == 0);
free(board447036063);
board447036063 = NULL;
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 12, 12) == 1 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_golden_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_golden_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 141 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );


char* board106602117 = gamma_board(board);
assert( board106602117 != NULL );
assert( strcmp(board106602117, 
"344441....2.5.2\n"
".3..4..5.55423.\n"
"....25311.22325\n"
".12.133.11...3.\n"
"1.5.......4...4\n"
"4..5..1.2.4.5.4\n"
"...1........21.\n"
"...1..2.53.4.33\n"
"3...3........1.\n"
"....2.1.1...4.4\n"
"45..3.5.5442...\n"
".....1..5.14...\n"
"..531.35.......\n"
".......52...2..\n"
".4522...1..3...\n") == 0);
free(board106602117);
board106602117 = NULL;
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );


char* board501595020 = gamma_board(board);
assert( board501595020 != NULL );
assert( strcmp(board501595020, 
"344441....2.5.2\n"
".3..41.5.55423.\n"
"....25311.22325\n"
".12.133.11...3.\n"
"1.5....3..4...4\n"
"4..5..1.2.4.5.4\n"
"...1.......221.\n"
"...1..2.53.4.33\n"
"3...3........11\n"
"....2.1.1...4.4\n"
"45..3.5.5442...\n"
".5...1..5.14...\n"
"..531.35.......\n"
".......52...2..\n"
".4522...1..3...\n") == 0);
free(board501595020);
board501595020 = NULL;
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );


char* board783278692 = gamma_board(board);
assert( board783278692 != NULL );
assert( strcmp(board783278692, 
"344441....2.5.2\n"
".3..41.5155423.\n"
".1..25311.22325\n"
".12.133.11...3.\n"
"1.5....31.4...4\n"
"4..5..1.2.4.5.4\n"
"...1.......221.\n"
"...1..2.53.4.33\n"
"3...3........11\n"
".5..2.1.144.4.4\n"
"45..3.5.5442...\n"
".5..413.5.14...\n"
"..531335.......\n"
".......52...2..\n"
".4522...1..3...\n") == 0);
free(board783278692);
board783278692 = NULL;
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_free_fields(board, 4) == 119 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );


char* board111653384 = gamma_board(board);
assert( board111653384 != NULL );
assert( strcmp(board111653384, 
"344441....2.5.2\n"
".3..41.5155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.4...4\n"
"4..5..1.244.5.4\n"
"...1....5..221.\n"
"...1..2.53.4.33\n"
"3...3........11\n"
".5..2.1.144.4.4\n"
"45..3.5.5442...\n"
".5..413.5.14...\n"
"..531335....4..\n"
".......52...2..\n"
".4522...1..3...\n") == 0);
free(board111653384);
board111653384 = NULL;
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_free_fields(board, 2) == 28 );


char* board485817010 = gamma_board(board);
assert( board485817010 != NULL );
assert( strcmp(board485817010, 
"344441....2.5.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1....5..221.\n"
"...1..2253.4.33\n"
"3...3........11\n"
".5..241.144.4.4\n"
"45..3.5.5442...\n"
".5..413.5.14...\n"
"..531335....4..\n"
".......52...2..\n"
".4522...1..33..\n") == 0);
free(board485817010);
board485817010 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );


char* board531156806 = gamma_board(board);
assert( board531156806 != NULL );
assert( strcmp(board531156806, 
"344441....2.5.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1....5..221.\n"
"...1..2253.4.33\n"
"33..3........11\n"
".5..241.144.4.4\n"
"45..3.5.5442...\n"
".5..413.5.14...\n"
"..531335....4..\n"
".......52...2..\n"
".4522...1..33..\n") == 0);
free(board531156806);
board531156806 = NULL;
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );


char* board851893928 = gamma_board(board);
assert( board851893928 != NULL );
assert( strcmp(board851893928, 
"344441....2.5.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1....5..221.\n"
"...1..2253.4.33\n"
"333.3........11\n"
".5..241.144.4.4\n"
"45..3.5.5442...\n"
".5..413.5.14...\n"
"..531335....4..\n"
".......52...2..\n"
".4522...1..33..\n") == 0);
free(board851893928);
board851893928 = NULL;
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 11, 14) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );


char* board730150988 = gamma_board(board);
assert( board730150988 != NULL );
assert( strcmp(board730150988, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1..1.5..221.\n"
"...1..2253.4.33\n"
"333.3.....4..11\n"
".5..241.144.4.4\n"
"45..3.5.54424..\n"
".5..413.5.14...\n"
"..531335....4..\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board730150988);
board730150988 = NULL;
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );


char* board792119761 = gamma_board(board);
assert( board792119761 != NULL );
assert( strcmp(board792119761, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1..1.5..221.\n"
"3..1..2253.4.33\n"
"333.3.....4..11\n"
".5..241.144.4.4\n"
"45..3.5.54424..\n"
"55..413.5.14...\n"
"..531335....4..\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board792119761);
board792119761 = NULL;
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );


char* board223029966 = gamma_board(board);
assert( board223029966 != NULL );
assert( strcmp(board223029966, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1..1.5..221.\n"
"3..1..2253.4.33\n"
"333.3...1.4..11\n"
".5..241.144.4.4\n"
"45..3.5.54424..\n"
"55..413.5.14...\n"
"..531335....4..\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board223029966);
board223029966 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board404715694 = gamma_board(board);
assert( board404715694 != NULL );
assert( strcmp(board404715694, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1..1.5..221.\n"
"3..1..2253.4.33\n"
"333.3...1.4..11\n"
".5..241.144.4.4\n"
"45..3.5.54424..\n"
"55..413.5.14...\n"
"..531335....4..\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board404715694);
board404715694 = NULL;
assert( gamma_move(board, 2, 5, 13) == 0 );


char* board328993843 = gamma_board(board);
assert( board328993843 != NULL );
assert( strcmp(board328993843, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5....31.44..4\n"
"4..5..1.244.5.4\n"
"...1..1.5..221.\n"
"3..1..2253.4.33\n"
"333.3...1.4..11\n"
".5..241.144.4.4\n"
"45..3.5.54424..\n"
"55..413.5.14...\n"
"..531335....4..\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board328993843);
board328993843 = NULL;
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );


char* board491805895 = gamma_board(board);
assert( board491805895 != NULL );
assert( strcmp(board491805895, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"4..5..1.244.554\n"
"...1..1.532221.\n"
"3..1..225344233\n"
"333.3.1.1.4..11\n"
".5..241.144.4.4\n"
"45..3.55544243.\n"
"55..413.5.14.3.\n"
".5331335....4.5\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board491805895);
board491805895 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );


char* board537566105 = gamma_board(board);
assert( board537566105 != NULL );
assert( strcmp(board537566105, 
"344441....225.2\n"
".3..4155155423.\n"
".11.25311.22325\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"4..5..1.244.554\n"
"...1..1.532221.\n"
"3..1..225344233\n"
"333.3.1.1.4..11\n"
".5..241.144.4.4\n"
"45..3.55544243.\n"
"55..413.5.14.3.\n"
".5331335....4.5\n"
".4.....52...2..\n"
".4522...1..33..\n") == 0);
free(board537566105);
board537566105 = NULL;
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_move(board, 4, 14, 12) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );


char* board326866806 = gamma_board(board);
assert( board326866806 != NULL );
assert( strcmp(board326866806, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"44.5..1.244.554\n"
"..11..1.532221.\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".4....352...2..\n"
".4522...1.133..\n") == 0);
free(board326866806);
board326866806 = NULL;
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board387896073 = gamma_board(board);
assert( board387896073 != NULL );
assert( strcmp(board387896073, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board387896073);
board387896073 = NULL;
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board357669902 = gamma_board(board);
assert( board357669902 != NULL );
assert( strcmp(board357669902, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board357669902);
board357669902 = NULL;
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_golden_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );


char* board216545480 = gamma_board(board);
assert( board216545480 != NULL );
assert( strcmp(board216545480, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.11...3.\n"
"1.5...331.44..4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board216545480);
board216545480 = NULL;
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board512759950 = gamma_board(board);
assert( board512759950 != NULL );
assert( strcmp(board512759950, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.111..3.\n"
"1.5...331.44..4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board512759950);
board512759950 = NULL;
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board557269137 = gamma_board(board);
assert( board557269137 != NULL );
assert( strcmp(board557269137, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.111..33\n"
"1.5...331.444.4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board557269137);
board557269137 = NULL;
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_free_fields(board, 5) == 25 );


char* board362965979 = gamma_board(board);
assert( board362965979 != NULL );
assert( strcmp(board362965979, 
"344441....225.2\n"
".35.41551554234\n"
".11225311.22324\n"
".12.133.111..33\n"
"1.5...331.444.4\n"
"4455..1.244.554\n"
"..11..1.5322213\n"
"34.1..225344233\n"
"333.3.1.1.4.111\n"
"35..24111445444\n"
"45..3.55544243.\n"
"55..413.5414.3.\n"
".5331335....4.5\n"
".43...352...2..\n"
".4522...15133..\n") == 0);
free(board362965979);
board362965979 = NULL;
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


gamma_delete(board);

    return 0;
}
