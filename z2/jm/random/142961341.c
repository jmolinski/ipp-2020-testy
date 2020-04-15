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
uuid: 142961341
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 10, 5, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );


char* board758062923 = gamma_board(board);
assert( board758062923 != NULL );
assert( strcmp(board758062923, 
".............3.\n"
"...............\n"
"...............\n"
".......4.......\n"
"1..............\n"
"...............\n"
"...............\n"
"5......3.....4.\n"
"...............\n"
"......1........\n") == 0);
free(board758062923);
board758062923 = NULL;
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );


char* board611383473 = gamma_board(board);
assert( board611383473 != NULL );
assert( strcmp(board611383473, 
".............3.\n"
".2.....1......5\n"
"5..............\n"
".......4.......\n"
"1..............\n"
"...............\n"
"...............\n"
"5......3.....4.\n"
"...............\n"
".....21........\n") == 0);
free(board611383473);
board611383473 = NULL;
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_free_fields(board, 5) == 122 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_free_fields(board, 1) == 118 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 110 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );


char* board671373878 = gamma_board(board);
assert( board671373878 != NULL );
assert( strcmp(board671373878, 
"....4........3.\n"
".21.4.41......5\n"
"5..5......1...4\n"
".5....54.......\n"
"14.....45......\n"
".2121..........\n"
".....3.2...3.2.\n"
"5.1....3.....4.\n"
".35..33..4....2\n"
"...3.21.......2\n") == 0);
free(board671373878);
board671373878 = NULL;
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 106 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 0, 0) == 1 );


char* board302620616 = gamma_board(board);
assert( board302620616 != NULL );
assert( strcmp(board302620616, 
"...54........32\n"
".21.4.41.5....5\n"
"5..5......13..4\n"
".5....54.1.....\n"
"14.....45......\n"
".21214.........\n"
".....3.2...3.2.\n"
"5.1....3....54.\n"
".35..33..43...2\n"
"1..3.21..4....2\n") == 0);
free(board302620616);
board302620616 = NULL;
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 98 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );


char* board420723650 = gamma_board(board);
assert( board420723650 != NULL );
assert( strcmp(board420723650, 
"...54....1...32\n"
".21.4.41.52...5\n"
"5..5......13..4\n"
".5....54.1.....\n"
"14..4..45......\n"
".212145........\n"
"...4.3.2...3.2.\n"
"5.1.5..3.4.154.\n"
".35..33..43...2\n"
"1..3.21..4...22\n") == 0);
free(board420723650);
board420723650 = NULL;
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board806115395 = gamma_board(board);
assert( board806115395 != NULL );
assert( strcmp(board806115395, 
"...54....1..332\n"
".21.4.41452...5\n"
"5..5.....113..4\n"
".5....54.1.....\n"
"141.42.454.3...\n"
".212145........\n"
".2.44352.4.3.24\n"
"5.1.5..3.4.154.\n"
"435.2333.43...2\n"
"1..3221..4...22\n") == 0);
free(board806115395);
board806115395 = NULL;
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );


char* board275793579 = gamma_board(board);
assert( board275793579 != NULL );
assert( strcmp(board275793579, 
"..1544...15.332\n"
"221.4.41452...5\n"
"5..5.....1134.4\n"
".53...54.1....5\n"
"141.421454.3...\n"
".21214535......\n"
".2.4435214.3324\n"
"5.125..3.4.154.\n"
"435.2333.43.3.2\n"
"1..3221..4...22\n") == 0);
free(board275793579);
board275793579 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board528215724 = gamma_board(board);
assert( board528215724 != NULL );
assert( strcmp(board528215724, 
"..1544...15.332\n"
"221.4.41452...5\n"
"5..5.....1134.4\n"
".53...54.1....5\n"
"141.421454.3...\n"
".21214535......\n"
".2.4435214.3324\n"
"5.125..3.4.154.\n"
"435.2333.43.3.2\n"
"1..3221..4...22\n") == 0);
free(board528215724);
board528215724 = NULL;
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );


