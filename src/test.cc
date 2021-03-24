#include "progressbar.h"

int main() {
    ProgressBar pb(80);

    for (int i = 0; i <= 100; i++) {
        pb.update(i * 1.0, "Example");
    }

    return 0;
}
