#include <iostream>

#include <fmt/format.h>

#include <some_header.hpp>

int main() {
  constexpr auto kVal = ips::some::ns::SomeType{};
  std::cout << "Hello, World! Val = " << kVal << '\n';
  fmt::print("Hello, World! Val = '{}'", kVal);
  return 0;
}
