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
uuid: 896783382
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 6, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 166 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 165 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );


char* board822718540 = gamma_board(board);
assert( board822718540 != NULL );
assert( strcmp(board822718540, 
"5.............\n"
"..............\n"
".............4\n"
"....3.6.......\n"
"..............\n"
"..............\n"
"..............\n"
"..........1...\n"
".........2....\n"
"..............\n"
".......2.2....\n"
"..............\n") == 0);
free(board822718540);
board822718540 = NULL;
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );


char* board137359179 = gamma_board(board);
assert( board137359179 != NULL );
assert( strcmp(board137359179, 
"5.............\n"
"..........5...\n"
".............4\n"
"....3.6.......\n"
"..............\n"
"..............\n"
"..............\n"
"..........1...\n"
".3.......2....\n"
"..............\n"
".......2.2....\n"
"..............\n") == 0);
free(board137359179);
board137359179 = NULL;
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_free_fields(board, 2) == 156 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_free_fields(board, 5) == 145 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 144 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_move(board, 3, 9, 13) == 0 );


char* board577695917 = gamma_board(board);
assert( board577695917 != NULL );
assert( strcmp(board577695917, 
"55..........5.\n"
"1....5....5.34\n"
"1.........2.54\n"
"....3.6...3...\n"
"....6........2\n"
".64.........3.\n"
"......46......\n"
"....2.....15..\n"
".3..2....2.6..\n"
".....2....3..1\n"
".......2.2....\n"
"....2...4.....\n") == 0);
free(board577695917);
board577695917 = NULL;
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_free_fields(board, 1) == 130 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_free_fields(board, 1) == 123 );


char* board325902059 = gamma_board(board);
assert( board325902059 != NULL );
assert( strcmp(board325902059, 
"55..........5.\n"
"16.5.5....5.34\n"
"1......4..2.54\n"
"2...3.6...3...\n"
"....6........2\n"
".64.........3.\n"
".2...646..5...\n"
"....2.....15..\n"
".3..2....2.63.\n"
".....2....3..1\n"
".......2.2....\n"
"....2...4.1...\n") == 0);
free(board325902059);
board325902059 = NULL;
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_free_fields(board, 3) == 122 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 11, 9) == 1 );


char* board242162541 = gamma_board(board);
assert( board242162541 != NULL );
assert( strcmp(board242162541, 
"555..3...4..5.\n"
"16.5.5....5.34\n"
"1......4..2154\n"
"2.5.3.6.613...\n"
"..366..2.....2\n"
".64.......2.3.\n"
"52...646..5...\n"
".1..26....15..\n"
"33..2....2.63.\n"
".....2....3..1\n"
"......62.2....\n"
"....2..24.15..\n") == 0);
free(board242162541);
board242162541 = NULL;
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 1, 10, 7) == 1 );


char* board942434726 = gamma_board(board);
assert( board942434726 != NULL );
assert( strcmp(board942434726, 
"555..3...4..5.\n"
"1645.5....5.34\n"
"1......4..2154\n"
"2.5.3.6.613...\n"
"..366..2..1..2\n"
".64.5..2..2.3.\n"
"52...646..5...\n"
".1..26....15..\n"
"33..2....2.63.\n"
".....2....3..1\n"
"......62.2....\n"
"....2..24.15.6\n") == 0);
free(board942434726);
board942434726 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );


char* board699252164 = gamma_board(board);
assert( board699252164 != NULL );
assert( strcmp(board699252164, 
"555..3...5..51\n"
"164515..2.5.34\n"
"115....4..2154\n"
"2.563.6.613...\n"
"..366.42.61.32\n"
".64.5..2..2.3.\n"
"52...646..51..\n"
".1..262...15..\n"
"33232....2.63.\n"
"..2.626...3..1\n"
"5.3..16262.5..\n"
"....23.24.15.6\n") == 0);
free(board699252164);
board699252164 = NULL;
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board871906779 = gamma_board(board);
assert( board871906779 != NULL );
assert( strcmp(board871906779, 
"555..3...5..51\n"
"164515..2.5.34\n"
"1154...4..2154\n"
"2.563.61613...\n"
"..366542.61.32\n"
"464.5..2..2.3.\n"
"52...646..51..\n"
".1..262...15..\n"
"33232....2.63.\n"
"3.2.626...3..1\n"
"533..16262.5..\n"
"....23.24.15.6\n") == 0);
free(board871906779);
board871906779 = NULL;
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );


