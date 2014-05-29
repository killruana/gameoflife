#include <stdio.h>
#include <stdlib.h>

#include "gol.h"

int main(int argc, char * argv[])
{
    struct world * world = world_create(10, 10);
    if (!world) {
        fprintf(stderr, "error: cannot create world\n");
        return EXIT_FAILURE;
    }

    world_populate(world, 0.5f);

    for (unsigned int i = 0; i < 10; ++i) {
        world_update(world);
        world_print(world);
    }

    world_free(world);

    return EXIT_SUCCESS;
}

