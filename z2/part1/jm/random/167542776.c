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
uuid: 167542776
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 11, 6, 47);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_free_fields(board, 1) == 124 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );


char* board335034406 = gamma_board(board);
assert( board335034406 != NULL );
assert( strcmp(board335034406, 
"4.5.3....1..\n"
"..1....5....\n"
"..1...1..2.6\n"
"..3......5..\n"
"6...........\n"
".........36.\n"
"......4.6.2.\n"
"..3.2....24.\n"
"............\n"
"..........2.\n"
"............\n") == 0);
free(board335034406);
board335034406 = NULL;
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );


char* board154431799 = gamma_board(board);
assert( board154431799 != NULL );
assert( strcmp(board154431799, 
"4.5.3....1..\n"
"..1....5....\n"
"..1...1..2.6\n"
"..3......5..\n"
"6.3.........\n"
".....1...36.\n"
".6....4.6.2.\n"
"..3.2....24.\n"
"............\n"
"..........2.\n"
"............\n") == 0);
free(board154431799);
board154431799 = NULL;
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board284318919 = gamma_board(board);
assert( board284318919 != NULL );
assert( strcmp(board284318919, 
"4.5.3....11.\n"
"..1....5....\n"
"..1...1..2.6\n"
"..3......5..\n"
"6.3.........\n"
".....1...36.\n"
".6....4.6.2.\n"
"143.2....24.\n"
"............\n"
"..........2.\n"
"4...........\n") == 0);
free(board284318919);
board284318919 = NULL;
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );


char* board993579670 = gamma_board(board);
assert( board993579670 != NULL );
assert( strcmp(board993579670, 
"425.3...5115\n"
"..1..5.5....\n"
"..1...1..246\n"
".33132.255..\n"
"643..2...341\n"
"52..61.2.36.\n"
".62.5.436623\n"
"143624..424.\n"
"16...215.4.2\n"
".5..15146124\n"
"41.5....65.4\n") == 0);
free(board993579670);
board993579670 = NULL;
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );


char* board769941119 = gamma_board(board);
assert( board769941119 != NULL );
assert( strcmp(board769941119, 
"425.3...5115\n"
"..1..5.5.5..\n"
".313..1..246\n"
".331326255..\n"
"643..2.1.341\n"
"52..6152.36.\n"
".62.5.436623\n"
"143624..424.\n"
"164..215.4.2\n"
".5..15146124\n"
"41.5....65.4\n") == 0);
free(board769941119);
board769941119 = NULL;
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board864942279 = gamma_board(board);
assert( board864942279 != NULL );
assert( strcmp(board864942279, 
"425.3...5115\n"
"5.11.5.5.5..\n"
".313..1..246\n"
".33132625543\n"
"643362.1.341\n"
"52..6152536.\n"
".62.5.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5..15146124\n"
"41.5...565.4\n") == 0);
free(board864942279);
board864942279 = NULL;
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );


char* board154376205 = gamma_board(board);
assert( board154376205 != NULL );
assert( strcmp(board154376205, 
"425.3...5115\n"
"5.11.5.5.5..\n"
".313..1..246\n"
".33132625543\n"
"643362.1.341\n"
"52..6152536.\n"
".62.5.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5..15146124\n"
"41.5...565.4\n") == 0);
free(board154376205);
board154376205 = NULL;
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );


char* board772002048 = gamma_board(board);
assert( board772002048 != NULL );
assert( strcmp(board772002048, 
"425.3...5115\n"
"5.11.5.5.5..\n"
".313..1..246\n"
"433132625543\n"
"64336231.341\n"
"52..6152536.\n"
".62.5.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.5...565.4\n") == 0);
free(board772002048);
board772002048 = NULL;
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );


char* board633000619 = gamma_board(board);
assert( board633000619 != NULL );
assert( strcmp(board633000619, 
"425.3.3.5115\n"
"5.11.5.545..\n"
"23135.14.146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.5.4.565.4\n") == 0);
free(board633000619);
board633000619 = NULL;
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board694315739 = gamma_board(board);
assert( board694315739 != NULL );
assert( strcmp(board694315739, 
"425.3.3.5115\n"
"5.11.51545..\n"
"23135.14.146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.544.565.4\n") == 0);
free(board694315739);
board694315739 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );


char* board112071975 = gamma_board(board);
assert( board112071975 != NULL );
assert( strcmp(board112071975, 
"425.3.3.5115\n"
"5.11.51545..\n"
"23135.142146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.544.565.4\n") == 0);
free(board112071975);
board112071975 = NULL;
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );


char* board942169299 = gamma_board(board);
assert( board942169299 != NULL );
assert( strcmp(board942169299, 
"425.3.3.5115\n"
"5.11.51545..\n"
"23135.142146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"145624..424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.544256544\n") == 0);
free(board942169299);
board942169299 = NULL;
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );


char* board373760220 = gamma_board(board);
assert( board373760220 != NULL );
assert( strcmp(board373760220, 
"425.3.3.5115\n"
"5.11.51545..\n"
"23135.142146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"1456244.424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.544256544\n") == 0);
free(board373760220);
board373760220 = NULL;
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );


char* board695542104 = gamma_board(board);
assert( board695542104 != NULL );
assert( strcmp(board695542104, 
"425.3.325115\n"
"5.11.51545..\n"
"23135.142146\n"
"433132625643\n"
"64336231.341\n"
"52..6152536.\n"
"26245.436623\n"
"1456244.424.\n"
"164..215.4.2\n"
".5.615146124\n"
"41.544256544\n") == 0);
free(board695542104);
board695542104 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
