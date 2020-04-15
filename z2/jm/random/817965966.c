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
uuid: 817965966
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 12, 8, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_golden_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 154 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_free_fields(board, 8) == 148 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board676387834 = gamma_board(board);
assert( board676387834 != NULL );
assert( strcmp(board676387834, 
"..6........5.\n"
"..2.4...8....\n"
"......3.6....\n"
"...........2.\n"
"...4.........\n"
".....4.....1.\n"
"..7..5.......\n"
"33...........\n"
"............2\n"
"...3....3.41.\n"
"...1.........\n"
".........4...\n") == 0);
free(board676387834);
board676387834 = NULL;
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_golden_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_free_fields(board, 1) == 129 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board248587928 = gamma_board(board);
assert( board248587928 != NULL );
assert( strcmp(board248587928, 
".26........5.\n"
"..2.4...8....\n"
"......376....\n"
"...........23\n"
"...4.........\n"
"....74.....1.\n"
"..7..5.......\n"
"33...........\n"
"...8........2\n"
"...31...3.41.\n"
"...1....6....\n"
".........4...\n") == 0);
free(board248587928);
board248587928 = NULL;
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );


char* board621788307 = gamma_board(board);
assert( board621788307 != NULL );
assert( strcmp(board621788307, 
".26.1...1..5.\n"
"..2.4...8....\n"
".6....376.3..\n"
"...........23\n"
"...4..6....2.\n"
"..4.745....1.\n"
"..7..5....7.5\n"
"33.........4.\n"
"...8........2\n"
"...31...3.41.\n"
"..41....6....\n"
"8.7......4...\n") == 0);
free(board621788307);
board621788307 = NULL;
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_golden_move(board, 8, 1, 8) == 0 );


char* board874852381 = gamma_board(board);
assert( board874852381 != NULL );
assert( strcmp(board874852381, 
".26.1...1..5.\n"
"..2.4...8....\n"
".6....376.3..\n"
"...........23\n"
"...4..6....2.\n"
"..45745....1.\n"
"..7..5....7.5\n"
"33.........4.\n"
"...8........2\n"
"...31...3.41.\n"
"..41....6....\n"
"8.7......4...\n") == 0);
free(board874852381);
board874852381 = NULL;
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 109 );


char* board757755203 = gamma_board(board);
assert( board757755203 != NULL );
assert( strcmp(board757755203, 
".26.1...1..5.\n"
"..2.4...8....\n"
".6....376.3..\n"
".........3.23\n"
"...4..6..1.2.\n"
"..45745....1.\n"
"..7..5....7.5\n"
"33.........4.\n"
"...8........2\n"
"...31...3.41.\n"
"..41....6....\n"
"8.7......4.2.\n") == 0);
free(board757755203);
board757755203 = NULL;
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 9, 11) == 1 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );


char* board759086721 = gamma_board(board);
assert( board759086721 != NULL );
assert( strcmp(board759086721, 
".26.2...1745.\n"
"..2.4.6.8....\n"
".6....37643..\n"
".......1.3.23\n"
"...4.76..1.2.\n"
"..45745....1.\n"
"..7835...4755\n"
"3356.88.2..4.\n"
"...8.......62\n"
"...31...3.41.\n"
"..41....6....\n"
"8.7..5...4.2.\n") == 0);
free(board759086721);
board759086721 = NULL;
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );


char* board257313070 = gamma_board(board);
assert( board257313070 != NULL );
assert( strcmp(board257313070, 
".26.2...1745.\n"
"..2.4.6.8....\n"
".6....37643..\n"
"3....531.3.23\n"
"...4.76..1.2.\n"
"8.45745...61.\n"
".27835...4755\n"
"3356.88.2..4.\n"
"6..8.......62\n"
"...31.1.3.41.\n"
"..41..866...3\n"
"8.7..5...4.2.\n") == 0);
free(board257313070);
board257313070 = NULL;
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 80 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_free_fields(board, 8) == 58 );


char* board629264334 = gamma_board(board);
assert( board629264334 != NULL );
assert( strcmp(board629264334, 
"726625.71745.\n"
"8.2.4.6.8....\n"
"761...37643..\n"
"3.3..531.3.23\n"
"6244.765.122.\n"
"8.45745.6.617\n"
".27835...4755\n"
"3356688521.4.\n"
"6..8....3..62\n"
"..431.1.3.41.\n"
".541..866.4.3\n"
"8.7..5...432.\n") == 0);
free(board629264334);
board629264334 = NULL;
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 12, 9) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );


char* board396566704 = gamma_board(board);
assert( board396566704 != NULL );
assert( strcmp(board396566704, 
"726625.717456\n"
"8.254.6.8....\n"
"761.1.3764377\n"
"3.3..53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"6..8.7..3..62\n"
".5431.1.3.41.\n"
".541..866.4.3\n"
"8.74.5282432.\n") == 0);
free(board396566704);
board396566704 = NULL;
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );


char* board829308529 = gamma_board(board);
assert( board829308529 != NULL );
assert( strcmp(board829308529, 
"726625.717456\n"
"8.254.6.8....\n"
"761.1.3764377\n"
"3.3..53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"6..8.7..3..62\n"
".5431.1.3.41.\n"
"2541..866.4.3\n"
"8.74.5282432.\n") == 0);
free(board829308529);
board829308529 = NULL;
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );


char* board873326639 = gamma_board(board);
assert( board873326639 != NULL );
assert( strcmp(board873326639, 
"726625.717456\n"
"8.254.6.8.7..\n"
"761.1.3764377\n"
"3.3..53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"6..8.7..3..62\n"
".5431.1.3.41.\n"
"2541.1866.4.3\n"
"8374.5282432.\n") == 0);
free(board873326639);
board873326639 = NULL;
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );


char* board735873569 = gamma_board(board);
assert( board735873569 != NULL );
assert( strcmp(board735873569, 
"726625.717456\n"
"8.254.6.8.7..\n"
"761.1.3764377\n"
"3637.53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"68.8.73.32262\n"
"75431.1.3.41.\n"
"254121866.4.3\n"
"8374.5282432.\n") == 0);
free(board735873569);
board735873569 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );


char* board888739553 = gamma_board(board);
assert( board888739553 != NULL );
assert( strcmp(board888739553, 
"726625.717456\n"
"8.254.6.8.7..\n"
"761.1.3764377\n"
"3637.53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"68.8.73.32262\n"
"75431.1.3.41.\n"
"254121866.4.3\n"
"8374.5282432.\n") == 0);
free(board888739553);
board888739553 = NULL;
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board522372992 = gamma_board(board);
assert( board522372992 != NULL );
assert( strcmp(board522372992, 
"726625.717456\n"
"8.25476.8.7..\n"
"761.1.3761377\n"
"3637.53173.23\n"
"62443765.1221\n"
"8.45745.6.617\n"
".278355..4755\n"
"3356688521.4.\n"
"68.8.73.32262\n"
"75431.1.3.41.\n"
"254121866.483\n"
"8374.5282432.\n") == 0);
free(board522372992);
board522372992 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 10, 8) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_free_fields(board, 8) == 26 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );


gamma_delete(board);

    return 0;
}
