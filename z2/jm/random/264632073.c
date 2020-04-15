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
uuid: 264632073
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 6, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 106 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );


char* board573579376 = gamma_board(board);
assert( board573579376 != NULL );
assert( strcmp(board573579376, 
".2.......\n"
"..2......\n"
".........\n"
"6........\n"
"..1......\n"
".3.......\n"
".....5...\n"
"....4.1..\n"
".........\n"
"..16.....\n"
".........\n"
".......2.\n"
".......5.\n") == 0);
free(board573579376);
board573579376 = NULL;
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board825022758 = gamma_board(board);
assert( board825022758 != NULL );
assert( strcmp(board825022758, 
".2.......\n"
"..2......\n"
"...3.....\n"
"6........\n"
"..1......\n"
".3.......\n"
".....5...\n"
"....4.1..\n"
"...4.....\n"
"..16.....\n"
".........\n"
".......2.\n"
".......5.\n") == 0);
free(board825022758);
board825022758 = NULL;
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 103 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );


char* board199824866 = gamma_board(board);
assert( board199824866 != NULL );
assert( strcmp(board199824866, 
".2.......\n"
"..2.....1\n"
"...3.....\n"
"6.......4\n"
"..1.3....\n"
".32......\n"
".....5...\n"
"....4.1..\n"
"...4.....\n"
"..16.....\n"
".1.......\n"
".......2.\n"
".......5.\n") == 0);
free(board199824866);
board199824866 = NULL;
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_free_fields(board, 4) == 88 );
assert( gamma_golden_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board524790228 = gamma_board(board);
assert( board524790228 != NULL );
assert( strcmp(board524790228, 
".2...4...\n"
"..25....1\n"
".6.3.....\n"
"6......54\n"
".41.3....\n"
".32......\n"
"...2.5...\n"
"1...421..\n"
"...4..6..\n"
"..16.....\n"
".1....5..\n"
"....2.45.\n"
".......5.\n") == 0);
free(board524790228);
board524790228 = NULL;
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );


char* board639237491 = gamma_board(board);
assert( board639237491 != NULL );
assert( strcmp(board639237491, 
".2...4...\n"
"..256...1\n"
".6.3.....\n"
"6......54\n"
".41.34...\n"
".32.....1\n"
"...2.5...\n"
"1...421..\n"
"...4236..\n"
"..16.....\n"
".1....5..\n"
"...32.45.\n"
".......5.\n") == 0);
free(board639237491);
board639237491 = NULL;
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );


char* board978157724 = gamma_board(board);
assert( board978157724 != NULL );
assert( strcmp(board978157724, 
".21614...\n"
"..256...1\n"
".6.3...23\n"
"6..3...54\n"
".41.34...\n"
".32.3..61\n"
"...2.52..\n"
"1...4215.\n"
"...4236.4\n"
"..16.42..\n"
"514..555.\n"
"1..32.41.\n"
".6..5..5.\n") == 0);
free(board978157724);
board978157724 = NULL;
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );


char* board385553575 = gamma_board(board);
assert( board385553575 != NULL );
assert( strcmp(board385553575, 
".21614.26\n"
"5.256...1\n"
"36.3.5.23\n"
"64.3...54\n"
"441.341..\n"
".32533.61\n"
"...2.5243\n"
"11..4215.\n"
"...4236.4\n"
".516.42..\n"
"514.25553\n"
"14.32.41.\n"
"26..5..5.\n") == 0);
free(board385553575);
board385553575 = NULL;
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board380524522 = gamma_board(board);
assert( board380524522 != NULL );
assert( strcmp(board380524522, 
".21614.26\n"
"5.256...1\n"
"36.3.5.23\n"
"64.3...54\n"
"441.341..\n"
".32533.61\n"
"...2.5243\n"
"11..4215.\n"
"55.4236.4\n"
"5516.42.6\n"
"514.25553\n"
"14.32.41.\n"
"26.55.35.\n") == 0);
free(board380524522);
board380524522 = NULL;
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );


char* board951123352 = gamma_board(board);
assert( board951123352 != NULL );
assert( strcmp(board951123352, 
".21614.26\n"
"5.256...1\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441.341..\n"
".32533.61\n"
"...2.5243\n"
"11..4215.\n"
"55.4236.4\n"
"5516.42.6\n"
"514.25553\n"
"14.32.41.\n"
"26.55.35.\n") == 0);
free(board951123352);
board951123352 = NULL;
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );


char* board413688848 = gamma_board(board);
assert( board413688848 != NULL );
assert( strcmp(board413688848, 
".21614226\n"
"5.256...1\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441.341..\n"
".32533161\n"
"...2.5243\n"
"115.4215.\n"
"55.4236.4\n"
"5514.42.6\n"
"514.25553\n"
"34.32.41.\n"
"26.55.35.\n") == 0);
free(board413688848);
board413688848 = NULL;
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );


char* board765300134 = gamma_board(board);
assert( board765300134 != NULL );
assert( strcmp(board765300134, 
".21614226\n"
"562564.21\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441.341.2\n"
".32533161\n"
"...2.5243\n"
"115.4215.\n"
"55.4236.4\n"
"5514.42.6\n"
"516.25553\n"
"34.32.41.\n"
"26.55.35.\n") == 0);
free(board765300134);
board765300134 = NULL;
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );


char* board986978937 = gamma_board(board);
assert( board986978937 != NULL );
assert( strcmp(board986978937, 
".21614226\n"
"562564.21\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441.341.2\n"
".32533161\n"
"...2.5243\n"
"115.4215.\n"
"55.423664\n"
"5514.42.6\n"
"516.25553\n"
"34.32.41.\n"
"26.55.35.\n") == 0);
free(board986978937);
board986978937 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );


char* board851465442 = gamma_board(board);
assert( board851465442 != NULL );
assert( strcmp(board851465442, 
".21614226\n"
"562564.21\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441.341.2\n"
".32533161\n"
"...2.5243\n"
"115.4215.\n"
"55.423664\n"
"5514.42.6\n"
"516.25553\n"
"34.32.41.\n"
"26.55.35.\n") == 0);
free(board851465442);
board851465442 = NULL;
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board567036380 = gamma_board(board);
assert( board567036380 != NULL );
assert( strcmp(board567036380, 
".21614226\n"
"562564.21\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441434152\n"
".32533161\n"
"3.12.5243\n"
"11544215.\n"
"555423664\n"
"5514.42.6\n"
"516.25553\n"
"34.32.41.\n"
"26555.35.\n") == 0);
free(board567036380);
board567036380 = NULL;
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );


char* board666278192 = gamma_board(board);
assert( board666278192 != NULL );
assert( strcmp(board666278192, 
".21614226\n"
"562564.21\n"
"36.3.5.23\n"
"64.3.4.54\n"
"441434152\n"
".32533161\n"
"3112.5243\n"
"115442156\n"
"555423664\n"
"551464256\n"
"516625553\n"
"34.32.41.\n"
"26555.35.\n") == 0);
free(board666278192);
board666278192 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 3) == 0 );


gamma_delete(board);

    return 0;
}
