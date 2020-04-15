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
uuid: 893149308
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );


char* board650257677 = gamma_board(board);
assert( board650257677 != NULL );
assert( strcmp(board650257677, 
".............\n"
".............\n"
".............\n"
"...1.........\n"
".............\n"
".............\n"
".............\n"
"...........2.\n"
".............\n"
".........2...\n") == 0);
free(board650257677);
board650257677 = NULL;
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_free_fields(board, 5) == 102 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );


char* board878827974 = gamma_board(board);
assert( board878827974 != NULL );
assert( strcmp(board878827974, 
"...34.225....\n"
"5..331.......\n"
".......14322.\n"
"...1....1....\n"
"1.5..........\n"
".3...5......4\n"
"4...3....5...\n"
".2225.....321\n"
".4....4.2....\n"
"....1534.2...\n") == 0);
free(board878827974);
board878827974 = NULL;
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );


char* board541623338 = gamma_board(board);
assert( board541623338 != NULL );
assert( strcmp(board541623338, 
"...34.225....\n"
"5..331.......\n"
".......14322.\n"
"...1....1....\n"
"1.5..........\n"
".3...5......4\n"
"4...3....5..4\n"
".2225.....321\n"
".4....4.2....\n"
"....1534.2...\n") == 0);
free(board541623338);
board541623338 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );


char* board157722436 = gamma_board(board);
assert( board157722436 != NULL );
assert( strcmp(board157722436, 
".2.34.225....\n"
"5..331.......\n"
".......14322.\n"
"...1....1....\n"
"1.5..........\n"
".3...5......4\n"
"4...3....5..4\n"
".2225....5321\n"
".4....4.2....\n"
"....1534.2...\n") == 0);
free(board157722436);
board157722436 = NULL;
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );


char* board824916477 = gamma_board(board);
assert( board824916477 != NULL );
assert( strcmp(board824916477, 
"52.34.225....\n"
"5..331..5....\n"
"...1..114322.\n"
"1.51....1.2..\n"
"1.5..3.......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4..5321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board824916477);
board824916477 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );


char* board722154824 = gamma_board(board);
assert( board722154824 != NULL );
assert( strcmp(board722154824, 
"52.341225....\n"
"5..331..5....\n"
"...1..114322.\n"
"1.51....1.2..\n"
"1.5..3.......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4..5321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board722154824);
board722154824 = NULL;
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );


char* board573428989 = gamma_board(board);
assert( board573428989 != NULL );
assert( strcmp(board573428989, 
"52.341225....\n"
"5..331..5....\n"
"...1..114322.\n"
"1.51....1.2..\n"
"1.5..3.......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4..5321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board573428989);
board573428989 = NULL;
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );


char* board820900850 = gamma_board(board);
assert( board820900850 != NULL );
assert( strcmp(board820900850, 
"52.341225....\n"
"5..331..5....\n"
"...1..114322.\n"
"1.51....1.2..\n"
"1.5..3.......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4.55321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board820900850);
board820900850 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );


char* board763178598 = gamma_board(board);
assert( board763178598 != NULL );
assert( strcmp(board763178598, 
"52.341225....\n"
"5..331..5....\n"
"..11..114322.\n"
"1.51....1.2..\n"
"1.5..33......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4.55321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board763178598);
board763178598 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 9, 3) == 0 );


char* board668838626 = gamma_board(board);
assert( board668838626 != NULL );
assert( strcmp(board668838626, 
"52.341225....\n"
"5..331..5....\n"
"..11..114322.\n"
"1.51....1.2..\n"
"1.5..33......\n"
".3...5......4\n"
"42..3....5..4\n"
".2225.4.55321\n"
".4...54.2....\n"
"44..1534.2...\n") == 0);
free(board668838626);
board668838626 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );


char* board299374046 = gamma_board(board);
assert( board299374046 != NULL );
assert( strcmp(board299374046, 
"52.3412255...\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.51....1.2..\n"
"1.5..33......\n"
".3..35......4\n"
"42..3....5..4\n"
".2225.4.55321\n"
".42..54.2..2.\n"
"44..1534.2...\n") == 0);
free(board299374046);
board299374046 = NULL;
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );


char* board676921564 = gamma_board(board);
assert( board676921564 != NULL );
assert( strcmp(board676921564, 
"52.34122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511...1.2..\n"
"1.5..33......\n"
".3..35......4\n"
"42.23..1.5..4\n"
".222554.55321\n"
".42..54.2..2.\n"
"44..1534.2...\n") == 0);
free(board676921564);
board676921564 = NULL;
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );


char* board436082453 = gamma_board(board);
assert( board436082453 != NULL );
assert( strcmp(board436082453, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511...1.2..\n"
"1.5..333.....\n"
".3..35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board436082453);
board436082453 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 11, 1) == 0 );


char* board886190170 = gamma_board(board);
assert( board886190170 != NULL );
assert( strcmp(board886190170, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511...1.2..\n"
"1.5..333.....\n"
".3..35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board886190170);
board886190170 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );


char* board415762019 = gamma_board(board);
assert( board415762019 != NULL );
assert( strcmp(board415762019, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511...1.2..\n"
"1.5..333.....\n"
".3..35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board415762019);
board415762019 = NULL;
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );


char* board356447843 = gamma_board(board);
assert( board356447843 != NULL );
assert( strcmp(board356447843, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511..31.2..\n"
"1.5..333.....\n"
".35.35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board356447843);
board356447843 = NULL;
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 8, 12) == 0 );


char* board618145961 = gamma_board(board);
assert( board618145961 != NULL );
assert( strcmp(board618145961, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511..31.2..\n"
"1.5..333.....\n"
".35.35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board618145961);
board618145961 = NULL;
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_golden_move(board, 5, 9, 4) == 0 );


char* board835862287 = gamma_board(board);
assert( board835862287 != NULL );
assert( strcmp(board835862287, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511..31.2..\n"
"1.5..333.....\n"
".35.35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board835862287);
board835862287 = NULL;
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 0, 2) == 0 );


char* board619486924 = gamma_board(board);
assert( board619486924 != NULL );
assert( strcmp(board619486924, 
"52234122555..\n"
"5..3311.5....\n"
"..11..114322.\n"
"1.511..31.2..\n"
"1.5..333.....\n"
".35.35......4\n"
"42.23..1.5..4\n"
"5222554.55321\n"
".42..54.2552.\n"
"44..1534.2...\n") == 0);
free(board619486924);
board619486924 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 20 );


gamma_delete(board);

    return 0;
}
