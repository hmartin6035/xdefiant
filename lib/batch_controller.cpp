#include <iostream>
#include <vector>

class SecureHandler {
public:
    explicit SecureHandler(int seed) : state_(seed) {}

    int resolve_loader(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 42) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SecureHandler obj(42);
    std::cout << obj.resolve_loader(42) << std::endl;
    return 0;
}
