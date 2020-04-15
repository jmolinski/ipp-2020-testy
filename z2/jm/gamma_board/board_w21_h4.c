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
uuid: 944919461
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(4, 21, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 0 );


char* board673068646 = gamma_board(board);
assert( board673068646 != NULL );
assert( strcmp(board673068646, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n") == 0);
free(board673068646);
board673068646 = NULL;
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 20, 1) == 0 );
assert( gamma_move(board, 5, 20, 2) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );


char* board227481277 = gamma_board(board);
assert( board227481277 != NULL );
assert( strcmp(board227481277, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"...2\n") == 0);
free(board227481277);
board227481277 = NULL;
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 1, 20, 2) == 0 );


char* board861390219 = gamma_board(board);
assert( board861390219 != NULL );
assert( strcmp(board861390219, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
".9..\n"
"...2\n") == 0);
free(board861390219);
board861390219 = NULL;
assert( gamma_move(board, 2, 20, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 6, 15, 0) == 0 );


char* board305670637 = gamma_board(board);
assert( board305670637 != NULL );
assert( strcmp(board305670637, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"....\n"
".9..\n"
"...2\n") == 0);
free(board305670637);
board305670637 = NULL;
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board980330117 = gamma_board(board);
assert( board980330117 != NULL );
assert( strcmp(board980330117, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"....\n"
".9..\n"
"...2\n") == 0);
free(board980330117);
board980330117 = NULL;
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );


char* board299058818 = gamma_board(board);
assert( board299058818 != NULL );
assert( strcmp(board299058818, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"....\n"
".9..\n"
"...2\n") == 0);
free(board299058818);
board299058818 = NULL;
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 20, 2) == 0 );
assert( gamma_move(board, 1, 18, 2) == 0 );


char* board317358737 = gamma_board(board);
assert( board317358737 != NULL );
assert( strcmp(board317358737, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
"...2\n") == 0);
free(board317358737);
board317358737 = NULL;
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 20, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );


char* board634501014 = gamma_board(board);
assert( board634501014 != NULL );
assert( strcmp(board634501014, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
"...2\n") == 0);
free(board634501014);
board634501014 = NULL;
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 19, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 20, 3) == 0 );


char* board338452632 = gamma_board(board);
assert( board338452632 != NULL );
assert( strcmp(board338452632, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
"...2\n") == 0);
free(board338452632);
board338452632 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );


char* board855077206 = gamma_board(board);
assert( board855077206 != NULL );
assert( strcmp(board855077206, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
".2.2\n") == 0);
free(board855077206);
board855077206 = NULL;
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );


char* board611917777 = gamma_board(board);
assert( board611917777 != NULL );
assert( strcmp(board611917777, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
".2.2\n") == 0);
free(board611917777);
board611917777 = NULL;
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 21, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 16, 4) == 0 );


char* board466422812 = gamma_board(board);
assert( board466422812 != NULL );
assert( strcmp(board466422812, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
".2.2\n") == 0);
free(board466422812);
board466422812 = NULL;
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 8, 20, 4) == 0 );
assert( gamma_move(board, 9, 18, 4) == 0 );
assert( gamma_move(board, 1, 15, 0) == 0 );


char* board418597464 = gamma_board(board);
assert( board418597464 != NULL );
assert( strcmp(board418597464, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
"..7.\n"
".9..\n"
".2.2\n") == 0);
free(board418597464);
board418597464 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );


char* board160970147 = gamma_board(board);
assert( board160970147 != NULL );
assert( strcmp(board160970147, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
".37.\n"
".9..\n"
".2.2\n") == 0);
free(board160970147);
board160970147 = NULL;
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );


char* board622680012 = gamma_board(board);
assert( board622680012 != NULL );
assert( strcmp(board622680012, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
".37.\n"
"79..\n"
".2.2\n") == 0);
free(board622680012);
board622680012 = NULL;
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board545844514 = gamma_board(board);
assert( board545844514 != NULL );
assert( strcmp(board545844514, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"....\n"
".37.\n"
"79..\n"
".2.2\n") == 0);
free(board545844514);
board545844514 = NULL;
assert( gamma_move(board, 7, 20, 3) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );


char* board591560584 = gamma_board(board);
assert( board591560584 != NULL );
assert( strcmp(board591560584, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"..1.\n"
".37.\n"
"79..\n"
".2.2\n") == 0);
free(board591560584);
board591560584 = NULL;
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );


char* board435047546 = gamma_board(board);
assert( board435047546 != NULL );
assert( strcmp(board435047546, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"..1.\n"
".37.\n"
"79..\n"
".2.2\n") == 0);
free(board435047546);
board435047546 = NULL;
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board116396581 = gamma_board(board);
assert( board116396581 != NULL );
assert( strcmp(board116396581, 
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"....\n"
"4..3\n"
"..1.\n"
".37.\n"
"79..\n"
"82.2\n") == 0);
free(board116396581);
board116396581 = NULL;
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
