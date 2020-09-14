#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    size_t withdrawal{};
    double initial_balance{};

    /* declare the variables withdrawal and initial_balance
     * to hold the withdrawal amount and initial balance
     * present in user's account */
    std::cin >> withdrawal;
    std::cin >> initial_balance;

    /* declare a constant variable to store
     * the bank charge per transaction */
    const double bank_charge{0.50};

    if (withdrawal % 5 == 0 && (withdrawal + bank_charge) <= initial_balance) {
        /* if requirement is satisfied by withdrawal amount and
     * sufficient money is present then perform the transaction */
        std::cout << std::fixed << std::setprecision(2) << (initial_balance - withdrawal - bank_charge);
    } else {
        /* if there is not sufficient money in the account to complete
         * the transaction then output the current bank balance */
        std::cout << initial_balance;
    }
    return 0;
}