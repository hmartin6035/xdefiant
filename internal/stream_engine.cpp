#include <iostream>
#include <vector>

class LocalAdapter {
public:
    explicit LocalAdapter(int seed) : state_(seed) {}

    int build_worker(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 65) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    LocalAdapter obj(65);
    std::cout << obj.build_worker(65) << std::endl;
    return 0;
}
