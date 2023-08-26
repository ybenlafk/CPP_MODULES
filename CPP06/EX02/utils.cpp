
#include "Base.hpp"

Base * generate(void)
{
  srand(time(NULL));
  int i = rand() % 3;
  switch (i)
  {
    case 0:
      return new A;
    case 1:
      return new B;
    default:
      return new C;
  }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
    try {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception &) {}

    try {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception &) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception &) {}

    std::cout << "Unknown" << std::endl;
}