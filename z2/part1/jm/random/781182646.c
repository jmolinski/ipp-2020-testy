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
uuid: 781182646
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );


char* board535739529 = gamma_board(board);
assert( board535739529 != NULL );
assert( strcmp(board535739529, 
"..........\n"
"..5.......\n"
".1.7...3..\n"
"8.2.......\n"
"..........\n"
".35.1..2..\n"
".....3..6.\n"
"..........\n"
".1...8....\n"
"...781....\n"
".........3\n") == 0);
free(board535739529);
board535739529 = NULL;
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );


char* board443386745 = gamma_board(board);
assert( board443386745 != NULL );
assert( strcmp(board443386745, 
"..........\n"
"..5.......\n"
".1.7...3..\n"
"8.2.......\n"
".........3\n"
".35.14.2..\n"
".....3..6.\n"
"..........\n"
".1...8....\n"
"...781....\n"
".........3\n") == 0);
free(board443386745);
board443386745 = NULL;
assert( gamma_move(board, 5, 3, 9) == 1 );


char* board703312120 = gamma_board(board);
assert( board703312120 != NULL );
assert( strcmp(board703312120, 
"..........\n"
"..55......\n"
".1.7...3..\n"
"8.2.......\n"
".........3\n"
".35.14.2..\n"
".....3..6.\n"
"..........\n"
".1...8....\n"
"...781....\n"
".........3\n") == 0);
free(board703312120);
board703312120 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


char* board290839918 = gamma_board(board);
assert( board290839918 != NULL );
assert( strcmp(board290839918, 
"...7......\n"
"..55......\n"
".1.7...3..\n"
"8.2......8\n"
"......4..3\n"
".35.14.2..\n"
"...773..6.\n"
"6..1......\n"
".1...82..5\n"
"...7816.5.\n"
".86...6..3\n") == 0);
free(board290839918);
board290839918 = NULL;
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 10 );


char* board535381393 = gamma_board(board);
assert( board535381393 != NULL );
assert( strcmp(board535381393, 
"...7......\n"
"..555...4.\n"
".1.7...3..\n"
"8.2...62.8\n"
".2....4.73\n"
"335.11.2..\n"
"...773..6.\n"
"6..1......\n"
"11..582..5\n"
".8.7816.5.\n"
".86...6..3\n") == 0);
free(board535381393);
board535381393 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );


char* board206497984 = gamma_board(board);
assert( board206497984 != NULL );
assert( strcmp(board206497984, 
"...7......\n"
"..555...4.\n"
".1.7...3..\n"
"8.2...62.8\n"
".2....4.73\n"
"335.11.2..\n"
"...773..6.\n"
"6..1......\n"
"11..582..5\n"
".8.7816.5.\n"
".86...6..3\n") == 0);
free(board206497984);
board206497984 = NULL;
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 8 );


char* board460882124 = gamma_board(board);
assert( board460882124 != NULL );
assert( strcmp(board460882124, 
"..77......\n"
".1555..44.\n"
".157...34.\n"
"8.22..62.8\n"
".2....4.73\n"
"335.11.22.\n"
"...773..6.\n"
"64.1......\n"
"111.582..5\n"
".817816.5.\n"
"486...6.53\n") == 0);
free(board460882124);
board460882124 = NULL;
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );


char* board800655674 = gamma_board(board);
assert( board800655674 != NULL );
assert( strcmp(board800655674, 
".177......\n"
".15555.44.\n"
".157...344\n"
"84222.6288\n"
".2..1.4.73\n"
"335111.22.\n"
"...773..6.\n"
"64.1......\n"
"111.582..5\n"
".817816.5.\n"
"486...6.53\n") == 0);
free(board800655674);
board800655674 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );


char* board912527567 = gamma_board(board);
assert( board912527567 != NULL );
assert( strcmp(board912527567, 
".177......\n"
".15555.44.\n"
".157...344\n"
"84222.6288\n"
".2..1.4.73\n"
"335111.22.\n"
"3..773..6.\n"
"64.1......\n"
"111.582..5\n"
"4817816.5.\n"
"486...6.53\n") == 0);
free(board912527567);
board912527567 = NULL;
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );


gamma_delete(board);

    return 0;
}
