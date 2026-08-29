#include <iostream>
#include <vector>

class FastProcessor {
public:
    explicit FastProcessor(int seed) : state_(seed) {}

    int fetch_client(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 13) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    FastProcessor obj(13);
    std::cout << obj.fetch_client(13) << std::endl;
    return 0;
}
