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
uuid: 960670540
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 6, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_free_fields(board, 2) == 170 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 160 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_free_fields(board, 3) == 155 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_free_fields(board, 6) == 140 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board886935637 = gamma_board(board);
assert( board886935637 != NULL );
assert( strcmp(board886935637, 
"..1.4.......\n"
"62..........\n"
"3...........\n"
"..........32\n"
"1...2..22...\n"
".......6...3\n"
"...2.1...5..\n"
"6......6....\n"
".55.3....1..\n"
".6.6.......6\n"
"3.3.....1...\n"
"5.....3..5.4\n"
"...3..533...\n"
"............\n"
"1....15..6..\n") == 0);
free(board886935637);
board886935637 = NULL;
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );


char* board231228400 = gamma_board(board);
assert( board231228400 != NULL );
assert( strcmp(board231228400, 
"..1.42...5..\n"
"62....3.....\n"
"3...........\n"
"..1.......32\n"
"1...2..22...\n"
".......6...3\n"
"...2.1...5..\n"
"6...1..6....\n"
".55.3....1..\n"
".6.6.......6\n"
"3.3.....1...\n"
"5.....3..5.4\n"
"...3..533...\n"
"............\n"
"1....15..6..\n") == 0);
free(board231228400);
board231228400 = NULL;
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_free_fields(board, 1) == 134 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 127 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board424932667 = gamma_board(board);
assert( board424932667 != NULL );
assert( strcmp(board424932667, 
"..1.42...5..\n"
"62....3.....\n"
"3...........\n"
"..12....1.32\n"
"1...2.122...\n"
"..2....6...3\n"
"...2.1.4.5..\n"
"6.5.1..6....\n"
".55.3....11.\n"
".6.6...2...6\n"
"3.3.....1...\n"
"5...4.3..5.4\n"
"..43..533.2.\n"
"3...........\n"
"1....15..6..\n") == 0);
free(board424932667);
board424932667 = NULL;
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_free_fields(board, 6) == 116 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );


char* board554101796 = gamma_board(board);
assert( board554101796 != NULL );
assert( strcmp(board554101796, 
"..1.42...5..\n"
"62....3.2...\n"
"3......4....\n"
"..12....1.32\n"
"1...2.122...\n"
"..2.4..6...3\n"
"...2.1.4.5..\n"
"6.5.1..6...5\n"
".55.3..5.116\n"
".6.6...26..6\n"
"3.3.....1...\n"
"5..54.3..5.4\n"
".443..533.2.\n"
"3...........\n"
"1....15..6..\n") == 0);
free(board554101796);
board554101796 = NULL;
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board962710580 = gamma_board(board);
assert( board962710580 != NULL );
assert( strcmp(board962710580, 
"..1.42...5..\n"
"62...3342...\n"
"3..5...4....\n"
".6122...1.32\n"
"1...21122...\n"
"..2.4466...3\n"
"..22.144.5..\n"
"6.5.1..6..55\n"
".55.3..5.116\n"
".6.6...26..6\n"
"3.3.....1...\n"
"5..54.3..524\n"
".443.6533.2.\n"
"3...........\n"
"1....15..6..\n") == 0);
free(board962710580);
board962710580 = NULL;
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );


char* board784785711 = gamma_board(board);
assert( board784785711 != NULL );
assert( strcmp(board784785711, 
"..1.42...5..\n"
"62...3342...\n"
"3..5...4....\n"
".6122...1.32\n"
"1...21122...\n"
"..2.4466...3\n"
"..22.144.5..\n"
"6.5.1..6..55\n"
".5563..5.116\n"
".6.6...26..6\n"
"3.3.....1...\n"
"5..54.3..524\n"
".443.6533.2.\n"
"3...........\n"
"1....15..6..\n") == 0);
free(board784785711);
board784785711 = NULL;
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );


char* board185497564 = gamma_board(board);
assert( board185497564 != NULL );
assert( strcmp(board185497564, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1...21122...\n"
"..2.4466...3\n"
"..22.144.5..\n"
"6.5.1..6..55\n"
".5563..5.116\n"
".6.6...26..6\n"
"3.3.....1...\n"
"5..54.3..524\n"
".443.6533.2.\n"
"3...4.......\n"
"1....15..6.2\n") == 0);
free(board185497564);
board185497564 = NULL;
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_free_fields(board, 1) == 25 );


