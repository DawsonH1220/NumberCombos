#include <iostream> //including things such as std::cout, std::cin, and std::endl.
#include <vector>
int main(){
    std::vector<int> num1{}; //The vector
    std::cout << "How many numbers would you like to enter?" << std::endl; //prompting user
    int num2{}; //number of items in vector
    std::cin >> num2; //taking user input
    std::cout << "Enter " << num2 << " numbers" << std::endl;//another prompt
    for(int i{1}; i <= num2; i++){ //taking number input through loop
        int data{};
        std::cin >> data;
        num1.push_back(data);
    }
    for(int i{}; i < num1.size(); i++){ //Making possible combos
        for(int f{}; f < num1.size(); f++){
            if(i != f){//check to make sure it's not same number
                std::cout << num1[i] << ", " << num1[f] << std::endl; //outputs number combo
            }
        }
    }
    return 0;
}