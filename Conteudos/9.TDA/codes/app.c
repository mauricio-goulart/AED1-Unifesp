#include <stdio.h>
#include "float_vector.h"

int main()
{
     FloatVector *vec = create(10);

     print(vec);

     append(vec, 1.0);
     append(vec, 2.0);
     append(vec, 4.0);
     append(vec, 5.0);


     print(vec);

     lemove(vec, 1);

     print(vec);

     destroy(&vec);
}