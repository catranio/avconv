#include <fmt/format.h>

#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string folder;
  std::cout << "enter file name" << '\n';
  std::cin >> folder;
  std::cout << "enter 1 if write or 2 if read" << '\n';
  std::fstream file;
  std::cout << std::boolalpha;
  char type;
  std::cin >> type;
  if (type == '1') {
    file.open(folder, std::ios::out | std::ios::in | std::ios::app);
    if (!file.is_open()) {
      std::cout << "file.is_open() = " << file.is_open() << '\n';
      std::cout << "file.good() = " << file.good() << '\n';
    }

    if (file.is_open()) {
      std::cout << "file.is_open() = " << file.is_open() << '\n';
      std::cout << "file.good() = " << file.good() << '\n';
      std::cout << "Type something" << '\n';
      std::string tmp;
      std::cin >> tmp;
      const char* ptr = tmp.c_str();
      file.write(ptr, tmp.size());
    }
    file.close();
  }
  if (type == '2') {
    file.open(folder, std::ios::in);
    if (!file.is_open()) {
      std::cout << "file.is_open() = " << file.is_open() << '\n';
      std::cout << "file.good() = " << file.good() << '\n';
    }

    if (file.is_open()) {
      std::cout << "file.is_open() = " << file.is_open() << '\n';
      std::cout << "file.good() = " << file.good() << '\n';
      std::cout << "file contain: " << file.rdbuf() << '\n';
    }
    file.close();
  }

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