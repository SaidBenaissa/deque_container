// Include necessary libraries
#include <deque>
#include <iostream>
#include <string>
#include <utility>

// Customer class represents a bank customer with a name and a service time
class Customer {
public:
    // Constructor initializes name and service_time using the member initializer list
    Customer(std::string customer_name, int service_duration)
        : name(std::move(customer_name)), service_time(service_duration) {
        std::cout << "Customer " << name << " created." << std::endl;
    }

    // Destructor
    virtual ~Customer() {
        std::cout << "Customer " << name << " destroyed." << std::endl;
    }

    // Getter functions for name and service time
    [[nodiscard]] std::string getName() const {
        return name;
    }

    [[nodiscard]] int getServiceTime() const {
        return service_time;
    }

private:
    std::string name;
    int service_time;
};

int main() {
    std::deque<Customer> waiting_line;

    // Add customers to the waiting line
    waiting_line.emplace_back("Alice", 5);
    waiting_line.emplace_back("Bob", 3);
    waiting_line.emplace_back("Charlie", 2);
    waiting_line.emplace_back("Dave", 1);
    waiting_line.emplace_back("Eve", 4);

    // Process customers
    while (!waiting_line.empty()) {
        // Get the next customer in line
        const Customer &next_customer = waiting_line.front();

        // Serve the customer and print their information
        std::cout << "Serving " << next_customer.getName()
                  << " for " << next_customer.getServiceTime() << " minutes." << std::endl;

        // Remove the customer from the waiting line
        waiting_line.pop_front();

        // Print the remaining customers in the waiting line
        for (const auto &customer : waiting_line) {
            std::cout << customer.getName() << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
