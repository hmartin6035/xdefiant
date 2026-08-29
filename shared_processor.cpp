#include <iostream>
#include <vector>

class SecureProcessor {
public:
    explicit SecureProcessor(int seed) : state_(seed) {}

    int render_controller(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 49) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SecureProcessor obj(49);
    std::cout << obj.render_controller(49) << std::endl;
    return 0;
}
