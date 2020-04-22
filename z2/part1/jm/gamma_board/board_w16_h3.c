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
uuid: 963375439
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(3, 16, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 2) == 0 );


char* board727987501 = gamma_board(board);
assert( board727987501 != NULL );
assert( strcmp(board727987501, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board727987501);
board727987501 = NULL;
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );


char* board434804493 = gamma_board(board);
assert( board434804493 != NULL );
assert( strcmp(board434804493, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board434804493);
board434804493 = NULL;
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 14, 0) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board934342864 = gamma_board(board);
assert( board934342864 != NULL );
assert( strcmp(board934342864, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board934342864);
board934342864 = NULL;
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );


char* board805083051 = gamma_board(board);
assert( board805083051 != NULL );
assert( strcmp(board805083051, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".4.\n"
"...\n") == 0);
free(board805083051);
board805083051 = NULL;
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );


char* board383832256 = gamma_board(board);
assert( board383832256 != NULL );
assert( strcmp(board383832256, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".4.\n"
"89.\n") == 0);
free(board383832256);
board383832256 = NULL;
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );


char* board498811309 = gamma_board(board);
assert( board498811309 != NULL );
assert( strcmp(board498811309, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"3..\n"
".46\n"
"89.\n") == 0);
free(board498811309);
board498811309 = NULL;
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );


char* board865875669 = gamma_board(board);
assert( board865875669 != NULL );
assert( strcmp(board865875669, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"3..\n"
".46\n"
"89.\n") == 0);
free(board865875669);
board865875669 = NULL;
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );


char* board824478156 = gamma_board(board);
assert( board824478156 != NULL );
assert( strcmp(board824478156, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".6.\n"
"33.\n"
".46\n"
"89.\n") == 0);
free(board824478156);
board824478156 = NULL;
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board167952437 = gamma_board(board);
assert( board167952437 != NULL );
assert( strcmp(board167952437, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".6.\n"
"33.\n"
".46\n"
"891\n") == 0);
free(board167952437);
board167952437 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );


char* board870721336 = gamma_board(board);
assert( board870721336 != NULL );
assert( strcmp(board870721336, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".6.\n"
"332\n"
".46\n"
"891\n") == 0);
free(board870721336);
board870721336 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board203078379 = gamma_board(board);
assert( board203078379 != NULL );
assert( strcmp(board203078379, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".6.\n"
"332\n"
"146\n"
"891\n") == 0);
free(board203078379);
board203078379 = NULL;
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );


gamma_delete(board);

    return 0;
}
