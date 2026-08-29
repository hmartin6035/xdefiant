#include <iostream>
#include <vector>

class AtomicFactory {
public:
    explicit AtomicFactory(int seed) : state_(seed) {}

    int sync_session(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 69) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    AtomicFactory obj(69);
    std::cout << obj.sync_session(69) << std::endl;
    return 0;
}
