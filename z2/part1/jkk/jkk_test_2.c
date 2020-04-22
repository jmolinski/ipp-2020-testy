#ifdef NDEBUG
#undef NDEBUG
#endif

#include "gamma.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//golden_move performance test
int main() {
  gamma_t *g;

  //g = gamma_new(5010, 150010, -1, 3);
  g = gamma_new(5010, 50010, 500000, 3);
  assert(g != NULL);

  for(int i = 0; i < 1000; ++i){
    for(int x = 0; x < 1000; ++x){
        assert(gamma_move(g, 1, 5+i,5+x));
        assert(gamma_move(g, 1, 1009+i,5+x));
    }
  }

  int it = 1;
  for(int i = 0; i < 1000; i += 2){
    assert(gamma_move(g, 1, 4, 5+i));
    assert(gamma_move(g, 1, 3, 5+i));
    assert(gamma_move(g, 1, 5+i, 4));
    assert(gamma_move(g, 1, 5+i, 3));
    assert(gamma_move(g, 1, 1006, 5+i));
    assert(gamma_move(g, 1, 1005, 5+i));
    assert(gamma_move(g, 1, 5+i, 1006));
    assert(gamma_move(g, 1, 5+i, 1005));
  }

  for(int i = 0; i < 1000; i += 2){
    assert(gamma_golden_move(g, ++it, 4, 5+i));
    assert(gamma_golden_move(g, ++it, 3, 5+i));
    assert(gamma_golden_move(g, ++it, 5+i, 4));
    assert(gamma_golden_move(g, ++it, 5+i, 3));
    assert(gamma_golden_move(g, ++it, 1005, 5+i));
    assert(gamma_golden_move(g, ++it, 1006, 5+i));
    assert(gamma_golden_move(g, ++it, 5+i, 1005));
    assert(gamma_golden_move(g, ++it, 5+i, 1006));
  }

  fputs("part 1 done\n",stderr);
  fflush(stderr);

    for(int i = 1; i < 5000; i += 2){
        for(int x = 0; x < 50; ++x){
            assert(gamma_move(g, 1, 5+i, 1005+x));
        }
        for(int x = 0; x < 50; ++x){
            assert(gamma_golden_move(g, ++it, 5+i, 1005+x));
        }
    }

  fputs("part 2 done\n",stderr);
  fflush(stderr);

    assert(gamma_move(g, 1, 1005, 6));
    assert(gamma_move(g, 1, 1006, 6));
    assert(gamma_move(g, 1, 1007, 6));
    assert(gamma_move(g, 1, 1008, 6));
    assert(!gamma_move(g, 1, 5010, 5000));
    assert(gamma_move(g, 1, 4999, 4999));
    assert(gamma_move(g, 1, 4999, 4997));

    /* for(int i = 0; i < 150000; ++i){ */
    /*     assert(gamma_move(g, 1, 1007, 7+i)); */
    /*     assert(!gamma_golden_move(g, ++it, 1008, 6)); */
    /* } */

    for(int i = 0; i < 100000; ++i){
        assert(i < 50000 ? gamma_move(g, 1, 1007, 7+i) : gamma_golden_move(g, ++it, 1007, 50006-(i-50000)));
        assert(!gamma_golden_move(g, ++it, 1008, 6));
    }

  gamma_delete(g);
  return 0;
}
