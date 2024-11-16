#include <thread>
#include <vector>


int main() {
  unsigned i {};
  std::vector<std::thread> threads;
  for (auto idx = 0; idx < 2; ++idx) {
    threads.emplace_back([&i] mutable noexcept{ ++i; });
  }
  for (auto& thread : threads) {
    thread.join();
    new int{};
  }
  return 0;
}