char* board814131283 = gamma_board(board);
assert( board814131283 != NULL );
assert( strcmp(board814131283, 
"..1544...15.332\n"
"221.4.41452...5\n"
"5..5...3.1134.4\n"
".53...54.1....5\n"
"141.421454.3...\n"
".21214535......\n"
".2.4435214.3324\n"
"5.125..3.4.154.\n"
"435.2333.43.3.2\n"
"1..3221..4...22\n") == 0);
free(board814131283);
board814131283 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 9, 1) == 0 );


char* board196623961 = gamma_board(board);
assert( board196623961 != NULL );
assert( strcmp(board196623961, 
"..1544...152332\n"
"221.4.41452...5\n"
"5..5...3.1134.4\n"
".53..354.1....5\n"
"141.421455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.125..3.4.154.\n"
"435.2333.43.3.2\n"
"1..3221..43..22\n") == 0);
free(board196623961);
board196623961 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );


char* board836960536 = gamma_board(board);
assert( board836960536 != NULL );
assert( strcmp(board836960536, 
"..1544...152332\n"
"22114.41452...5\n"
"5..5.4.3.1134.4\n"
".53..354.1....5\n"
"141.421455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.125..3.4.154.\n"
"435.2333.43.3.2\n"
"1..3221..43..22\n") == 0);
free(board836960536);
board836960536 = NULL;
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );


char* board171913663 = gamma_board(board);
assert( board171913663 != NULL );
assert( strcmp(board171913663, 
"..1544...152332\n"
"22114.41452...5\n"
"5..5.4.3.1134.4\n"
".53..354.1....5\n"
"141.421455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.125..3.4.1542\n"
"435.2333.43.3.2\n"
"1..3221..43..22\n") == 0);
free(board171913663);
board171913663 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_golden_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );


char* board199160885 = gamma_board(board);
assert( board199160885 != NULL );
assert( strcmp(board199160885, 
".11544...152332\n"
"22114.41452...5\n"
"5..5.423.1134.4\n"
".53..354.1...55\n"
"1413221455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.1253.334.1542\n"
"435.2333443.3.2\n"
"1..3221..43..22\n") == 0);
free(board199160885);
board199160885 = NULL;
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );


char* board572574146 = gamma_board(board);
assert( board572574146 != NULL );
assert( strcmp(board572574146, 
".11544...152332\n"
"22114.41452...5\n"
"5..5.423.1134.4\n"
".53..354.1...55\n"
"1413221455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.1253.334.1542\n"
"435.2333443.3.2\n"
"1..3221..43..22\n") == 0);
free(board572574146);
board572574146 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board293245893 = gamma_board(board);
assert( board293245893 != NULL );
assert( strcmp(board293245893, 
".11544...152332\n"
"22114.41452...5\n"
"5..5.423.1134.4\n"
".53..354.1...55\n"
"1413221455.3...\n"
".21214535..3...\n"
".2.433521443324\n"
"5.1253.334.1542\n"
"435.2333443.3.2\n"
"1..3221..43..22\n") == 0);
free(board293245893);
board293245893 = NULL;
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );


char* board351866984 = gamma_board(board);
assert( board351866984 != NULL );
assert( strcmp(board351866984, 
".11544..2152332\n"
"22114.41452...5\n"
"5..5.42341134.4\n"
".53..354.1...55\n"
"1413221455.3..1\n"
".21214535..3...\n"
".2.433521443324\n"
"5.1253.334.1542\n"
"435.2333443.3.2\n"
"1..3221..43..22\n") == 0);
free(board351866984);
board351866984 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_free_fields(board, 4) == 36 );


char* board279477897 = gamma_board(board);
assert( board279477897 != NULL );
assert( strcmp(board279477897, 
".11544.22152332\n"
"22114.41452.4.5\n"
"5..5542341134.4\n"
".53..354.1...55\n"
"1413221455.3..1\n"
".21214535..3...\n"
".2.433521443324\n"
"5.1253.33441542\n"
"435.2333443.3.2\n"
"1..3221.343..22\n") == 0);
free(board279477897);
board279477897 = NULL;
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_golden_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 7, 11) == 0 );


gamma_delete(board);

    return 0;
}
