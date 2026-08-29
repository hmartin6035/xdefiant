#include <iostream>
#include <vector>

class AtomicAdapter {
public:
    explicit AtomicAdapter(int seed) : state_(seed) {}

    int encode_resolver(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 44) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AtomicAdapter obj(44);
    std::cout << obj.encode_resolver(44) << std::endl;
    return 0;
}
