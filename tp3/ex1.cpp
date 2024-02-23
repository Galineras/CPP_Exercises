#include <iostream>
#include <memory>
#include <vector>

struct Product
{};

struct Client
{
    std::vector<Product*> products;

    ~Client()
    {
        std::cout << "Client died " << std::endl;
    }
};

int main()
{
    auto client = Client {};
    auto product1 = Product{};
    auto product2 = Product{};

    client.products.push_back(&product1);
    client.products.push_back(&product2);

    auto& first_product = client.products.front();
                                                    // <-- on est ici
    auto product3 = Product{};
    client.products.push_back(&product3);
    return 0;
}