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
uuid: 181849385
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );


char* board552331463 = gamma_board(board);
assert( board552331463 != NULL );
assert( strcmp(board552331463, 
"...3.......\n"
"...........\n"
"...........\n"
"......5....\n"
".4.........\n"
"...........\n"
"....5......\n"
"...3....2..\n"
"2..........\n"
"...1.......\n"
"...........\n") == 0);
free(board552331463);
board552331463 = NULL;
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );


char* board700450067 = gamma_board(board);
assert( board700450067 != NULL );
assert( strcmp(board700450067, 
"...3.......\n"
"...........\n"
"...........\n"
"......5....\n"
".42.....3.1\n"
".....8.....\n"
"....51.....\n"
"...3....2..\n"
"2..........\n"
"...1...9...\n"
"...........\n") == 0);
free(board700450067);
board700450067 = NULL;
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );


char* board651202540 = gamma_board(board);
assert( board651202540 != NULL );
assert( strcmp(board651202540, 
"...3....4..\n"
"...........\n"
"....5......\n"
"......5....\n"
".42.....3.1\n"
".....8.....\n"
"....51.....\n"
"...3....2..\n"
"2..........\n"
"...1..59...\n"
".4.........\n") == 0);
free(board651202540);
board651202540 = NULL;
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );


char* board765551384 = gamma_board(board);
assert( board765551384 != NULL );
assert( strcmp(board765551384, 
"...3....4..\n"
"...........\n"
"..9.5......\n"
"......5....\n"
".42.....3.1\n"
".9..68.....\n"
"7...51...8.\n"
"...3..7.2..\n"
"2..........\n"
"...1..59...\n"
".4.......6.\n") == 0);
free(board765551384);
board765551384 = NULL;
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );


char* board476093888 = gamma_board(board);
assert( board476093888 != NULL );
assert( strcmp(board476093888, 
"...3.3..4..\n"
"...3..2...4\n"
"1.9.593.6..\n"
"4.22..5..7.\n"
".42..4..3.1\n"
".9..68.8...\n"
"7...51...87\n"
"...3..7.2..\n"
"2.........5\n"
"...1..59.5.\n"
".45......6.\n") == 0);
free(board476093888);
board476093888 = NULL;
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );


char* board701400688 = gamma_board(board);
assert( board701400688 != NULL );
assert( strcmp(board701400688, 
"1..3.38.4..\n"
"...3.12..24\n"
"1.9.593.6..\n"
"4.222.5..7.\n"
".42..4..3.1\n"
"29..68.8...\n"
"7...51...87\n"
"...3..7.2..\n"
"28.8.....75\n"
"...13.59.5.\n"
".45..5...6.\n") == 0);
free(board701400688);
board701400688 = NULL;
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_free_fields(board, 9) == 50 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );


char* board653078542 = gamma_board(board);
assert( board653078542 != NULL );
assert( strcmp(board653078542, 
"1..3.38.4.8\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342..4..3.1\n"
"29..68.8...\n"
"721.514..87\n"
"...3.57.29.\n"
"28.8.4.2.75\n"
".1613.5925.\n"
".45..5...6.\n") == 0);
free(board653078542);
board653078542 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 45 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );


char* board740805035 = gamma_board(board);
assert( board740805035 != NULL );
assert( strcmp(board740805035, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342.64..3.1\n"
"29..68.8..3\n"
"721.514..87\n"
"...3.57.29.\n"
"28.8.4.2.75\n"
".1613.5925.\n"
".45..5...6.\n") == 0);
free(board740805035);
board740805035 = NULL;
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );


char* board875532740 = gamma_board(board);
assert( board875532740 != NULL );
assert( strcmp(board875532740, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342.64..3.1\n"
"29..68.8..3\n"
"721.514..87\n"
"...3.57.29.\n"
"28.8.4.2.75\n"
".1613.5925.\n"
".45..5...6.\n") == 0);
free(board875532740);
board875532740 = NULL;
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );


char* board532211712 = gamma_board(board);
assert( board532211712 != NULL );
assert( strcmp(board532211712, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342.64..3.1\n"
"29..68.8..3\n"
"7218514..87\n"
"...3.57.29.\n"
"28.8.4.2.75\n"
".1613.5925.\n"
".45..5...6.\n") == 0);
free(board532211712);
board532211712 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );


char* board187247688 = gamma_board(board);
assert( board187247688 != NULL );
assert( strcmp(board187247688, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342.64..3.1\n"
"29..68.8..3\n"
"7218514..87\n"
"...3.57.29.\n"
"28.8.4.2.75\n"
".1613.5925.\n"
".45..54..6.\n") == 0);
free(board187247688);
board187247688 = NULL;
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_golden_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );


char* board366460393 = gamma_board(board);
assert( board366460393 != NULL );
assert( strcmp(board366460393, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.7.\n"
"342.64..3.1\n"
"29..68.81.3\n"
"7218514..87\n"
".8.3.57.29.\n"
"2868.4.2.75\n"
"8161365925.\n"
"9457.547.6.\n") == 0);
free(board366460393);
board366460393 = NULL;
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );


char* board793338507 = gamma_board(board);
assert( board793338507 != NULL );
assert( strcmp(board793338507, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.76\n"
"342.64..3.1\n"
"29..68.81.3\n"
"7218514..87\n"
".8.3.57.29.\n"
"2868.4.2.75\n"
"8161365925.\n"
"9457.547.6.\n") == 0);
free(board793338507);
board793338507 = NULL;
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_golden_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_free_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );


char* board188236252 = gamma_board(board);
assert( board188236252 != NULL );
assert( strcmp(board188236252, 
"16.3.38.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.76\n"
"342.64..3.1\n"
"29.768.81.3\n"
"7218514..87\n"
".8.3.57.29.\n"
"2868.4.2.75\n"
"8161365925.\n"
"9457.547.6.\n") == 0);
free(board188236252);
board188236252 = NULL;
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board516192386 = gamma_board(board);
assert( board516192386 != NULL );
assert( strcmp(board516192386, 
"1633.36.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.76\n"
"342.64..3.1\n"
"29.768.81.3\n"
"7218514..87\n"
".8.3.57.29.\n"
"2868.4.2.75\n"
"8161365925.\n"
"9457.547.6.\n") == 0);
free(board516192386);
board516192386 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_free_fields(board, 8) == 7 );


char* board114212701 = gamma_board(board);
assert( board114212701 != NULL );
assert( strcmp(board114212701, 
"1633.36.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.76\n"
"342.64..3.1\n"
"29.768.81.3\n"
"7218514..87\n"
".8.3.57.29.\n"
"28684462.75\n"
"8161365925.\n"
"9457.54786.\n") == 0);
free(board114212701);
board114212701 = NULL;
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );


char* board353072715 = gamma_board(board);
assert( board353072715 != NULL );
assert( strcmp(board353072715, 
"1633.36.498\n"
"...3912.224\n"
"1.9559376..\n"
"43222.59.76\n"
"342.64..3.1\n"
"29.768.81.3\n"
"7218514..87\n"
".8.3357.29.\n"
"28684462.75\n"
"8161365925.\n"
"9457.54786.\n") == 0);
free(board353072715);
board353072715 = NULL;
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );


gamma_delete(board);

    return 0;
}
