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
uuid: 240454082
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_move(board, 3, 2, 14) == 1 );


char* board806682865 = gamma_board(board);
assert( board806682865 != NULL );
assert( strcmp(board806682865, 
"..3............\n"
"...............\n"
"...............\n"
"...............\n"
"..............2\n"
"...............\n"
"....1..........\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
".......2.......\n"
"...............\n"
"...............\n") == 0);
free(board806682865);
board806682865 = NULL;
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board691620559 = gamma_board(board);
assert( board691620559 != NULL );
assert( strcmp(board691620559, 
"..3............\n"
"..........4....\n"
"...............\n"
"...............\n"
"..............2\n"
"...............\n"
"6...1..........\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
".......2.......\n"
"...............\n"
"...............\n") == 0);
free(board691620559);
board691620559 = NULL;
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 13, 4) == 1 );


char* board182375340 = gamma_board(board);
assert( board182375340 != NULL );
assert( strcmp(board182375340, 
"..3............\n"
"..........4....\n"
"...............\n"
"...4...........\n"
"..............2\n"
"...............\n"
"6...1..........\n"
"...............\n"
"........3......\n"
"...............\n"
".....2.......5.\n"
"...3...........\n"
".......2.......\n"
"...............\n"
"..............2\n") == 0);
free(board182375340);
board182375340 = NULL;
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );


char* board428573154 = gamma_board(board);
assert( board428573154 != NULL );
assert( strcmp(board428573154, 
"..3............\n"
".6........4....\n"
"...............\n"
"...4...........\n"
"..........31..2\n"
"...............\n"
"6...1........2.\n"
"..........2...5\n"
".......53......\n"
".1.......4.....\n"
"...6.2.......5.\n"
"..33.1.........\n"
"....4..2.......\n"
"...3......5....\n"
"..6.4.3..5....2\n") == 0);
free(board428573154);
board428573154 = NULL;
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );


char* board789884895 = gamma_board(board);
assert( board789884895 != NULL );
assert( strcmp(board789884895, 
"..3............\n"
".62.......4....\n"
"...............\n"
"...4...........\n"
"..........31..2\n"
"...............\n"
"6...1........2.\n"
"..........2...5\n"
".......53...6..\n"
".1.3...6.4.....\n"
"...6.2.......5.\n"
"..33.1.........\n"
"....4..2.......\n"
"...3......5....\n"
"..6.4.3..5....2\n") == 0);
free(board789884895);
board789884895 = NULL;
assert( gamma_move(board, 4, 5, 1) == 1 );


char* board800280448 = gamma_board(board);
assert( board800280448 != NULL );
assert( strcmp(board800280448, 
"..3............\n"
".62.......4....\n"
"...............\n"
"...4...........\n"
"..........31..2\n"
"...............\n"
"6...1........2.\n"
"..........2...5\n"
".......53...6..\n"
".1.3...6.4.....\n"
"...6.2.......5.\n"
"..33.1.........\n"
"....4..2.......\n"
"...3.4....5....\n"
"..6.4.3..5....2\n") == 0);
free(board800280448);
board800280448 = NULL;
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 6, 10, 14) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 1, 14, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 14, 13) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );


char* board768811202 = gamma_board(board);
assert( board768811202 != NULL );
assert( strcmp(board768811202, 
"..3.......6....\n"
".62.......4...6\n"
".......5.......\n"
"..34...5.......\n"
"3.......2.31552\n"
"2............2.\n"
"6...1......412.\n"
".........12...5\n"
"..51.6.5332.6..\n"
"41.3...6.4.4.5.\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board768811202);
board768811202 = NULL;
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );


char* board358945810 = gamma_board(board);
assert( board358945810 != NULL );
assert( strcmp(board358945810, 
"..3.......6....\n"
".62.......4...6\n"
".......5.......\n"
"..34...5.......\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
".........12...5\n"
"..51.6.5332.6..\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board358945810);
board358945810 = NULL;
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 14, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );


char* board750911490 = gamma_board(board);
assert( board750911490 != NULL );
assert( strcmp(board750911490, 
"..3.......6...6\n"
".62.......4...6\n"
".......5.......\n"
"..34...5.......\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
".........12...5\n"
"..51.6.5332.6..\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board750911490);
board750911490 = NULL;
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );


char* board851610513 = gamma_board(board);
assert( board851610513 != NULL );
assert( strcmp(board851610513, 
"..3.......6...6\n"
".62.......4...6\n"
".......5.......\n"
"..34...5.......\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
".........12...5\n"
"..51.6.5332.6..\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board851610513);
board851610513 = NULL;
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 0, 5) == 0 );


char* board777999103 = gamma_board(board);
assert( board777999103 != NULL );
assert( strcmp(board777999103, 
"..3.......6...6\n"
".62.......4...6\n"
".......5.......\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
".........12...5\n"
"..51.6.5332.6..\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board777999103);
board777999103 = NULL;
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_golden_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );


char* board167122983 = gamma_board(board);
assert( board167122983 != NULL );
assert( strcmp(board167122983, 
"..3.......6...6\n"
".62.......4...6\n"
".......55......\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.5332.6.5\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"...344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board167122983);
board167122983 = NULL;
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 12) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 10) == 0 );


char* board486349681 = gamma_board(board);
assert( board486349681 != NULL );
assert( strcmp(board486349681, 
"..3.......6...6\n"
".62.......4...6\n"
".......55....5.\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.5332.6.5\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"..6344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board486349681);
board486349681 = NULL;
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );


char* board998983632 = gamma_board(board);
assert( board998983632 != NULL );
assert( strcmp(board998983632, 
"..3.......6...6\n"
".62.......4...6\n"
".......55....5.\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3..2.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.5332.6.5\n"
"41.3...6.4.4455\n"
"..46.25......54\n"
"..33.1.523.....\n"
".4..4..2.3.....\n"
"..6344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board998983632);
board998983632 = NULL;
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_golden_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );


char* board765421434 = gamma_board(board);
assert( board765421434 != NULL );
assert( strcmp(board765421434, 
"..3.......6...6\n"
".62.......4...6\n"
".......55....5.\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3552.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.5332.6.5\n"
"41.3...6.4.4455\n"
"..46.25.....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344...1561.1\n"
"..6.4.3..5....2\n") == 0);
free(board765421434);
board765421434 = NULL;
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );


char* board932724865 = gamma_board(board);
assert( board932724865 != NULL );
assert( strcmp(board932724865, 
"..3.......6...6\n"
".62.......4...6\n"
".......55....5.\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3552.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.5332.6.5\n"
"41.3...6.4.4455\n"
"..46.25.....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344...1561.1\n"
"..644.3..5....2\n") == 0);
free(board932724865);
board932724865 = NULL;
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );


char* board133100900 = gamma_board(board);
assert( board133100900 != NULL );
assert( strcmp(board133100900, 
"..3.......6...6\n"
".62.......4...6\n"
".......55....5.\n"
"..34...5...1...\n"
"3.......2.31552\n"
"2.........3552.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"41.3...6.4.4455\n"
"..46.25.....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344...1561.1\n"
"..644.3..5....2\n") == 0);
free(board133100900);
board133100900 = NULL;
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_golden_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board209261395 = gamma_board(board);
assert( board209261395 != NULL );
assert( strcmp(board209261395, 
"..3.......6...6\n"
".622......4...6\n"
".......55....5.\n"
"..34...5...15..\n"
"3.......2.31552\n"
"2.........3552.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"41.3...6.4.4455\n"
"..46.25.....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344.2.1561.1\n"
"..644.3..5....2\n") == 0);
free(board209261395);
board209261395 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );


