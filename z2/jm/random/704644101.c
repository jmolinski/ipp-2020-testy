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
uuid: 704644101
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 4, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );


char* board823480712 = gamma_board(board);
assert( board823480712 != NULL );
assert( strcmp(board823480712, 
"....1...\n"
"31......\n"
"........\n"
"...2.2..\n"
"........\n"
"....4...\n"
".......4\n"
"...4....\n"
"...1....\n"
"..41....\n"
".3...32.\n") == 0);
free(board823480712);
board823480712 = NULL;
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board400370205 = gamma_board(board);
assert( board400370205 != NULL );
assert( strcmp(board400370205, 
"....1...\n"
"31......\n"
"........\n"
"...2.2..\n"
".......3\n"
"....4...\n"
".......4\n"
"...4..3.\n"
"...1....\n"
"..41....\n"
".3...32.\n") == 0);
free(board400370205);
board400370205 = NULL;
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board408917899 = gamma_board(board);
assert( board408917899 != NULL );
assert( strcmp(board408917899, 
"....12..\n"
"31......\n"
"........\n"
"...2.2..\n"
".2.13..3\n"
"....4...\n"
"4.31...4\n"
"...4..3.\n"
"...1....\n"
"..41....\n"
"23...323\n") == 0);
free(board408917899);
board408917899 = NULL;
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );


char* board216735304 = gamma_board(board);
assert( board216735304 != NULL );
assert( strcmp(board216735304, 
"2...12..\n"
"31......\n"
"......4.\n"
".442.2..\n"
".2.132.3\n"
"....4.1.\n"
"4.31...4\n"
"...4.13.\n"
"...1....\n"
".441....\n"
"23.3.323\n") == 0);
free(board216735304);
board216735304 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );


char* board376940139 = gamma_board(board);
assert( board376940139 != NULL );
assert( strcmp(board376940139, 
"2...12..\n"
"31......\n"
"......4.\n"
".442.2..\n"
".2.132.3\n"
"....4.1.\n"
"4.31...4\n"
"...4.13.\n"
"..41....\n"
".441....\n"
"23.3.323\n") == 0);
free(board376940139);
board376940139 = NULL;
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 39 );


char* board310665722 = gamma_board(board);
assert( board310665722 != NULL );
assert( strcmp(board310665722, 
"2..312.3\n"
"314.....\n"
".2.2.44.\n"
".442.2.4\n"
".2.132.3\n"
".1..434.\n"
"4.314..4\n"
"...4.131\n"
"4341..1.\n"
".441....\n"
"23.3.323\n") == 0);
free(board310665722);
board310665722 = NULL;
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board700435354 = gamma_board(board);
assert( board700435354 != NULL );
assert( strcmp(board700435354, 
"2..312.3\n"
"314.....\n"
".2.2.44.\n"
".442.2.4\n"
".2.132.3\n"
".1..434.\n"
"4.314..4\n"
"...4.131\n"
"4341..1.\n"
"1441....\n"
"23.3.323\n") == 0);
free(board700435354);
board700435354 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );


char* board992742606 = gamma_board(board);
assert( board992742606 != NULL );
assert( strcmp(board992742606, 
"2..312.3\n"
"314.....\n"
".2.2.44.\n"
".442.2.4\n"
".2.132.3\n"
".1..434.\n"
"4.314..4\n"
"...4.131\n"
"4341.11.\n"
"1441....\n"
"23.3.323\n") == 0);
free(board992742606);
board992742606 = NULL;
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );


char* board729773896 = gamma_board(board);
assert( board729773896 != NULL );
assert( strcmp(board729773896, 
"2.1312.3\n"
"314.....\n"
".212.44.\n"
".442.2.4\n"
".2.13213\n"
".1..434.\n"
"44314..4\n"
"...4.131\n"
"4341.11.\n"
"14413...\n"
"23.3.323\n") == 0);
free(board729773896);
board729773896 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );


char* board779389207 = gamma_board(board);
assert( board779389207 != NULL );
assert( strcmp(board779389207, 
"2.1312.3\n"
"314....3\n"
"2212444.\n"
"2442.2.4\n"
".2.13213\n"
".1..434.\n"
"44314..4\n"
"...4.131\n"
"4341.11.\n"
"14413..1\n"
"23.3.323\n") == 0);
free(board779389207);
board779389207 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 24 );


char* board938179719 = gamma_board(board);
assert( board938179719 != NULL );
assert( strcmp(board938179719, 
"2.1312.3\n"
"314....3\n"
"2212444.\n"
"2442.2.4\n"
".2.13213\n"
".1..4342\n"
"44314..4\n"
"4..4.131\n"
"4341.111\n"
"14413..2\n"
"23.3.323\n") == 0);
free(board938179719);
board938179719 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board182784893 = gamma_board(board);
assert( board182784893 != NULL );
assert( strcmp(board182784893, 
"2.1312.3\n"
"314....3\n"
"2212444.\n"
"244232.4\n"
".2.13213\n"
".1..4342\n"
"44314..4\n"
"4..4.131\n"
"43411111\n"
"14413..2\n"
"23.3.323\n") == 0);
free(board182784893);
board182784893 = NULL;
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
