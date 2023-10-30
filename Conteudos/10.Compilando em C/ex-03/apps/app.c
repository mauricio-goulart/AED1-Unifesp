#include <stdio.h>
#include "float_vector.h"

int main()
{
    FloatVector *vector = create(10);

    append(vector, 4.00);


    print(vector);

    destroy(&vector);


    return 0;

}