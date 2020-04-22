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
uuid: 199095675
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board497149726 = gamma_board(board);
assert( board497149726 != NULL );
assert( strcmp(board497149726, 
"...........\n"
"...1.......\n"
"...........\n"
"...........\n"
"...........\n"
".1.........\n"
".......2...\n"
"...........\n"
"...........\n") == 0);
free(board497149726);
board497149726 = NULL;
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );


char* board513282767 = gamma_board(board);
assert( board513282767 != NULL );
assert( strcmp(board513282767, 
"...........\n"
".4.1.......\n"
"....6.5....\n"
"......2....\n"
"4..3.6....2\n"
".11......7.\n"
".......26.4\n"
"...........\n"
".7.........\n") == 0);
free(board513282767);
board513282767 = NULL;
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );


char* board292905255 = gamma_board(board);
assert( board292905255 != NULL );
assert( strcmp(board292905255, 
"...........\n"
".4.1.......\n"
"....6.5....\n"
"......2....\n"
"4..3.6....2\n"
".11......7.\n"
".......26.4\n"
"...........\n"
".7.........\n") == 0);
free(board292905255);
board292905255 = NULL;
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_free_fields(board, 3) == 64 );


char* board755616247 = gamma_board(board);
assert( board755616247 != NULL );
assert( strcmp(board755616247, 
".5.....3...\n"
".4.127.....\n"
"53.36.5.1..\n"
"..76..2....\n"
"4..3.6..722\n"
".11.14...7.\n"
".......26.4\n"
"...54......\n"
".711....5..\n") == 0);
free(board755616247);
board755616247 = NULL;
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );


char* board796803362 = gamma_board(board);
assert( board796803362 != NULL );
assert( strcmp(board796803362, 
".5.....3...\n"
".4.127.....\n"
"53.36.5.1..\n"
"..76..2....\n"
"4..3.6..722\n"
".11.14.5.7.\n"
".......26.4\n"
"...54......\n"
".711....5..\n") == 0);
free(board796803362);
board796803362 = NULL;
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );


char* board141098919 = gamma_board(board);
assert( board141098919 != NULL );
assert( strcmp(board141098919, 
"75.1.5.312.\n"
"34.127...34\n"
"5323635.1.4\n"
"51763.255.6\n"
"4..3.64.722\n"
".116146567.\n"
".4..6.626.4\n"
".7.54......\n"
"7711....5..\n") == 0);
free(board141098919);
board141098919 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_golden_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );


char* board447116712 = gamma_board(board);
assert( board447116712 != NULL );
assert( strcmp(board447116712, 
"75.175.3127\n"
"34.127...34\n"
"5323675.1.4\n"
"51763.255.6\n"
"4.13.64.722\n"
".1161465674\n"
".4..6.626.4\n"
".7754......\n"
"7711....5.2\n") == 0);
free(board447116712);
board447116712 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );


char* board992495138 = gamma_board(board);
assert( board992495138 != NULL );
assert( strcmp(board992495138, 
"75.175.3127\n"
"34.1277..34\n"
"5323675.1.4\n"
"51763.255.6\n"
"4.13164.722\n"
".1161465674\n"
"44..6.626.4\n"
".7754..3...\n"
"7711....5.2\n") == 0);
free(board992495138);
board992495138 = NULL;
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_golden_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 8 );


char* board144890985 = gamma_board(board);
assert( board144890985 != NULL );
assert( strcmp(board144890985, 
"75.175.3127\n"
"34.1277..34\n"
"5323675.1.4\n"
"51763.255.6\n"
"4.13164.722\n"
".1161465674\n"
"44..6.626.4\n"
".7754..3...\n"
"7711....5.2\n") == 0);
free(board144890985);
board144890985 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );


char* board845711572 = gamma_board(board);
assert( board845711572 != NULL );
assert( strcmp(board845711572, 
"75.175.3127\n"
"34.1277..34\n"
"5323675.1.4\n"
"51763.255.6\n"
"4.13164.722\n"
".1161465674\n"
"44..6.626.4\n"
".7754..3...\n"
"7711....5.2\n") == 0);
free(board845711572);
board845711572 = NULL;
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );


char* board799185500 = gamma_board(board);
assert( board799185500 != NULL );
assert( strcmp(board799185500, 
"75.175.3127\n"
"34.12773.34\n"
"5323675.1.4\n"
"51763.255.6\n"
"4.13164.722\n"
".1161445674\n"
"44..6.626.4\n"
".7754..3...\n"
"7711....5.2\n") == 0);
free(board799185500);
board799185500 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board903104131 = gamma_board(board);
assert( board903104131 != NULL );
assert( strcmp(board903104131, 
"75.175.3127\n"
"34212773.34\n"
"5323675.1.4\n"
"517632255.6\n"
"4.13164.722\n"
".1161445674\n"
"44..6.626.4\n"
".7754..36..\n"
"7711...15.2\n") == 0);
free(board903104131);
board903104131 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 4 );


gamma_delete(board);

    return 0;
}