char* board869848707 = gamma_board(board);
assert( board869848707 != NULL );
assert( strcmp(board869848707, 
"..33......6...6\n"
".622......4...6\n"
".......55....5.\n"
"..34...5...15..\n"
"3.......2.31552\n"
"2.........3552.\n"
"6...1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"41.3...6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344.2.1561.1\n"
"..644.3..5....2\n") == 0);
free(board869848707);
board869848707 = NULL;
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board966660758 = gamma_board(board);
assert( board966660758 != NULL );
assert( strcmp(board966660758, 
"..33......6...6\n"
".622......4...6\n"
".......55....5.\n"
"..34...5...15..\n"
"3....5..2.31552\n"
"2.........3552.\n"
"66..1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"41.3...6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..6344.2.1561.1\n"
"..644.3..5....2\n") == 0);
free(board966660758);
board966660758 = NULL;
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );


char* board853707422 = gamma_board(board);
assert( board853707422 != NULL );
assert( strcmp(board853707422, 
"..33......6...6\n"
".622......4...6\n"
".......55....5.\n"
"..34...5...15..\n"
"3....5.22.31552\n"
"2.........3552.\n"
"66..1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"41.3...6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4..4..2.3.....\n"
"..634422.1561.1\n"
"..644.3..5....2\n") == 0);
free(board853707422);
board853707422 = NULL;
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );


char* board158958357 = gamma_board(board);
assert( board158958357 != NULL );
assert( strcmp(board158958357, 
"..33......6...6\n"
".622......4...6\n"
".......55....5.\n"
"..34...5...15..\n"
"3....5.22.31552\n"
"2.........3552.\n"
"66..1......412.\n"
"...1.....12...5\n"
"..51.6.533266.5\n"
"4113...6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4.34..2.3.....\n"
"..63442221561.1\n"
"..644.3..5.6..2\n") == 0);
free(board158958357);
board158958357 = NULL;
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_golden_move(board, 5, 14, 14) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );


char* board900247128 = gamma_board(board);
assert( board900247128 != NULL );
assert( strcmp(board900247128, 
"..33......6...6\n"
".622...5..4...6\n"
"3......55....5.\n"
"..34...5...15..\n"
"3...55.22.31552\n"
"2.........3552.\n"
"66..1......412.\n"
"...1.....12...5\n"
"..51.6.53326655\n"
"41133..6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4.34..2.35....\n"
".663442221561.1\n"
"..64433..5.6.22\n") == 0);
free(board900247128);
board900247128 = NULL;
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 0, 11) == 1 );


char* board257296332 = gamma_board(board);
assert( board257296332 != NULL );
assert( strcmp(board257296332, 
"..33......6...6\n"
".622...5..4...6\n"
"3......55....5.\n"
"3.34...5...15..\n"
"3...55.22.31552\n"
"2.........3552.\n"
"66..1......412.\n"
"...1.....12...5\n"
"..51.6.53326655\n"
"41133..6.4.4455\n"
"..46.255....454\n"
"..33.11523.....\n"
".4.34..2.35....\n"
".663442221561.1\n"
"..64433..5.6.22\n") == 0);
free(board257296332);
board257296332 = NULL;
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_golden_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );


gamma_delete(board);

    return 0;
}
