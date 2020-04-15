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
uuid: 880668449
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(18, 8, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 8) == 0 );


char* board853660315 = gamma_board(board);
assert( board853660315 != NULL );
assert( strcmp(board853660315, 
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n") == 0);
free(board853660315);
board853660315 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );


char* board431798534 = gamma_board(board);
assert( board431798534 != NULL );
assert( strcmp(board431798534, 
".4................\n"
"...6..............\n"
"..................\n"
"..................\n"
"..3...2...........\n"
"..................\n"
".......5..........\n"
"..................\n") == 0);
free(board431798534);
board431798534 = NULL;
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 8, 17) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );


char* board116854368 = gamma_board(board);
assert( board116854368 != NULL );
assert( strcmp(board116854368, 
".4................\n"
"...6..7...........\n"
"..................\n"
"..................\n"
"..3...2...........\n"
"..................\n"
".......5..........\n"
"..................\n") == 0);
free(board116854368);
board116854368 = NULL;
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 5, 15) == 0 );


char* board700769972 = gamma_board(board);
assert( board700769972 != NULL );
assert( strcmp(board700769972, 
"54................\n"
"..46..7...........\n"
"..................\n"
"..3...............\n"
"..3...2...........\n"
"..................\n"
".......5..........\n"
"..................\n") == 0);
free(board700769972);
board700769972 = NULL;
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 8, 16) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board700447724 = gamma_board(board);
assert( board700447724 != NULL );
assert( strcmp(board700447724, 
"54................\n"
"..46..7...........\n"
"..................\n"
"..3...............\n"
"..3...2...........\n"
"7.................\n"
"..1....5..........\n"
"......8...........\n") == 0);
free(board700447724);
board700447724 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );


char* board650534732 = gamma_board(board);
assert( board650534732 != NULL );
assert( strcmp(board650534732, 
"54................\n"
"..46..7...........\n"
"..................\n"
"..3...............\n"
"..3...23..........\n"
"7.................\n"
"..1....5..........\n"
"......85..........\n") == 0);
free(board650534732);
board650534732 = NULL;
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );


char* board247198805 = gamma_board(board);
assert( board247198805 != NULL );
assert( strcmp(board247198805, 
"54................\n"
"..46..7...........\n"
"..................\n"
"9.37..............\n"
"..3...23..........\n"
"7.................\n"
"..1....5..........\n"
"......85..........\n") == 0);
free(board247198805);
board247198805 = NULL;
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );


char* board525564940 = gamma_board(board);
assert( board525564940 != NULL );
assert( strcmp(board525564940, 
"54................\n"
"..46..7...........\n"
"......3...........\n"
"9.37..............\n"
"..3...23..........\n"
"7.................\n"
"..1....5..........\n"
"......85..........\n") == 0);
free(board525564940);
board525564940 = NULL;
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board241221998 = gamma_board(board);
assert( board241221998 != NULL );
assert( strcmp(board241221998, 
"54................\n"
"..46..7...........\n"
"......3...........\n"
"9.37..............\n"
".93...23..........\n"
"7.................\n"
"..1....5..........\n"
"......85..........\n") == 0);
free(board241221998);
board241221998 = NULL;
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );


char* board772810401 = gamma_board(board);
assert( board772810401 != NULL );
assert( strcmp(board772810401, 
"54................\n"
"..46..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7.................\n"
"6.1....5..........\n"
"......85..........\n") == 0);
free(board772810401);
board772810401 = NULL;
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );


char* board966561283 = gamma_board(board);
assert( board966561283 != NULL );
assert( strcmp(board966561283, 
"54..1.............\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7.................\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board966561283);
board966561283 = NULL;
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );


char* board323634047 = gamma_board(board);
assert( board323634047 != NULL );
assert( strcmp(board323634047, 
"54..1.............\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7......2..........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board323634047);
board323634047 = NULL;
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board581309803 = gamma_board(board);
assert( board581309803 != NULL );
assert( strcmp(board581309803, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7......2..........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board581309803);
board581309803 = NULL;
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 16) == 0 );


char* board792968214 = gamma_board(board);
assert( board792968214 != NULL );
assert( strcmp(board792968214, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board792968214);
board792968214 = NULL;
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );


char* board422222020 = gamma_board(board);
assert( board422222020 != NULL );
assert( strcmp(board422222020, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93...23..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board422222020);
board422222020 = NULL;
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 6, 7, 16) == 0 );


char* board894437117 = gamma_board(board);
assert( board894437117 != NULL );
assert( strcmp(board894437117, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93..423..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board894437117);
board894437117 = NULL;
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );


char* board835306013 = gamma_board(board);
assert( board835306013 != NULL );
assert( strcmp(board835306013, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93..423..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board835306013);
board835306013 = NULL;
assert( gamma_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 1, 13) == 0 );


char* board505247824 = gamma_board(board);
assert( board505247824 != NULL );
assert( strcmp(board505247824, 
"54..1.9...........\n"
".946..74..........\n"
"......35..........\n"
"9.37..............\n"
".93.5423..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board505247824);
board505247824 = NULL;
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 9, 7, 17) == 0 );
assert( gamma_move(board, 1, 4, 18) == 0 );


char* board349522216 = gamma_board(board);
assert( board349522216 != NULL );
assert( strcmp(board349522216, 
"54..1.9...........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37..............\n"
".93.5423..........\n"
"7......22.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board349522216);
board349522216 = NULL;
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );


char* board489935756 = gamma_board(board);
assert( board489935756 != NULL );
assert( strcmp(board489935756, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37..............\n"
".93.5423..........\n"
"7.....222.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board489935756);
board489935756 = NULL;
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );


char* board830232555 = gamma_board(board);
assert( board830232555 != NULL );
assert( strcmp(board830232555, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37..............\n"
".93.5423..........\n"
"7.....222.........\n"
"671....5..........\n"
"......85..........\n") == 0);
free(board830232555);
board830232555 = NULL;
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 8, 16) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );


char* board276227396 = gamma_board(board);
assert( board276227396 != NULL );
assert( strcmp(board276227396, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37...2..........\n"
".9345423..........\n"
"7.....222.........\n"
"671....5..........\n"
"..3...85..........\n") == 0);
free(board276227396);
board276227396 = NULL;
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );


char* board440143448 = gamma_board(board);
assert( board440143448 != NULL );
assert( strcmp(board440143448, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37...2..........\n"
".9345423..........\n"
"7.....222.........\n"
"671....5..........\n"
"..3...85..........\n") == 0);
free(board440143448);
board440143448 = NULL;
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 8, 16) == 0 );


char* board117036603 = gamma_board(board);
assert( board117036603 != NULL );
assert( strcmp(board117036603, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...35..........\n"
"9.37...2..........\n"
".9345423..........\n"
"7.....222.........\n"
"671....5..........\n"
"..3...85..........\n") == 0);
free(board117036603);
board117036603 = NULL;
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );


char* board226743543 = gamma_board(board);
assert( board226743543 != NULL );
assert( strcmp(board226743543, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9.37...2..........\n"
".9345423..........\n"
"7.....222.........\n"
"671....5..........\n"
"..3...85..........\n") == 0);
free(board226743543);
board226743543 = NULL;
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board160454130 = gamma_board(board);
assert( board160454130 != NULL );
assert( strcmp(board160454130, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9.37...2..........\n"
".9345423..........\n"
"7.....222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board160454130);
board160454130 = NULL;
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );


char* board829186817 = gamma_board(board);
assert( board829186817 != NULL );
assert( strcmp(board829186817, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9.37...2..........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board829186817);
board829186817 = NULL;
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_move(board, 6, 4, 18) == 0 );


char* board363601440 = gamma_board(board);
assert( board363601440 != NULL );
assert( strcmp(board363601440, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9.37...2..........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board363601440);
board363601440 = NULL;
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 8, 5, 16) == 0 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );


char* board506851865 = gamma_board(board);
assert( board506851865 != NULL );
assert( strcmp(board506851865, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9937...2..........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board506851865);
board506851865 = NULL;
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );


char* board215991878 = gamma_board(board);
assert( board215991878 != NULL );
assert( strcmp(board215991878, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9937...2..........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board215991878);
board215991878 = NULL;
assert( gamma_move(board, 7, 3, 15) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 5, 17) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );


char* board364211360 = gamma_board(board);
assert( board364211360 != NULL );
assert( strcmp(board364211360, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9937...2..........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board364211360);
board364211360 = NULL;
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );


char* board951584754 = gamma_board(board);
assert( board951584754 != NULL );
assert( strcmp(board951584754, 
"54..1.9.3.........\n"
".946..74..........\n"
"..8...357.........\n"
"9937...24.........\n"
".9345423..........\n"
"7....9222.........\n"
"6714...5..........\n"
"..3...85..........\n") == 0);
free(board951584754);
board951584754 = NULL;
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 7, 18) == 0 );


gamma_delete(board);

    return 0;
}
