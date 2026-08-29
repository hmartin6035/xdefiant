#include <iostream>
#include <vector>

class LocalManager {
public:
    explicit LocalManager(int seed) : state_(seed) {}

    int parse_factory(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 17) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LocalManager obj(17);
    std::cout << obj.parse_factory(17) << std::endl;
    return 0;
}
