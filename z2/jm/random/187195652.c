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
uuid: 187195652
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 11, 9, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 132 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_free_fields(board, 5) == 127 );


char* board641036312 = gamma_board(board);
assert( board641036312 != NULL );
assert( strcmp(board641036312, 
".........2...\n"
".............\n"
"27...6.......\n"
"........5..63\n"
"...3.........\n"
"....3.54.....\n"
"......3......\n"
"..8..........\n"
".............\n"
"......21.....\n"
"....4........\n") == 0);
free(board641036312);
board641036312 = NULL;
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 11, 2) == 1 );
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 9, 12, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_golden_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 11, 4) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 9, 12) == 0 );


char* board759400166 = gamma_board(board);
assert( board759400166 != NULL );
assert( strcmp(board759400166, 
".........28..\n"
"2..8......8..\n"
"27...6.7.5..9\n"
"53.63.9.5..63\n"
"...3.4......7\n"
"....3.54.....\n"
".2..4.3..4.9.\n"
"1.8.4.9....3.\n"
"..2..7.....8.\n"
".1.2.721..2..\n"
"..2.46.......\n") == 0);
free(board759400166);
board759400166 = NULL;
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );


char* board100060003 = gamma_board(board);
assert( board100060003 != NULL );
assert( strcmp(board100060003, 
".........28..\n"
"2.88.4....8..\n"
"27...6.765..9\n"
"53.63.9.5..63\n"
"...394......7\n"
"....3.54..4..\n"
".2..473.94.9.\n"
"1.8.4.9....3.\n"
"..2..7.....8.\n"
".1.2.721..2..\n"
"..2.46.......\n") == 0);
free(board100060003);
board100060003 = NULL;
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );


char* board952876794 = gamma_board(board);
assert( board952876794 != NULL );
assert( strcmp(board952876794, 
".........28..\n"
"2.88.4..9.8..\n"
"27.8.67765..9\n"
"53.63.9.5..63\n"
"...394......7\n"
"....3.54..4..\n"
".2..473.94.9.\n"
"1.8.4.9....3.\n"
"..2..7.....8.\n"
".1.2.721..2..\n"
"..2.46.......\n") == 0);
free(board952876794);
board952876794 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );


char* board867113545 = gamma_board(board);
assert( board867113545 != NULL );
assert( strcmp(board867113545, 
".......7.28..\n"
"2.88.42.9.8..\n"
"27.8.67765..9\n"
"53.63.9.5..63\n"
"1..394......7\n"
"....3.54..4..\n"
"22..473.94.9.\n"
"1.8.4.9....3.\n"
"5.2..7....48.\n"
".1.2.721..2..\n"
"..2.46.......\n") == 0);
free(board867113545);
board867113545 = NULL;
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );


char* board728112215 = gamma_board(board);
assert( board728112215 != NULL );
assert( strcmp(board728112215, 
"......27328..\n"
"2.88.42.968..\n"
"2788.677654.9\n"
"53.63.9.51.63\n"
"1.43944...3.7\n"
"..873.54..4..\n"
"22..473.94.9.\n"
"1.8.4.9....3.\n"
"5.2..7....48.\n"
".1.2.721..2..\n"
"..2.46.25....\n") == 0);
free(board728112215);
board728112215 = NULL;
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 11, 6) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );


char* board997660709 = gamma_board(board);
assert( board997660709 != NULL );
assert( strcmp(board997660709, 
"7.....27328..\n"
"2.88152.968..\n"
"2788.677654.9\n"
"53.63.9.51.63\n"
"1.43944...397\n"
"..873.54..4.8\n"
"22..473.94.9.\n"
"1.8.4.9....3.\n"
"5.2..7....48.\n"
".1.2.721..2..\n"
"5.2.46.25....\n") == 0);
free(board997660709);
board997660709 = NULL;
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_free_fields(board, 7) == 58 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_golden_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );


char* board100122957 = gamma_board(board);
assert( board100122957 != NULL );
assert( strcmp(board100122957, 
"79...827328..\n"
"2288152.968..\n"
"27887677654.9\n"
"53.63.9451.63\n"
"1.43944...397\n"
"..873254..428\n"
"22..473.94.9.\n"
"13874.965.73.\n"
"592.671...48.\n"
".132.721..2.5\n"
"5.2.46.25...8\n") == 0);
free(board100122957);
board100122957 = NULL;
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_golden_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );


char* board815342254 = gamma_board(board);
assert( board815342254 != NULL );
assert( strcmp(board815342254, 
"79...827328..\n"
"2288152.968..\n"
"87887677654.9\n"
"53.63.9451.63\n"
"1.43944...397\n"
"..873254..428\n"
"22..473.94.9.\n"
"13874.965873.\n"
"592.671...48.\n"
".132.721..2.5\n"
"5.2.46.25...8\n") == 0);
free(board815342254);
board815342254 = NULL;
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );


char* board476071879 = gamma_board(board);
assert( board476071879 != NULL );
assert( strcmp(board476071879, 
"79...827328..\n"
"2288152.968.6\n"
"87887677654.9\n"
"5376359451.63\n"
"1.43944...397\n"
"..8732541.428\n"
"22.2473.94.9.\n"
"13874.965873.\n"
"592.671...48.\n"
"3132.7213.2.5\n"
"5.2.46225...8\n") == 0);
free(board476071879);
board476071879 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );


char* board678628378 = gamma_board(board);
assert( board678628378 != NULL );
assert( strcmp(board678628378, 
"79...827328..\n"
"2288152.968.6\n"
"87887677654.9\n"
"5376359451.63\n"
"1.43944...397\n"
"..8732541.428\n"
"22.2473.94.9.\n"
"13874.965873.\n"
"592.671...48.\n"
"3132.7213.2.5\n"
"5.2.46225...8\n") == 0);
free(board678628378);
board678628378 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 12, 4) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );


char* board942090153 = gamma_board(board);
assert( board942090153 != NULL );
assert( strcmp(board942090153, 
"79.2.827328..\n"
"2288152.968.6\n"
"87887677654.9\n"
"5376359451.63\n"
"1.43944...397\n"
"..8732541.428\n"
"22.2473.94.99\n"
"13874.965873.\n"
"592.671...48.\n"
"3132.7213.2.5\n"
"5.2.46225...8\n") == 0);
free(board942090153);
board942090153 = NULL;
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );


char* board889522185 = gamma_board(board);
assert( board889522185 != NULL );
assert( strcmp(board889522185, 
"79.22827328..\n"
"2288152.96896\n"
"87887677654.9\n"
"5376359451.63\n"
"1.4394486.397\n"
"..8732541.428\n"
"22.2473.94.99\n"
"13874.965873.\n"
"592.671.9.48.\n"
"3132.7213.2.5\n"
"5.2.46225.2.8\n") == 0);
free(board889522185);
board889522185 = NULL;
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_free_fields(board, 5) == 25 );


char* board374867020 = gamma_board(board);
assert( board374867020 != NULL );
assert( strcmp(board374867020, 
"79.22827328..\n"
"2288152.96896\n"
"87887677654.9\n"
"5376359451.63\n"
"1.4394486.397\n"
"..8732541.428\n"
"22.2473.94.99\n"
"13874.965873.\n"
"5924671.9.48.\n"
"3132.721312.5\n"
"5.2.46225.2.8\n") == 0);
free(board374867020);
board374867020 = NULL;
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 7, 4) == 1 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );


char* board362109562 = gamma_board(board);
assert( board362109562 != NULL );
assert( strcmp(board362109562, 
"79.22827328.6\n"
"2288152.96896\n"
"8788767765419\n"
"5376359451.63\n"
"144394446.397\n"
"..8732541.428\n"
"22.2473994.99\n"
"13874.9658736\n"
"5924671.9.489\n"
"3132172131285\n"
"5.2.462256228\n") == 0);
free(board362109562);
board362109562 = NULL;
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_free_fields(board, 9) == 7 );


char* board502128938 = gamma_board(board);
assert( board502128938 != NULL );
assert( strcmp(board502128938, 
"79.22827328.6\n"
"2288152.96896\n"
"8788767765419\n"
"5376359451.63\n"
"144394446.397\n"
"..8732541.428\n"
"22.2473994.99\n"
"13874.9658736\n"
"5924671.9.489\n"
"3132172131285\n"
"5.2.462256228\n") == 0);
free(board502128938);
board502128938 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );


gamma_delete(board);

    return 0;
}
