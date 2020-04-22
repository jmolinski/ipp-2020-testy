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
uuid: 636926993
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 13, 7, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 151 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_free_fields(board, 7) == 146 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_free_fields(board, 2) == 143 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_free_fields(board, 6) == 138 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );


char* board344994397 = gamma_board(board);
assert( board344994397 != NULL );
assert( strcmp(board344994397, 
"....6.......\n"
"222.........\n"
"....4.....7.\n"
"45.3......21\n"
"............\n"
"...4.5..3...\n"
"..1.........\n"
".5..117...6.\n"
".......5....\n"
"...53.......\n"
"46.......1..\n"
"..23.2..4...\n"
"3..1........\n") == 0);
free(board344994397);
board344994397 = NULL;
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_golden_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 112 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_free_fields(board, 6) == 97 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_golden_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board461753339 = gamma_board(board);
assert( board461753339 != NULL );
assert( strcmp(board461753339, 
"..6.6....1.1\n"
"2221....7.56\n"
".47147..4.7.\n"
"45.35..56221\n"
"...2..752...\n"
"1..445213.2.\n"
".61...3.4565\n"
".55.117.3763\n"
".1..65557.34\n"
"7..533...14.\n"
"4624656.21..\n"
"5223.2.646.1\n"
"37.114.1776.\n") == 0);
free(board461753339);
board461753339 = NULL;
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_golden_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );


char* board486982339 = gamma_board(board);
assert( board486982339 != NULL );
assert( strcmp(board486982339, 
"..6262...1.1\n"
"2221.5..7.56\n"
".47147..437.\n"
"45.35..56221\n"
"...2..752...\n"
"1..445213.24\n"
".61..33.4565\n"
".55.117.3763\n"
".1..65557.34\n"
"7..533...14.\n"
"4624656.21..\n"
"5223.2.64611\n"
"37.11441776.\n") == 0);
free(board486982339);
board486982339 = NULL;
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );


char* board852019024 = gamma_board(board);
assert( board852019024 != NULL );
assert( strcmp(board852019024, 
"..6262...1.1\n"
"2221.57.7.56\n"
".47147..437.\n"
"45.35.656221\n"
"4..26.752.7.\n"
"1.4445213.24\n"
".61..33.4565\n"
".55.117.3763\n"
".1..65557.34\n"
"7..533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board852019024);
board852019024 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );


char* board691369940 = gamma_board(board);
assert( board691369940 != NULL );
assert( strcmp(board691369940, 
"..6262...1.1\n"
"2221.5757.56\n"
".47147..437.\n"
"45.35.656221\n"
"4..263752.7.\n"
"1.4445213524\n"
".61..33.4565\n"
".55.117.3763\n"
".1..65557734\n"
"7..533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board691369940);
board691369940 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );


char* board161606780 = gamma_board(board);
assert( board161606780 != NULL );
assert( strcmp(board161606780, 
"..6262...1.1\n"
"2221.5757.56\n"
".47147..437.\n"
"45.35.656221\n"
"4..263752.7.\n"
"1.4445213524\n"
".61..33.4565\n"
".55.117.3763\n"
".1..65557734\n"
"7..533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board161606780);
board161606780 = NULL;
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 36 );


char* board495499905 = gamma_board(board);
assert( board495499905 != NULL );
assert( strcmp(board495499905, 
"2.6262...1.1\n"
"2221.5757.56\n"
".47147..437.\n"
"45735.656221\n"
"4..263752.7.\n"
"1.4445213524\n"
".61..33.4565\n"
".55.117.3763\n"
".1..65557734\n"
"7..533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board495499905);
board495499905 = NULL;
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );


char* board202884384 = gamma_board(board);
assert( board202884384 != NULL );
assert( strcmp(board202884384, 
"2.62625..1.1\n"
"2221.5757.56\n"
".47147..437.\n"
"45735.656221\n"
"4.6263752.7.\n"
"1.4445213524\n"
".611.33.4565\n"
".55.117.3763\n"
".1..65557734\n"
"7..533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board202884384);
board202884384 = NULL;
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_golden_move(board, 2, 2, 5) == 1 );


char* board747167392 = gamma_board(board);
assert( board747167392 != NULL );
assert( strcmp(board747167392, 
"2.62625..1.1\n"
"2221.5757.56\n"
".47147..437.\n"
"45735.656221\n"
"4.6263752.7.\n"
"1.4445213524\n"
".611.33.4565\n"
".52.117.3763\n"
".1..65557734\n"
"71.533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board747167392);
board747167392 = NULL;
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );


char* board754713044 = gamma_board(board);
assert( board754713044 != NULL );
assert( strcmp(board754713044, 
"2.62625..1.1\n"
"2221.5757.56\n"
".471473.437.\n"
"45735.656221\n"
"4.6263752.7.\n"
"1.4445213524\n"
".611.33.4565\n"
".52.117.3763\n"
".1..65557734\n"
"71.533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board754713044);
board754713044 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 10, 11) == 0 );


char* board738928622 = gamma_board(board);
assert( board738928622 != NULL );
assert( strcmp(board738928622, 
"2.62625..1.1\n"
"2221.5757.56\n"
".471473.437.\n"
"45735.656221\n"
"4.6263752.7.\n"
"1.4445213524\n"
".611.33.4565\n"
".52.117.3763\n"
".1..65551734\n"
"71.533..2141\n"
"4624656.21..\n"
"522362264611\n"
"37.11441776.\n") == 0);
free(board738928622);
board738928622 = NULL;
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );


char* board119880118 = gamma_board(board);
assert( board119880118 != NULL );
assert( strcmp(board119880118, 
"2.626253.161\n"
"2221.5757.56\n"
".471473.437.\n"
"45735.656221\n"
"456263752.7.\n"
"164445213524\n"
".611.33.4565\n"
".52.117.3763\n"
".1..65551734\n"
"71.533..2141\n"
"4624656.21.7\n"
"522362264611\n"
"37711441776.\n") == 0);
free(board119880118);
board119880118 = NULL;
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_free_fields(board, 7) == 22 );


char* board900754801 = gamma_board(board);
assert( board900754801 != NULL );
assert( strcmp(board900754801, 
"2.626253.161\n"
"222135757.56\n"
".471473.437.\n"
"457354656221\n"
"456263752.7.\n"
"164445213524\n"
".611533.4565\n"
".52.117.3763\n"
".1..65551734\n"
"71.533..2141\n"
"4624656.21.7\n"
"522362264611\n"
"37711441776.\n") == 0);
free(board900754801);
board900754801 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );


gamma_delete(board);

    return 0;
}
