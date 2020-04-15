#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 638722666
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(13, 4, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );


char* board352988604 = gamma_board(board);
assert( board352988604 != NULL );
assert( strcmp(board352988604, 
".............\n"
".............\n"
"1............\n"
".............\n") == 0);
free(board352988604);
board352988604 = NULL;
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );


char* board463936943 = gamma_board(board);
assert( board463936943 != NULL );
assert( strcmp(board463936943, 
".............\n"
".............\n"
"1............\n"
".............\n") == 0);
free(board463936943);
board463936943 = NULL;
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );


char* board294869197 = gamma_board(board);
assert( board294869197 != NULL );
assert( strcmp(board294869197, 
".............\n"
".............\n"
"1............\n"
".............\n") == 0);
free(board294869197);
board294869197 = NULL;
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );


char* board452382881 = gamma_board(board);
assert( board452382881 != NULL );
assert( strcmp(board452382881, 
"....4........\n"
".............\n"
"1............\n"
".3...........\n") == 0);
free(board452382881);
board452382881 = NULL;
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );


char* board614730629 = gamma_board(board);
assert( board614730629 != NULL );
assert( strcmp(board614730629, 
"....4........\n"
".............\n"
"1............\n"
".39..........\n") == 0);
free(board614730629);
board614730629 = NULL;
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );


char* board687580561 = gamma_board(board);
assert( board687580561 != NULL );
assert( strcmp(board687580561, 
".6..4........\n"
".............\n"
"1...2........\n"
".39..........\n") == 0);
free(board687580561);
board687580561 = NULL;
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );


char* board958820672 = gamma_board(board);
assert( board958820672 != NULL );
assert( strcmp(board958820672, 
".6..4........\n"
".............\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board958820672);
board958820672 = NULL;
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );


char* board697067576 = gamma_board(board);
assert( board697067576 != NULL );
assert( strcmp(board697067576, 
".6..4........\n"
"....4........\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board697067576);
board697067576 = NULL;
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );


char* board439695821 = gamma_board(board);
assert( board439695821 != NULL );
assert( strcmp(board439695821, 
".6..4........\n"
"....4........\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board439695821);
board439695821 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );


char* board490990470 = gamma_board(board);
assert( board490990470 != NULL );
assert( strcmp(board490990470, 
".6.24........\n"
"....4........\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board490990470);
board490990470 = NULL;
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );


char* board159435756 = gamma_board(board);
assert( board159435756 != NULL );
assert( strcmp(board159435756, 
".6.24........\n"
"....4........\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board159435756);
board159435756 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );


char* board544653380 = gamma_board(board);
assert( board544653380 != NULL );
assert( strcmp(board544653380, 
".6.24........\n"
"...64........\n"
"1.7.2........\n"
".39..........\n") == 0);
free(board544653380);
board544653380 = NULL;
assert( gamma_move(board, 7, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
