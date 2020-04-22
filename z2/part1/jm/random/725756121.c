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
uuid: 725756121
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_golden_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );


char* board572344446 = gamma_board(board);
assert( board572344446 != NULL );
assert( strcmp(board572344446, 
"...............\n"
".3.4.1..2......\n"
"....1..........\n"
"2.1......2..1..\n"
".............2.\n"
"3.....42.......\n"
".44............\n") == 0);
free(board572344446);
board572344446 = NULL;
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board279483178 = gamma_board(board);
assert( board279483178 != NULL );
assert( strcmp(board279483178, 
"....1..........\n"
".3.411..2......\n"
"....1..........\n"
"2.1......2..1..\n"
".............2.\n"
"3.....422....4.\n"
"244............\n") == 0);
free(board279483178);
board279483178 = NULL;
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );


char* board193658052 = gamma_board(board);
assert( board193658052 != NULL );
assert( strcmp(board193658052, 
".321113........\n"
".32411.22..1...\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.4....2.\n"
"341.3.422....4.\n"
"2444.3431..2...\n") == 0);
free(board193658052);
board193658052 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );


char* board176096296 = gamma_board(board);
assert( board176096296 != NULL );
assert( strcmp(board176096296, 
".321113........\n"
".32411.22..14..\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.4....2.\n"
"341.3.422....4.\n"
"2444.3431..2...\n") == 0);
free(board176096296);
board176096296 = NULL;
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );


char* board711131813 = gamma_board(board);
assert( board711131813 != NULL );
assert( strcmp(board711131813, 
".321113........\n"
".32411.22..14..\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.4....2.\n"
"341.3.422....44\n"
"2444.3431..2...\n") == 0);
free(board711131813);
board711131813 = NULL;
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );


char* board431681136 = gamma_board(board);
assert( board431681136 != NULL );
assert( strcmp(board431681136, 
".321113........\n"
".32411.22..14..\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.4....2.\n"
"341.3.422....44\n"
"2444.3431..2...\n") == 0);
free(board431681136);
board431681136 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );


char* board796316338 = gamma_board(board);
assert( board796316338 != NULL );
assert( strcmp(board796316338, 
".321113........\n"
".32411.22..144.\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.42...2.\n"
"341.3.422....44\n"
"244443431..2...\n") == 0);
free(board796316338);
board796316338 = NULL;
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 5, 14) == 0 );


char* board983890463 = gamma_board(board);
assert( board983890463 != NULL );
assert( strcmp(board983890463, 
".321113........\n"
".32411.22.1144.\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.42...2.\n"
"341.3.422....44\n"
"244443431..2...\n") == 0);
free(board983890463);
board983890463 = NULL;
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );


char* board869887850 = gamma_board(board);
assert( board869887850 != NULL );
assert( strcmp(board869887850, 
".321113.....4..\n"
".32411.22.1144.\n"
"2.2.11..34.....\n"
"231......2..11.\n"
"1.4.144.42..12.\n"
"34143.422....44\n"
"244443431..2...\n") == 0);
free(board869887850);
board869887850 = NULL;
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_golden_move(board, 3, 2, 6) == 1 );


char* board199926524 = gamma_board(board);
assert( board199926524 != NULL );
assert( strcmp(board199926524, 
".331113....14..\n"
".32411.22.1144.\n"
"2.2.11..34..4..\n"
"231......2..11.\n"
"1.4.144.42..12.\n"
"34143.422....44\n"
"244443431..2...\n") == 0);
free(board199926524);
board199926524 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 18 );


char* board573473270 = gamma_board(board);
assert( board573473270 != NULL );
assert( strcmp(board573473270, 
".331113....14..\n"
".32411.22.1144.\n"
"2.2.11..34..4..\n"
"231......2..11.\n"
"1.4.144.42..12.\n"
"34143.422....44\n"
"244443431..2...\n") == 0);
free(board573473270);
board573473270 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 4, 10) == 0 );


char* board822122417 = gamma_board(board);
assert( board822122417 != NULL );
assert( strcmp(board822122417, 
".331113....14..\n"
".32411.22.1144.\n"
"2.2.11..34..4..\n"
"231......2..11.\n"
"1.4.144.42..12.\n"
"34143.422....44\n"
"244443431..22..\n") == 0);
free(board822122417);
board822122417 = NULL;
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );


char* board661532886 = gamma_board(board);
assert( board661532886 != NULL );
assert( strcmp(board661532886, 
".331113....14..\n"
".32411.22.1144.\n"
"2.2.11..34..4..\n"
"231......2..11.\n"
"1.4.144.42..12.\n"
"34143.422....44\n"
"244443431..22..\n") == 0);
free(board661532886);
board661532886 = NULL;
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 18 );


gamma_delete(board);

    return 0;
}
