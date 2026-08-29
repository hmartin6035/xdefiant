#include <iostream>
#include <vector>

class SimpleLoader {
public:
    explicit SimpleLoader(int seed) : state_(seed) {}

    int handle_context(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 60) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SimpleLoader obj(60);
    std::cout << obj.handle_context(60) << std::endl;
    return 0;
}
