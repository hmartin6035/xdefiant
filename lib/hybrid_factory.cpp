#include <iostream>
#include <vector>

class SmartProcessor {
public:
    explicit SmartProcessor(int seed) : state_(seed) {}

    int run_client(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 25) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SmartProcessor obj(25);
    std::cout << obj.run_client(25) << std::endl;
    return 0;
}