char* board972835704 = gamma_board(board);
assert( board972835704 != NULL );
assert( strcmp(board972835704, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1...21122...\n"
"..2.4466...3\n"
".422.144.5..\n"
"6.541..6..55\n"
".5563..5.116\n"
".6.6...26..6\n"
"3.3.....1...\n"
"5.554.3..524\n"
".443.6533.2.\n"
"3...4.......\n"
"1....15..6.2\n") == 0);
free(board972835704);
board972835704 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );


char* board619864425 = gamma_board(board);
assert( board619864425 != NULL );
assert( strcmp(board619864425, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1..421122...\n"
"..2.4466..33\n"
".422.144.5..\n"
"6.541..6..55\n"
".5563..5.116\n"
".6.6.2.26..6\n"
"3.3.....1...\n"
"5.554.3..524\n"
".443.6533.2.\n"
"3...4.......\n"
"1....15..6.2\n") == 0);
free(board619864425);
board619864425 = NULL;
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );


char* board730831378 = gamma_board(board);
assert( board730831378 != NULL );
assert( strcmp(board730831378, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1.1421122...\n"
"..2.4466..33\n"
".422.144.5..\n"
"6.541..6..55\n"
".5563..5.116\n"
".6.662.26..6\n"
"3.3.....1...\n"
"5.554.3..524\n"
".44366533.2.\n"
"3...4.......\n"
"1....15..6.2\n") == 0);
free(board730831378);
board730831378 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );


char* board881284314 = gamma_board(board);
assert( board881284314 != NULL );
assert( strcmp(board881284314, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1.1421122...\n"
"..2.4466..33\n"
".422.144.5..\n"
"64541..6.555\n"
"65563..5.116\n"
".6.662.26.16\n"
"3.3.....15..\n"
"5.554.3..524\n"
".44366533.2.\n"
"3...4.......\n"
"1....155.662\n") == 0);
free(board881284314);
board881284314 = NULL;
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );


char* board427002697 = gamma_board(board);
assert( board427002697 != NULL );
assert( strcmp(board427002697, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1.1421122...\n"
"..2.4466..33\n"
".422.144.5..\n"
"64541..6.555\n"
"65563..5.116\n"
".6.662.26.16\n"
"3.3.....151.\n"
"5.554.3..524\n"
"344366533.2.\n"
"3...4.......\n"
"1...4155.662\n") == 0);
free(board427002697);
board427002697 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );


char* board678690973 = gamma_board(board);
assert( board678690973 != NULL );
assert( strcmp(board678690973, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1.1421122...\n"
".22.4466..33\n"
".422.144.5..\n"
"64541..6.555\n"
"655632.5.116\n"
".6.662.26.16\n"
"3.3.....151.\n"
"5.554.3..524\n"
"344366533.2.\n"
"3...4...5...\n"
"1...41555662\n") == 0);
free(board678690973);
board678690973 = NULL;
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );


char* board620130570 = gamma_board(board);
assert( board620130570 != NULL );
assert( strcmp(board620130570, 
"..1.42...5..\n"
"62...3342...\n"
"3..55..4....\n"
".6122...1.32\n"
"1.1421122...\n"
"522.4466..33\n"
".422.144.5..\n"
"64541..6.555\n"
"655632.5.116\n"
".6.662.26116\n"
"3.3.....151.\n"
"5.554.3..524\n"
"344366533.2.\n"
"3...4...5...\n"
"1...41555662\n") == 0);
free(board620130570);
board620130570 = NULL;
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board563206101 = gamma_board(board);
assert( board563206101 != NULL );
assert( strcmp(board563206101, 
"..1.42...5..\n"
"62...3342...\n"
"3..55.44....\n"
".6122...1.32\n"
"1.1421122...\n"
"522.4466..33\n"
".422.144.5..\n"
"64541..6.555\n"
"655632.5.116\n"
".6.662.26116\n"
"3.3.....151.\n"
"5.554.3..524\n"
"344366533.2.\n"
"3...4...5...\n"
"1..441555662\n") == 0);
free(board563206101);
board563206101 = NULL;
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_golden_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_golden_move(board, 6, 13, 6) == 0 );


gamma_delete(board);

    return 0;
}
