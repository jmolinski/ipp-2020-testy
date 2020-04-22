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
uuid: 435930091
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );


char* board558380103 = gamma_board(board);
assert( board558380103 != NULL );
assert( strcmp(board558380103, 
"..........\n"
"........4.\n"
".........5\n"
"2.........\n"
"2......6..\n"
"......52..\n"
".1...4.53.\n"
".....1...1\n"
".........7\n"
"61...676..\n"
"3.......3.\n") == 0);
free(board558380103);
board558380103 = NULL;
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board397478034 = gamma_board(board);
assert( board397478034 != NULL );
assert( strcmp(board397478034, 
"...2......\n"
"....1..343\n"
".........5\n"
"2.....4.4.\n"
"21.4..26.5\n"
"..6...521.\n"
"61...4.53.\n"
"3...21...1\n"
"..757....7\n"
"61...676.6\n"
"3..22...3.\n") == 0);
free(board397478034);
board397478034 = NULL;
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );


char* board812669322 = gamma_board(board);
assert( board812669322 != NULL );
assert( strcmp(board812669322, 
"..52......\n"
"55..1.4343\n"
"..3..13.75\n"
"22....4.4.\n"
"25.4..26.5\n"
"..6...521.\n"
"61...4153.\n"
"3...21..21\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board812669322);
board812669322 = NULL;
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board924696518 = gamma_board(board);
assert( board924696518 != NULL );
assert( strcmp(board924696518, 
"..52......\n"
"553.1.4343\n"
"..3..13.75\n"
"22...44.4.\n"
"25.4..26.5\n"
".66...5217\n"
"61...4153.\n"
"37..21.521\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board924696518);
board924696518 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_free_fields(board, 6) == 15 );


char* board831015281 = gamma_board(board);
assert( board831015281 != NULL );
assert( strcmp(board831015281, 
"5.52......\n"
"553.1.4343\n"
"..3..13.75\n"
"22...44.4.\n"
"25.4..26.5\n"
".66..25217\n"
"61...4153.\n"
"37..21.521\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board831015281);
board831015281 = NULL;
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );


char* board935452314 = gamma_board(board);
assert( board935452314 != NULL );
assert( strcmp(board935452314, 
"5.52......\n"
"553.1.4343\n"
"..3..13.75\n"
"22...44.4.\n"
"25.4..26.5\n"
".66..25217\n"
"61...4153.\n"
"37..21.521\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board935452314);
board935452314 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );


char* board377169142 = gamma_board(board);
assert( board377169142 != NULL );
assert( strcmp(board377169142, 
"5.52......\n"
"553.1.4343\n"
"..3..13.75\n"
"22...44.4.\n"
"2564..26.5\n"
".66..25217\n"
"61...4153.\n"
"37..21.521\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board377169142);
board377169142 = NULL;
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );


char* board963466824 = gamma_board(board);
assert( board963466824 != NULL );
assert( strcmp(board963466824, 
"5.52...3..\n"
"553.1.4343\n"
"..3..13375\n"
"222..44643\n"
"2564..26.5\n"
".66..25217\n"
"61...4153.\n"
"37.4211521\n"
".1757....7\n"
"61...676.6\n"
"3.6227..3.\n") == 0);
free(board963466824);
board963466824 = NULL;
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );


char* board317276556 = gamma_board(board);
assert( board317276556 != NULL );
assert( strcmp(board317276556, 
"5.52...33.\n"
"553.1.4343\n"
"..3..13377\n"
"222..44643\n"
"2564..26.5\n"
".66..25217\n"
"61...4153.\n"
"37.4211521\n"
".1757....7\n"
"61...67636\n"
"3.6227..3.\n") == 0);
free(board317276556);
board317276556 = NULL;
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );


char* board525585010 = gamma_board(board);
assert( board525585010 != NULL );
assert( strcmp(board525585010, 
"5.52...33.\n"
"55311.4343\n"
"..3..13377\n"
"2221.44643\n"
"25645.26.5\n"
"4664.25217\n"
"61...4153.\n"
"37.4211521\n"
"11757....7\n"
"6165.67636\n"
"3.6227.33.\n") == 0);
free(board525585010);
board525585010 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 11 );


char* board117441325 = gamma_board(board);
assert( board117441325 != NULL );
assert( strcmp(board117441325, 
"5.52...33.\n"
"55311.4343\n"
"..3..13377\n"
"2221.44643\n"
"25645.26.5\n"
"4664.25217\n"
"61...4153.\n"
"37.4211521\n"
"11757....7\n"
"6165.67636\n"
"3.6227.33.\n") == 0);
free(board117441325);
board117441325 = NULL;
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
