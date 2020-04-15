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
uuid: 178463592
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_golden_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_free_fields(board, 9) == 51 );


char* board552872109 = gamma_board(board);
assert( board552872109 != NULL );
assert( strcmp(board552872109, 
".....47..\n"
"...5....9\n"
"........8\n"
"......9..\n"
"...73....\n"
".....22..\n"
".....1.8.\n") == 0);
free(board552872109);
board552872109 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );


char* board202540989 = gamma_board(board);
assert( board202540989 != NULL );
assert( strcmp(board202540989, 
".....47..\n"
"...5....9\n"
"........8\n"
".....19..\n"
"...73....\n"
".....22..\n"
".....1.8.\n") == 0);
free(board202540989);
board202540989 = NULL;
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );


char* board328734705 = gamma_board(board);
assert( board328734705 != NULL );
assert( strcmp(board328734705, 
"4....47..\n"
"...5....9\n"
".....3.58\n"
".....19..\n"
"...73...2\n"
".....22..\n"
".....1.8.\n") == 0);
free(board328734705);
board328734705 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 2) == 41 );


char* board463004195 = gamma_board(board);
assert( board463004195 != NULL );
assert( strcmp(board463004195, 
"4.7..478.\n"
"...5....9\n"
".9...3.58\n"
"6....19..\n"
"...73...2\n"
".....22..\n"
"..8..1.8.\n") == 0);
free(board463004195);
board463004195 = NULL;
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_move(board, 7, 0, 2) == 0 );


char* board561841653 = gamma_board(board);
assert( board561841653 != NULL );
assert( strcmp(board561841653, 
"4.7..4783\n"
"..3515939\n"
"699..3158\n"
"6.2..191.\n"
"...336..2\n"
".4.1.22.7\n"
".488.1.8.\n") == 0);
free(board561841653);
board561841653 = NULL;
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );


char* board402509496 = gamma_board(board);
assert( board402509496 != NULL );
assert( strcmp(board402509496, 
"4.7..4783\n"
".83515939\n"
"699..3158\n"
"6.2..191.\n"
".82336..2\n"
".4.1.22.7\n"
".488.1.8.\n") == 0);
free(board402509496);
board402509496 = NULL;
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );


char* board992183494 = gamma_board(board);
assert( board992183494 != NULL );
assert( strcmp(board992183494, 
"4.7.54783\n"
".83515939\n"
"699..3158\n"
"6.23.191.\n"
".82336..2\n"
".4.1.22.7\n"
"9488.1.8.\n") == 0);
free(board992183494);
board992183494 = NULL;
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );


char* board967840442 = gamma_board(board);
assert( board967840442 != NULL );
assert( strcmp(board967840442, 
"4.7.54783\n"
".83515939\n"
"6991.3158\n"
"6.23.191.\n"
".82336..2\n"
".4.1.22.7\n"
"9488.198.\n") == 0);
free(board967840442);
board967840442 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );


char* board125990693 = gamma_board(board);
assert( board125990693 != NULL );
assert( strcmp(board125990693, 
"4.7.54783\n"
".83515939\n"
"6991.3158\n"
"6.23.191.\n"
".89336..2\n"
".4.1.22.7\n"
"94881198.\n") == 0);
free(board125990693);
board125990693 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_golden_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_golden_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );


gamma_delete(board);

    return 0;
}
