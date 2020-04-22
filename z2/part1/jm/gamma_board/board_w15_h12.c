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
uuid: 763238913
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(12, 15, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );


char* board195697936 = gamma_board(board);
assert( board195697936 != NULL );
assert( strcmp(board195697936, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".1..........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board195697936);
board195697936 = NULL;
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );


char* board938944704 = gamma_board(board);
assert( board938944704 != NULL );
assert( strcmp(board938944704, 
"............\n"
"............\n"
"............\n"
"............\n"
"5...........\n"
"............\n"
"............\n"
".1..........\n"
"......6.....\n"
"3...........\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"....2.......\n") == 0);
free(board938944704);
board938944704 = NULL;
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 1, 11, 10) == 1 );


char* board968438637 = gamma_board(board);
assert( board968438637 != NULL );
assert( strcmp(board968438637, 
"............\n"
"............\n"
"............\n"
"............\n"
"5..........1\n"
"............\n"
"............\n"
".1..........\n"
"......6.....\n"
"3...........\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board968438637);
board968438637 = NULL;
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );


char* board890927949 = gamma_board(board);
assert( board890927949 != NULL );
assert( strcmp(board890927949, 
"............\n"
"............\n"
"............\n"
"............\n"
"5..........1\n"
".........2..\n"
"........5...\n"
".1..6.......\n"
"......6.....\n"
"3...........\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board890927949);
board890927949 = NULL;
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );


char* board969182328 = gamma_board(board);
assert( board969182328 != NULL );
assert( strcmp(board969182328, 
"............\n"
"............\n"
"............\n"
"............\n"
"5..........1\n"
"..1......2..\n"
"........5...\n"
".1..6.......\n"
"...7..6.....\n"
"3...........\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board969182328);
board969182328 = NULL;
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );


char* board882872776 = gamma_board(board);
assert( board882872776 != NULL );
assert( strcmp(board882872776, 
"............\n"
"............\n"
"............\n"
".......3....\n"
"5..........1\n"
"..15.....2..\n"
"........5...\n"
".1..6.......\n"
"2..7..6.....\n"
"3.6.........\n"
"............\n"
"....4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board882872776);
board882872776 = NULL;
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );


char* board812374454 = gamma_board(board);
assert( board812374454 != NULL );
assert( strcmp(board812374454, 
"............\n"
"............\n"
"............\n"
".......3....\n"
"5..........1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"2..7..6.....\n"
"3.6.........\n"
"...........1\n"
"....4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board812374454);
board812374454 = NULL;
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );


char* board625569628 = gamma_board(board);
assert( board625569628 != NULL );
assert( strcmp(board625569628, 
"............\n"
"............\n"
"............\n"
".......3....\n"
"5..........1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"2..7..6.....\n"
"3.6....6....\n"
"...........1\n"
".4..4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board625569628);
board625569628 = NULL;
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );


char* board420693746 = gamma_board(board);
assert( board420693746 != NULL );
assert( strcmp(board420693746, 
"............\n"
"............\n"
"............\n"
".......3....\n"
"5.....9....1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"27.7.86.....\n"
"3.6....6....\n"
"...........1\n"
".4..4.......\n"
"............\n"
"............\n"
"....2......8\n") == 0);
free(board420693746);
board420693746 = NULL;
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 15, 10) == 0 );


char* board652323392 = gamma_board(board);
assert( board652323392 != NULL );
assert( strcmp(board652323392, 
"............\n"
"............\n"
"............\n"
"...3...3....\n"
"5.....9....1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"27.7.86.....\n"
"3.6....6....\n"
"...........1\n"
".4..4.......\n"
"............\n"
"............\n"
"...42....5.8\n") == 0);
free(board652323392);
board652323392 = NULL;
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 7, 10) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );


char* board536643351 = gamma_board(board);
assert( board536643351 != NULL );
assert( strcmp(board536643351, 
"............\n"
"............\n"
"............\n"
"...3...3....\n"
"5.....99...1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"27.7.86.....\n"
"3.6....6....\n"
"...........1\n"
".41.4.......\n"
"......8.....\n"
"............\n"
"...42....5.8\n") == 0);
free(board536643351);
board536643351 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 15, 8) == 0 );


char* board959645159 = gamma_board(board);
assert( board959645159 != NULL );
assert( strcmp(board959645159, 
"............\n"
"............\n"
".........4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7.....5...\n"
".1..6.......\n"
"2727.86.....\n"
"3.6....6....\n"
"...........1\n"
".41.4.......\n"
"......8.....\n"
"............\n"
"...42....5.8\n") == 0);
free(board959645159);
board959645159 = NULL;
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );


char* board411635446 = gamma_board(board);
assert( board411635446 != NULL );
assert( strcmp(board411635446, 
"............\n"
"............\n"
".........4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7.....51..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...........1\n"
".41.4.......\n"
".8....8.....\n"
"............\n"
"...42....5.8\n") == 0);
free(board411635446);
board411635446 = NULL;
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );


char* board382975035 = gamma_board(board);
assert( board382975035 != NULL );
assert( strcmp(board382975035, 
"............\n"
"............\n"
".........4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7.....51..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...........1\n"
"241.4.......\n"
".8....8.....\n"
"............\n"
"...42....5.8\n") == 0);
free(board382975035);
board382975035 = NULL;
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );


char* board984311461 = gamma_board(board);
assert( board984311461 != NULL );
assert( strcmp(board984311461, 
"............\n"
"............\n"
".......8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7.....51..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...........1\n"
"241.4.......\n"
".8....8.....\n"
".....9......\n"
"...42....5.8\n") == 0);
free(board984311461);
board984311461 = NULL;
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );


char* board284565430 = gamma_board(board);
assert( board284565430 != NULL );
assert( strcmp(board284565430, 
"............\n"
"............\n"
".......8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7..4..51..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...5.......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....5.8\n") == 0);
free(board284565430);
board284565430 = NULL;
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );


char* board185553750 = gamma_board(board);
assert( board185553750 != NULL );
assert( strcmp(board185553750, 
"............\n"
"............\n"
".......8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7..4.151..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...5.......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....5.8\n") == 0);
free(board185553750);
board185553750 = NULL;
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );


char* board760170797 = gamma_board(board);
assert( board760170797 != NULL );
assert( strcmp(board760170797, 
"............\n"
"............\n"
"....2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
"..7..4.151..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....558\n") == 0);
free(board760170797);
board760170797 = NULL;
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );


char* board373442041 = gamma_board(board);
assert( board373442041 != NULL );
assert( strcmp(board373442041, 
"............\n"
"............\n"
"....2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
".17..48151..\n"
".1..6.......\n"
"2727.86.....\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....558\n") == 0);
free(board373442041);
board373442041 = NULL;
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );


char* board324523888 = gamma_board(board);
assert( board324523888 != NULL );
assert( strcmp(board324523888, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2..\n"
".17..48151..\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....558\n") == 0);
free(board324523888);
board324523888 = NULL;
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );


char* board318371702 = gamma_board(board);
assert( board318371702 != NULL );
assert( strcmp(board318371702, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2.9\n"
".17.148151..\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9......\n"
"...42....558\n") == 0);
free(board318371702);
board318371702 = NULL;
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );


char* board526854649 = gamma_board(board);
assert( board526854649 != NULL );
assert( strcmp(board526854649, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2.9\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9.....5\n"
"...422...558\n") == 0);
free(board526854649);
board526854649 = NULL;
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );


char* board220935130 = gamma_board(board);
assert( board220935130 != NULL );
assert( strcmp(board220935130, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....2.9\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"3.6...96....\n"
"...56......1\n"
"24134...6...\n"
".8....8.....\n"
".....9.....5\n"
"...422...558\n") == 0);
free(board220935130);
board220935130 = NULL;
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );


char* board436757922 = gamma_board(board);
assert( board436757922 != NULL );
assert( strcmp(board436757922, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99...1\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"326...96....\n"
"...56......1\n"
"241346..6.5.\n"
".8....8.....\n"
".....9.....5\n"
"...422...558\n") == 0);
free(board436757922);
board436757922 = NULL;
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );


char* board882645771 = gamma_board(board);
assert( board882645771 != NULL );
assert( strcmp(board882645771, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99..11\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"326...96....\n"
"...56......1\n"
"241346..6.5.\n"
".8....8.....\n"
".....9.....5\n"
"...422...558\n") == 0);
free(board882645771);
board882645771 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );


char* board905625169 = gamma_board(board);
assert( board905625169 != NULL );
assert( strcmp(board905625169, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99..11\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"326...96....\n"
"...56......1\n"
"2413462.6.5.\n"
".8....8.....\n"
".....9.....5\n"
"...422...558\n") == 0);
free(board905625169);
board905625169 = NULL;
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board271697319 = gamma_board(board);
assert( board271697319 != NULL );
assert( strcmp(board271697319, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99..11\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3...\n"
"2727.86.5.6.\n"
"326...96....\n"
"...56......1\n"
"2413462.6.5.\n"
".8....8.....\n"
".....9...7.5\n"
"...422...558\n") == 0);
free(board271697319);
board271697319 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );


char* board130322142 = gamma_board(board);
assert( board130322142 != NULL );
assert( strcmp(board130322142, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99..11\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8....8....3\n"
".....9...7.5\n"
"...422...558\n") == 0);
free(board130322142);
board130322142 = NULL;
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 14, 12) == 0 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );


char* board483194962 = gamma_board(board);
assert( board483194962 != NULL );
assert( strcmp(board483194962, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..3..99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422...558\n") == 0);
free(board483194962);
board483194962 = NULL;
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );


char* board245997395 = gamma_board(board);
assert( board245997395 != NULL );
assert( strcmp(board245997395, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..34.99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422...558\n") == 0);
free(board245997395);
board245997395 = NULL;
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );


char* board168250682 = gamma_board(board);
assert( board168250682 != NULL );
assert( strcmp(board168250682, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..34.99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board168250682);
board168250682 = NULL;
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );


char* board997513592 = gamma_board(board);
assert( board997513592 != NULL );
assert( strcmp(board997513592, 
"............\n"
"............\n"
".2..2..8.4..\n"
"...3...3....\n"
"5..34.99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board997513592);
board997513592 = NULL;
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 8, 15, 5) == 0 );
assert( gamma_move(board, 9, 11, 12) == 1 );
assert( gamma_move(board, 1, 15, 11) == 0 );


char* board216274671 = gamma_board(board);
assert( board216274671 != NULL );
assert( strcmp(board216274671, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"...3...3....\n"
"5..34.99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board216274671);
board216274671 = NULL;
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );


char* board325263148 = gamma_board(board);
assert( board325263148 != NULL );
assert( strcmp(board325263148, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"...3...3....\n"
"5..34.99.911\n"
"..15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...964...\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board325263148);
board325263148 = NULL;
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 1, 14, 1) == 0 );


char* board499980161 = gamma_board(board);
assert( board499980161 != NULL );
assert( strcmp(board499980161, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"...3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board499980161);
board499980161 = NULL;
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );


char* board239309364 = gamma_board(board);
assert( board239309364 != NULL );
assert( strcmp(board239309364, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"6..3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....9...7.5\n"
"...422..8558\n") == 0);
free(board239309364);
board239309364 = NULL;
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );


char* board398202415 = gamma_board(board);
assert( board398202415 != NULL );
assert( strcmp(board398202415, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"6..3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....97..7.5\n"
"...422..8558\n") == 0);
free(board398202415);
board398202415 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );


char* board305675818 = gamma_board(board);
assert( board305675818 != NULL );
assert( strcmp(board305675818, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"6..3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...56......1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
".....97..7.5\n"
"...422..8558\n") == 0);
free(board305675818);
board305675818 = NULL;
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board521032086 = gamma_board(board);
assert( board521032086 != NULL );
assert( strcmp(board521032086, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"6..3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.1481516.\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...568.....1\n"
"2413462.6.5.\n"
".8..1.8....3\n"
"....197..7.5\n"
"...422..8558\n") == 0);
free(board521032086);
board521032086 = NULL;
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );


char* board649095663 = gamma_board(board);
assert( board649095663 != NULL );
assert( strcmp(board649095663, 
"............\n"
"............\n"
".2..2..8.4.9\n"
"6..3...3....\n"
"5..34.99.911\n"
"9.15.....249\n"
".17.14815163\n"
".1..6...3.6.\n"
"2727.86.5.6.\n"
"326...9647..\n"
"...568....41\n"
"2413462.6.5.\n"
".8..1.8....3\n"
"....197..7.5\n"
"...422..8558\n") == 0);
free(board649095663);
board649095663 = NULL;
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );


gamma_delete(board);

    return 0;
}
