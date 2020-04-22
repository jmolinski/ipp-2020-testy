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
uuid: 635179994
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 4, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 64 );


char* board890803450 = gamma_board(board);
assert( board890803450 != NULL );
assert( strcmp(board890803450, 
"..2.....3...\n"
"............\n"
".4..........\n"
"1..........1\n"
".1..........\n"
"....32......\n") == 0);
free(board890803450);
board890803450 = NULL;
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );


char* board204358364 = gamma_board(board);
assert( board204358364 != NULL );
assert( strcmp(board204358364, 
"..2.....3...\n"
"............\n"
"24.3........\n"
"1...2....1.1\n"
".1...3.4....\n"
"....32......\n") == 0);
free(board204358364);
board204358364 = NULL;
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board252881173 = gamma_board(board);
assert( board252881173 != NULL );
assert( strcmp(board252881173, 
".321....3...\n"
".....2.2....\n"
"24.33.......\n"
"1...24...1.1\n"
".1...3.4...4\n"
".2..32......\n") == 0);
free(board252881173);
board252881173 = NULL;
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board575011169 = gamma_board(board);
assert( board575011169 != NULL );
assert( strcmp(board575011169, 
".3214...3...\n"
".3.2.312...4\n"
"24.33.......\n"
"1.1124...1.1\n"
".134.3.4...4\n"
".2..32......\n") == 0);
free(board575011169);
board575011169 = NULL;
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );


char* board246927157 = gamma_board(board);
assert( board246927157 != NULL );
assert( strcmp(board246927157, 
"33214...3...\n"
".3.2.312...4\n"
"24.33.......\n"
"1.1124...1.1\n"
".134.3.4...4\n"
".2..32....1.\n") == 0);
free(board246927157);
board246927157 = NULL;
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );


char* board370037684 = gamma_board(board);
assert( board370037684 != NULL );
assert( strcmp(board370037684, 
"3321444.3.43\n"
"13.23312..34\n"
"24.3342.41.1\n"
"121124..11.1\n"
".134.3.4...4\n"
"122.32.3..11\n") == 0);
free(board370037684);
board370037684 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );


char* board763404162 = gamma_board(board);
assert( board763404162 != NULL );
assert( strcmp(board763404162, 
"3321444.3.43\n"
"13.23312..34\n"
"24.3342.41.1\n"
"121124..11.1\n"
".134.3.4...4\n"
"122.32.3.211\n") == 0);
free(board763404162);
board763404162 = NULL;
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );


char* board213070064 = gamma_board(board);
assert( board213070064 != NULL );
assert( strcmp(board213070064, 
"332144413.43\n"
"13.23312..34\n"
"2413342.41.1\n"
"121124..1111\n"
".134.3.4...4\n"
"122.3223.211\n") == 0);
free(board213070064);
board213070064 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );


char* board526956180 = gamma_board(board);
assert( board526956180 != NULL );
assert( strcmp(board526956180, 
"332144413.43\n"
"13423312..34\n"
"2423342.41.1\n"
"121124.11111\n"
".134.3.4...4\n"
"122.3223.211\n") == 0);
free(board526956180);
board526956180 = NULL;
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );


gamma_delete(board);

    return 0;
}
