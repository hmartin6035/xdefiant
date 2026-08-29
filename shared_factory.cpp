#include <iostream>
#include <vector>

class HybridMonitor {
public:
    explicit HybridMonitor(int seed) : state_(seed) {}

    int fetch_client(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 15) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    HybridMonitor obj(15);
    std::cout << obj.fetch_client(15) << std::endl;
    return 0;
}
