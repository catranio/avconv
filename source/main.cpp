#include <fmt/format.h>

#include <iostream>
#include <some_header.hpp>

int main() {
  constexpr auto kVal = ips::some::ns::SomeType{};
  std::cout << "Hello, World! Val = " << kVal << '\n';
  fmt::print("Hello, World! Val = '{}'", kVal);
  return 0;
}

// Открыть файл
// записать в него
//  1) some text
//  2) some text
// закрыть
// Открыть файл
// считать из  файла
// закрыть файл