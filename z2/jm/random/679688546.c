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
uuid: 679688546
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 6, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );


char* board868393756 = gamma_board(board);
assert( board868393756 != NULL );
assert( strcmp(board868393756, 
"3.......7...2\n"
".2...78...2..\n"
".4........6..\n"
"..8.1....1...\n"
".....7.31..2.\n"
".4....51.....\n") == 0);
free(board868393756);
board868393756 = NULL;
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );


char* board651558364 = gamma_board(board);
assert( board651558364 != NULL );
assert( strcmp(board651558364, 
"3.37....73..2\n"
".21.8786..2..\n"
"5441424...6.1\n"
"4.8.1....1...\n"
".57..7.31..2.\n"
".4.3.4515.6..\n") == 0);
free(board651558364);
board651558364 = NULL;
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_free_fields(board, 3) == 37 );


char* board583406882 = gamma_board(board);
assert( board583406882 != NULL );
assert( strcmp(board583406882, 
"3.37....73..2\n"
".21.8786..2..\n"
"5441424...6.1\n"
"4.8.1..7.1...\n"
".578.7.31..2.\n"
".4.3.4515.6..\n") == 0);
free(board583406882);
board583406882 = NULL;
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board852858102 = gamma_board(board);
assert( board852858102 != NULL );
assert( strcmp(board852858102, 
"3.37....73..2\n"
".21.8786..2..\n"
"5441424...6.1\n"
"428.1.67.1...\n"
".578.7.31..2.\n"
".4.3.4515.6..\n") == 0);
free(board852858102);
board852858102 = NULL;
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_golden_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_free_fields(board, 8) == 28 );


char* board134554377 = gamma_board(board);
assert( board134554377 != NULL );
assert( strcmp(board134554377, 
"3.37....73.52\n"
"221.8786..2..\n"
"5441424...6.1\n"
"428.1.67.14..\n"
".578.7.316.2.\n"
"844314515.6..\n") == 0);
free(board134554377);
board134554377 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board109278531 = gamma_board(board);
assert( board109278531 != NULL );
assert( strcmp(board109278531, 
"3.37....73.52\n"
"221.8786..2..\n"
"5441424...6.1\n"
"428.1.67.14..\n"
".578.7.316.2.\n"
"844314515.6..\n") == 0);
free(board109278531);
board109278531 = NULL;
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );


char* board866495096 = gamma_board(board);
assert( board866495096 != NULL );
assert( strcmp(board866495096, 
"3.37....73.52\n"
"221.8786..2..\n"
"5441424...6.1\n"
"428.1.67.14..\n"
".578.7.316.2.\n"
"84431451546..\n") == 0);
free(board866495096);
board866495096 = NULL;
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );


char* board868299860 = gamma_board(board);
assert( board868299860 != NULL );
assert( strcmp(board868299860, 
"3.37....73.52\n"
"221.8786..2..\n"
"5441424...6.1\n"
"428.1.67.14..\n"
".578.7.316.2.\n"
"84431451546..\n") == 0);
free(board868299860);
board868299860 = NULL;
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );


char* board745131683 = gamma_board(board);
assert( board745131683 != NULL );
assert( strcmp(board745131683, 
"3.37....73.52\n"
"221.8786..261\n"
"5441424..46.1\n"
"42831367.14..\n"
"8578.7.316.2.\n"
"84431451546..\n") == 0);
free(board745131683);
board745131683 = NULL;
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );


char* board491415264 = gamma_board(board);
assert( board491415264 != NULL );
assert( strcmp(board491415264, 
"3.37.7..73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.316.2.\n"
"84431451546..\n") == 0);
free(board491415264);
board491415264 = NULL;
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );


char* board754273291 = gamma_board(board);
assert( board754273291 != NULL );
assert( strcmp(board754273291, 
"3.37.7..73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.316.2.\n"
"84431451546..\n") == 0);
free(board754273291);
board754273291 = NULL;
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_golden_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );


char* board208789757 = gamma_board(board);
assert( board208789757 != NULL );
assert( strcmp(board208789757, 
"3.37.7..73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.31612.\n"
"84431451546..\n") == 0);
free(board208789757);
board208789757 = NULL;
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 4, 8) == 0 );


char* board974717362 = gamma_board(board);
assert( board974717362 != NULL );
assert( strcmp(board974717362, 
"3.37.7..73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.31612.\n"
"84431451546..\n") == 0);
free(board974717362);
board974717362 = NULL;
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );


char* board752338622 = gamma_board(board);
assert( board752338622 != NULL );
assert( strcmp(board752338622, 
"3.37.7..73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.31612.\n"
"84431451546..\n") == 0);
free(board752338622);
board752338622 = NULL;
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );


char* board704759733 = gamma_board(board);
assert( board704759733 != NULL );
assert( strcmp(board704759733, 
"3.37.77.73.52\n"
"221.8786..261\n"
"5441424.246.1\n"
"42831367.14..\n"
"8578.7.31612.\n"
"84431451546..\n") == 0);
free(board704759733);
board704759733 = NULL;
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );


gamma_delete(board);

    return 0;
}
