#include <iostream>
#include <some_header.hpp>

int main() {
  constexpr auto kVal = ips::some::ns::SomeType{};
  std::cout << "Hello, World! Val = " << kVal << '\n';
  return 0;
}
