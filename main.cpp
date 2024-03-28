#include <iostream>
#include <cassert>
#include "Sorting.h"
#include "Selection.h"
#include "Insertion.h"

int main() {
    std::vector<char> a = {'S', 'O', 'R', 'T', 'E', 'X', 'A', 'M', 'P', 'L', 'E'};
//    Selection::sort(a);
    Insertion::sort(a);
    assert(Sorting::isSorted(a));
    Sorting::show(a);
    return 0;
}
