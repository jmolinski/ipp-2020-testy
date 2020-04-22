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
uuid: 875691956
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 12, 6, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 118 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );


char* board535893023 = gamma_board(board);
assert( board535893023 != NULL );
assert( strcmp(board535893023, 
"......3....\n"
"..1...5.45.\n"
"...........\n"
"63......6..\n"
"...6..2....\n"
".......246.\n"
".3......23.\n"
".........1.\n"
"21.........\n"
"...........\n"
"...........\n"
".54.5......\n") == 0);
free(board535893023);
board535893023 = NULL;
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_golden_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board763053510 = gamma_board(board);
assert( board763053510 != NULL );
assert( strcmp(board763053510, 
"..5...3..2.\n"
"..1.2.2245.\n"
".2.1.1..44.\n"
"635.64..6..\n"
"53.643266..\n"
".3.5.532465\n"
"331...4.233\n"
"3...1...51.\n"
"21...26.2.5\n"
"2.3.2.2..6.\n"
"..1...64.6.\n"
"454.5.3...1\n") == 0);
free(board763053510);
board763053510 = NULL;
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );


char* board323614753 = gamma_board(board);
assert( board323614753 != NULL );
assert( strcmp(board323614753, 
"..5...3..2.\n"
"..1.232245.\n"
".2.1.1..44.\n"
"635.64.46..\n"
"53.643266..\n"
".3.5.532465\n"
"331...4.233\n"
"3...1...51.\n"
"21...26.2.5\n"
"2.3.2.2..6.\n"
"..15..64.6.\n"
"454.5.3..61\n") == 0);
free(board323614753);
board323614753 = NULL;
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board449909729 = gamma_board(board);
assert( board449909729 != NULL );
assert( strcmp(board449909729, 
"..5...3..2.\n"
".31.232245.\n"
".2.1.1..44.\n"
"635.44.465.\n"
"5326432666.\n"
".3.5.532465\n"
"331...4.233\n"
"3...1...51.\n"
"216.2262215\n"
"2.33262..6.\n"
"..154.3446.\n"
"45435.3.461\n") == 0);
free(board449909729);
board449909729 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );


char* board506473489 = gamma_board(board);
assert( board506473489 != NULL );
assert( strcmp(board506473489, 
"..513.3..2.\n"
".31.232245.\n"
".2.1.1..44.\n"
"635544.465.\n"
"5326432666.\n"
".325.532465\n"
"331...4.233\n"
"3...1.6.51.\n"
"216.2262215\n"
"2433262..6.\n"
".1154.3446.\n"
"45415.3.461\n") == 0);
free(board506473489);
board506473489 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 35 );


char* board984623072 = gamma_board(board);
assert( board984623072 != NULL );
assert( strcmp(board984623072, 
"..513.3.52.\n"
"131.232245.\n"
"12.1.1..44.\n"
"635544.465.\n"
"5326432666.\n"
".325.532465\n"
"331...4.233\n"
"3...1.6.51.\n"
"216.2262215\n"
"2433262..6.\n"
"51154.3446.\n"
"45415.3.461\n") == 0);
free(board984623072);
board984623072 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );


char* board298678300 = gamma_board(board);
assert( board298678300 != NULL );
assert( strcmp(board298678300, 
".2513.3.52.\n"
"131.232245.\n"
"12.1.1..44.\n"
"6355444465.\n"
"5326432666.\n"
".325.532465\n"
"331..54.233\n"
"3...126.51.\n"
"21652262215\n"
"2433262526.\n"
"51154.3446.\n"
"4541553.461\n") == 0);
free(board298678300);
board298678300 = NULL;
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_golden_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_golden_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );


char* board165715701 = gamma_board(board);
assert( board165715701 != NULL );
assert( strcmp(board165715701, 
".2513.3.521\n"
"13162322452\n"
"12.121..44.\n"
"63554444655\n"
"5326432666.\n"
"1325.532465\n"
"331..54.233\n"
"3..5126151.\n"
"21652262215\n"
"2433262526.\n"
"51154.34466\n"
"45415532461\n") == 0);
free(board165715701);
board165715701 = NULL;
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
