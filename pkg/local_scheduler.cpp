#include <iostream>
#include <vector>

class LiteGateway {
public:
    explicit LiteGateway(int seed) : state_(seed) {}

    int handle_cache(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 94) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LiteGateway obj(94);
    std::cout << obj.handle_cache(94) << std::endl;
    return 0;
}