char* board618647099 = gamma_board(board);
assert( board618647099 != NULL );
assert( strcmp(board618647099, 
"555..3...5..51\n"
"164515..2.5.34\n"
"1154.6.4..2154\n"
"2.563.616133..\n"
"..366542.61132\n"
"464.5.32..2.3.\n"
"524..6463.51..\n"
".11.262...15.1\n"
"33232..4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5..\n"
"6...23.24.15.6\n") == 0);
free(board618647099);
board618647099 = NULL;
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );


char* board947320367 = gamma_board(board);
assert( board947320367 != NULL );
assert( strcmp(board947320367, 
"5553.3...5..51\n"
"164515..2.5.34\n"
"1154.6.4..2154\n"
"2.563.616133..\n"
".4366542.61132\n"
"464.5.32..2.3.\n"
"524..6463.51..\n"
".11.262..215.1\n"
"33232..4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5..\n"
"6...23.24.15.6\n") == 0);
free(board947320367);
board947320367 = NULL;
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 10, 11) == 0 );


char* board801348427 = gamma_board(board);
assert( board801348427 != NULL );
assert( strcmp(board801348427, 
"5553.3...5..51\n"
"164515..2.5.34\n"
"1154.6.4..2154\n"
"2.563.616133..\n"
".4366542.61132\n"
"464.5.32..2.3.\n"
"524..6463.51..\n"
".11.262..215.1\n"
"33232..4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5..\n"
"6...23.24.15.6\n") == 0);
free(board801348427);
board801348427 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );


char* board331603917 = gamma_board(board);
assert( board331603917 != NULL );
assert( strcmp(board331603917, 
"5553.3...5..51\n"
"164515.42.5.34\n"
"1154.6.4..2154\n"
"2.563.616133..\n"
".4366542.61132\n"
"464.5.32..2.3.\n"
"524..6463.51..\n"
".11.262..215.1\n"
"332324.4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5..\n"
"6...23.24.15.6\n") == 0);
free(board331603917);
board331603917 = NULL;
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );


char* board511395417 = gamma_board(board);
assert( board511395417 != NULL );
assert( strcmp(board511395417, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5.32..2.3.\n"
"524.56463.51..\n"
".11.262..215.1\n"
"332324.4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board511395417);
board511395417 = NULL;
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 10) == 0 );


char* board722520314 = gamma_board(board);
assert( board722520314 != NULL );
assert( strcmp(board722520314, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5.32..2.3.\n"
"524.56463.51..\n"
".11.262..215.1\n"
"332324.4.2.63.\n"
"3.2.626...33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board722520314);
board722520314 = NULL;
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board605501801 = gamma_board(board);
assert( board605501801 != NULL );
assert( strcmp(board605501801, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5332..223.\n"
"524.56463.51..\n"
".11.262..215.1\n"
"332324.4.2663.\n"
"3.2.626...33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board605501801);
board605501801 = NULL;
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );


char* board493526576 = gamma_board(board);
assert( board493526576 != NULL );
assert( strcmp(board493526576, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5332..223.\n"
"524.56463251.4\n"
".11.262..215.1\n"
"33232464.2663.\n"
"3.2.626...33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board493526576);
board493526576 = NULL;
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 13 );


char* board398747258 = gamma_board(board);
assert( board398747258 != NULL );
assert( strcmp(board398747258, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5332..223.\n"
"524.56463251.4\n"
".11.262..215.1\n"
"33232464.2663.\n"
"3.2.626...33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board398747258);
board398747258 = NULL;
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );


char* board589564495 = gamma_board(board);
assert( board589564495 != NULL );
assert( strcmp(board589564495, 
"5553.3.4.5.451\n"
"164515.42.5434\n"
"1154.6.4.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5332..223.\n"
"524.56463251.4\n"
"311.262..215.1\n"
"33232464.2663.\n"
"3.2.6262..33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board589564495);
board589564495 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board506277632 = gamma_board(board);
assert( board506277632 != NULL );
assert( strcmp(board506277632, 
"555333.4.5.451\n"
"164515.42.5434\n"
"1154.644.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"464.5332..223.\n"
"524.56463251.4\n"
"311.262..215.1\n"
"33232464.2663.\n"
"3.2.6262..33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board506277632);
board506277632 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );


char* board775748007 = gamma_board(board);
assert( board775748007 != NULL );
assert( strcmp(board775748007, 
"555333.4.5.451\n"
"164515.42.5434\n"
"1154.644.22154\n"
"2.5635616133..\n"
".4366542.61132\n"
"46455332.4223.\n"
"524.56463251.4\n"
"311.262..215.1\n"
"33232464.2663.\n"
"3.2.6262..33.1\n"
"5331.16262.5.1\n"
"6...23.24.15.6\n") == 0);
free(board775748007);
board775748007 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 10 );


gamma_delete(board);

    return 0;
}
