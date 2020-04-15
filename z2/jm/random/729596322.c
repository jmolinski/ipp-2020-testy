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
uuid: 729596322
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 19, 6, 35);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_free_fields(board, 2) == 227 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 8, 15) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_free_fields(board, 6) == 221 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_free_fields(board, 4) == 217 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );
assert( gamma_free_fields(board, 5) == 211 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 2, 7, 17) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 205 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_free_fields(board, 4) == 200 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 193 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 8, 18) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_free_fields(board, 6) == 183 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );


char* board937195262 = gamma_board(board);
assert( board937195262 != NULL );
assert( strcmp(board937195262, 
"........4...\n"
".4.....2.4..\n"
"............\n"
"........4...\n"
"....5.15....\n"
"............\n"
"5...........\n"
"...616......\n"
"..4...5...55\n"
"56...3....4.\n"
".45...3.2...\n"
"...53...421.\n"
"............\n"
"4.....1.....\n"
".......6..2.\n"
"...3..3.1.4.\n"
"5...3343....\n"
"..26.4.5..12\n"
"2..45..6....\n") == 0);
free(board937195262);
board937195262 = NULL;
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 1, 9, 17) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 174 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 0, 17) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 11, 16) == 1 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 1, 1, 18) == 1 );


char* board947320264 = gamma_board(board);
assert( board947320264 != NULL );
assert( strcmp(board947320264, 
".1......4...\n"
"64.....2.4..\n"
"...........1\n"
"........4...\n"
"....5.15....\n"
"....5.......\n"
"5...........\n"
"...616......\n"
"..4...5.4.55\n"
"56...3..244.\n"
"345..53.2...\n"
"...53...421.\n"
"............\n"
"4.....1.....\n"
".......6..2.\n"
"..13..3.1.4.\n"
"5...3343...3\n"
"3526.4.5..12\n"
"2..45..6....\n") == 0);
free(board947320264);
board947320264 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );


char* board611505493 = gamma_board(board);
assert( board611505493 != NULL );
assert( strcmp(board611505493, 
".1......4...\n"
"64.....2.4..\n"
"...........1\n"
"........4...\n"
"....5.15....\n"
"....5.......\n"
"5...........\n"
"...616......\n"
"..4...5.4.55\n"
"56...3..244.\n"
"345..53.2...\n"
"...53...421.\n"
"............\n"
"4.....1.....\n"
"......26..2.\n"
"..13..3.1.4.\n"
"5...3343...3\n"
"3526.4.5..12\n"
"2..45..6....\n") == 0);
free(board611505493);
board611505493 = NULL;
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 15, 0) == 0 );


char* board982008207 = gamma_board(board);
assert( board982008207 != NULL );
assert( strcmp(board982008207, 
".1......4...\n"
"64.....2.4..\n"
"...........1\n"
"........4...\n"
"....5.15....\n"
"....5.......\n"
"5...........\n"
"...616......\n"
"..4...5.4.55\n"
"56...3..244.\n"
"345..53.2...\n"
"...53...421.\n"
"............\n"
"4.....1.....\n"
"......26..2.\n"
"..13..3.1.4.\n"
"54..3343...3\n"
"3526.4.5..12\n"
"2..45..6....\n") == 0);
free(board982008207);
board982008207 = NULL;
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );


char* board290438246 = gamma_board(board);
assert( board290438246 != NULL );
assert( strcmp(board290438246, 
".1......4...\n"
"64.....2.4..\n"
"..2........1\n"
"........4...\n"
"....5.15....\n"
"....5.......\n"
"5...........\n"
"...616......\n"
"..4...5.4.55\n"
"56...3..244.\n"
"345..53.2...\n"
"...53...421.\n"
"............\n"
"4.....1...2.\n"
"......26..2.\n"
"..13..3.1.4.\n"
"54..3343...3\n"
"3526.4.5..12\n"
"2..45..6....\n") == 0);
free(board290438246);
board290438246 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 3, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 18, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 18) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 8, 16) == 1 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board505423144 = gamma_board(board);
assert( board505423144 != NULL );
assert( strcmp(board505423144, 
".1......4...\n"
"64.....2.4..\n"
"..2.....6..1\n"
"........4...\n"
"...55.15....\n"
"....5.......\n"
"5.....1.3...\n"
".3.6163.....\n"
"..4...5.4.55\n"
"56...34.244.\n"
"345..53.2..6\n"
"...53...421.\n"
"............\n"
"4.....1...2.\n"
"......26..2.\n"
"..13..3.1.4.\n"
"54..3343...3\n"
"3526.4.5..12\n"
"22.45..6....\n") == 0);
free(board505423144);
board505423144 = NULL;
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 1, 17) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board774018363 = gamma_board(board);
assert( board774018363 != NULL );
assert( strcmp(board774018363, 
".1......4...\n"
"64.....2.4..\n"
"..2.....6..1\n"
"........4...\n"
"...55.15....\n"
"....5.......\n"
"5.....1.3...\n"
".3561631....\n"
"..4...5.4.55\n"
"56.3.34.244.\n"
"345..53.21.6\n"
"...53..3421.\n"
"4...........\n"
"4.....1...2.\n"
"......26..2.\n"
"..13..3.1.4.\n"
"54..3343...3\n"
"3526.465..12\n"
"22.45..6..3.\n") == 0);
free(board774018363);
board774018363 = NULL;
assert( gamma_move(board, 1, 5, 16) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 3, 11, 18) == 1 );
assert( gamma_free_fields(board, 3) == 139 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 138 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 10, 18) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 6, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 5, 17) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 10, 18) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_free_fields(board, 5) == 127 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_free_fields(board, 2) == 125 );


char* board455816643 = gamma_board(board);
assert( board455816643 != NULL );
assert( strcmp(board455816643, 
".1......4.43\n"
"64...2.2.4..\n"
"..2..1..6.31\n"
"...2..6.4...\n"
"...55.15....\n"
"....51......\n"
"5.....1.3...\n"
".3561631....\n"
"..4..1524.55\n"
"5613.34.244.\n"
"345.453.26.6\n"
"4..53.43421.\n"
"4...........\n"
"4.....1.1.2.\n"
"......26..2.\n"
"..13..3.1.4.\n"
"544.3343...3\n"
"3526.465..12\n"
"22.45..6..35\n") == 0);
free(board455816643);
board455816643 = NULL;
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 125 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 4, 18, 7) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_golden_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 16, 6) == 0 );
assert( gamma_move(board, 5, 6, 17) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_golden_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 7, 16) == 1 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 114 );
assert( gamma_golden_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_free_fields(board, 1) == 111 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_golden_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_move(board, 1, 18, 9) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_golden_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_free_fields(board, 2) == 105 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 4) == 105 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 18) == 1 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 5, 4, 15) == 1 );
assert( gamma_move(board, 5, 9, 16) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 0, 14) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 3, 17) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 0, 18) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_golden_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 2, 4, 17) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 17, 11) == 0 );


char* board153344941 = gamma_board(board);
assert( board153344941 != NULL );
assert( strcmp(board153344941, 
"612.....4.43\n"
"64.32252.4..\n"
"..2.51.26531\n"
"...25.6.4...\n"
"6..55.15.4..\n"
"....51....23\n"
"5....61432.6\n"
".3561631...1\n"
"3.4..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.....1..\n"
"42..1.12152.\n"
"25..3.26..2.\n"
"..13612.1.43\n"
"54413343...3\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board153344941);
board153344941 = NULL;
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 2, 2) == 0 );


char* board778733958 = gamma_board(board);
assert( board778733958 != NULL );
assert( strcmp(board778733958, 
"612.....4.43\n"
"64.32252.4..\n"
"..2.51.26531\n"
"...25.6.4...\n"
"6..55.15.4..\n"
"....51....23\n"
"5....61432.6\n"
".3561631...1\n"
"3.4..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.....1..\n"
"42..1112152.\n"
"25..3.26.22.\n"
"..13612.1.43\n"
"54413343...3\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board778733958);
board778733958 = NULL;
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 11, 15) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 16) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_golden_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );


char* board553634850 = gamma_board(board);
assert( board553634850 != NULL );
assert( strcmp(board553634850, 
"612.....4.43\n"
"64.32252.4..\n"
"242.51.26531\n"
"...25.6.4..4\n"
"6.255.15.42.\n"
"....5164..23\n"
"5...161432.6\n"
".3561631...1\n"
"3.4..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.....1..\n"
"42..1112152.\n"
"25.43.26522.\n"
"..13612.1343\n"
"54413343.4.3\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board553634850);
board553634850 = NULL;
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 2, 9, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 7, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_golden_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );


char* board898247279 = gamma_board(board);
assert( board898247279 != NULL );
assert( strcmp(board898247279, 
"612.....4243\n"
"64.32252.4..\n"
"242.51.26531\n"
"...25.644..4\n"
"6.255.15.42.\n"
"1...5164..23\n"
"55..161432.6\n"
".3561631...1\n"
"3.4..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.....1.2\n"
"426.11121521\n"
"25143.26522.\n"
"..13612.1343\n"
"54413343.4.3\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board898247279);
board898247279 = NULL;
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 60 );


char* board851790073 = gamma_board(board);
assert( board851790073 != NULL );
assert( strcmp(board851790073, 
"612.....4243\n"
"64.32252.4..\n"
"242.51.26531\n"
"...25.644..4\n"
"6.255.15.42.\n"
"1...5164..23\n"
"55..161432.6\n"
".3561631...1\n"
"3.4..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.....1.2\n"
"426.11121521\n"
"25143.26522.\n"
"..13612.1343\n"
"54413343.4.3\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board851790073);
board851790073 = NULL;
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );


char* board613014090 = gamma_board(board);
assert( board613014090 != NULL );
assert( strcmp(board613014090, 
"612.....4243\n"
"64.32252.4..\n"
"242.51.26531\n"
"...25.644..4\n"
"6.255.15.42.\n"
"1...5164..23\n"
"55..161432.6\n"
".3561631...1\n"
"334..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.22..1.2\n"
"426.11121521\n"
"25143526522.\n"
"..13612.1343\n"
"54413343.413\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board613014090);
board613014090 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_golden_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );


char* board869667924 = gamma_board(board);
assert( board869667924 != NULL );
assert( strcmp(board869667924, 
"612.....4243\n"
"64.32252.4..\n"
"242.51.26531\n"
"...25.644..4\n"
"6.255.15.42.\n"
"1...5164..23\n"
"55..161432.6\n"
".3561631...1\n"
"334..1524.55\n"
"561323452441\n"
"345.453.16.6\n"
"46653.434211\n"
"4353.22..1.2\n"
"426.11121521\n"
"25143526522.\n"
"..13612.1343\n"
"54413343.413\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board869667924);
board869667924 = NULL;
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_move(board, 6, 8, 15) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 10, 18) == 0 );
assert( gamma_move(board, 4, 18, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 18) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 6, 18) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_golden_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 6, 0, 15) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_golden_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 35 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board256124941 = gamma_board(board);
assert( board256124941 != NULL );
assert( strcmp(board256124941, 
"612...314243\n"
"64.32252.4..\n"
"242.51.26531\n"
"6..25.644..4\n"
"6.255.15.423\n"
"1..55164.323\n"
"552.161432.6\n"
".3561631...1\n"
"334..1524.55\n"
"561323452441\n"
"345.453416.6\n"
"466535434211\n"
"4353.2255142\n"
"426.11121551\n"
"25143526522.\n"
"3.13612.1343\n"
"54413343.413\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board256124941);
board256124941 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_move(board, 1, 6, 16) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 17, 10) == 0 );
assert( gamma_move(board, 4, 6, 18) == 0 );


char* board550385254 = gamma_board(board);
assert( board550385254 != NULL );
assert( strcmp(board550385254, 
"612...314243\n"
"64.3225214..\n"
"242451126531\n"
"6..25.644..4\n"
"6.255.15.423\n"
"1..55164.323\n"
"552.161432.6\n"
".3561631...1\n"
"334..1524.55\n"
"561323452441\n"
"345.453416.6\n"
"466535434211\n"
"4353.2255142\n"
"426.11121551\n"
"25143526522.\n"
"3.13612.1343\n"
"54413343.413\n"
"3526.465.212\n"
"22.455.63.35\n") == 0);
free(board550385254);
board550385254 = NULL;
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
