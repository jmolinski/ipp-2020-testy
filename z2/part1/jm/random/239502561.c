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
uuid: 239502561
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 8, 5, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 1) == 111 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_free_fields(board, 5) == 108 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 101 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board365157481 = gamma_board(board);
assert( board365157481 != NULL );
assert( strcmp(board365157481, 
"..4..32...3...\n"
"415....3......\n"
".1.........4..\n"
".......2......\n"
"...1.2.....4..\n"
"....5.........\n"
"52.....3......\n"
".3..51........\n") == 0);
free(board365157481);
board365157481 = NULL;
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );


char* board173247688 = gamma_board(board);
assert( board173247688 != NULL );
assert( strcmp(board173247688, 
"..4..32...3...\n"
"415....34.....\n"
".1.........4..\n"
".......2.....2\n"
"..51.2.....4..\n"
"....5.........\n"
"522....3......\n"
".3.551....2.5.\n") == 0);
free(board173247688);
board173247688 = NULL;
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );


char* board663682056 = gamma_board(board);
assert( board663682056 != NULL );
assert( strcmp(board663682056, 
"..4.332..43...\n"
"415..1.34.....\n"
".14.1......43.\n"
".......24.1..2\n"
"..51.2.....43.\n"
"....5.........\n"
"52252..34.....\n"
".3.551....2.53\n") == 0);
free(board663682056);
board663682056 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 0, 7) == 0 );


char* board355736839 = gamma_board(board);
assert( board355736839 != NULL );
assert( strcmp(board355736839, 
"2.4.3354.43.4.\n"
"4151.123452.21\n"
".14215....4431\n"
".55...32431..2\n"
"..51.2.5...435\n"
"....5....5....\n"
"52252..34.3...\n"
"232551....2.53\n") == 0);
free(board355736839);
board355736839 = NULL;
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 1 );


char* board979618163 = gamma_board(board);
assert( board979618163 != NULL );
assert( strcmp(board979618163, 
"2.4.3354.43.4.\n"
"4151.123452.21\n"
".14215....4431\n"
".55...32431..2\n"
"..51.2.5...435\n"
"..4.5....5....\n"
"52252..34.3..4\n"
"232551....2.53\n") == 0);
free(board979618163);
board979618163 = NULL;
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );


char* board574899825 = gamma_board(board);
assert( board574899825 != NULL );
assert( strcmp(board574899825, 
"2.4.3354.43.4.\n"
"4151.123452.21\n"
".14215...14431\n"
".55...32431..2\n"
"..51.2.5...435\n"
".5435....5...2\n"
"52252..34.3..4\n"
"232551....2.53\n") == 0);
free(board574899825);
board574899825 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 40 );


char* board837547548 = gamma_board(board);
assert( board837547548 != NULL );
assert( strcmp(board837547548, 
"2.4.3354.43.4.\n"
"4151.123452.21\n"
".14215...14431\n"
".552..32431..2\n"
"..51.2.5...435\n"
".5435....5..12\n"
"52252..34.3..4\n"
"232551....2.53\n") == 0);
free(board837547548);
board837547548 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );


char* board464338432 = gamma_board(board);
assert( board464338432 != NULL );
assert( strcmp(board464338432, 
"234.3354.43.43\n"
"4151.123452.21\n"
"514215...14431\n"
".5524.32431..2\n"
".451.2.5...435\n"
".5435....5..12\n"
"52252..34.3..4\n"
"232551..2.2.53\n") == 0);
free(board464338432);
board464338432 = NULL;
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


char* board555291710 = gamma_board(board);
assert( board555291710 != NULL );
assert( strcmp(board555291710, 
"234.3354.43.43\n"
"4151.123452.21\n"
"514215...14431\n"
".1524.32431..2\n"
".451.2.5...435\n"
".5435....5..12\n"
"52252..34533.4\n"
"232551..2.2.53\n") == 0);
free(board555291710);
board555291710 = NULL;
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );


char* board912620136 = gamma_board(board);
assert( board912620136 != NULL );
assert( strcmp(board912620136, 
"234.3354.43.43\n"
"4151.123452.21\n"
"514215...14431\n"
".1524.32431..2\n"
".45132.5...435\n"
".5435....54.12\n"
"52252..34533.4\n"
"232551..2.2.53\n") == 0);
free(board912620136);
board912620136 = NULL;
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_golden_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 25 );


char* board821413171 = gamma_board(board);
assert( board821413171 != NULL );
assert( strcmp(board821413171, 
"234.3354.43.43\n"
"4151.123452321\n"
"514215.5.14431\n"
".1524.32431.12\n"
".45132.5...435\n"
".54355...54.12\n"
"522524.34533.4\n"
"232551..2.2.53\n") == 0);
free(board821413171);
board821413171 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_golden_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );


gamma_delete(board);

    return 0;
}
