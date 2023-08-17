

#include "Serializer.hpp"

int main()
{
    Serializer ser;
    Data *data1 = new Data;

    data1->i = 42;
    uintptr_t p = ser.serialize(data1);
    Data *data2 = ser.deserialize(p);

    std::cout << data1->i << std::endl;
    std::cout << data2->i << std::endl;
    return (0);
}