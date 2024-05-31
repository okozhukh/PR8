//Ініціалізація та оголошення рядків

#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2("World");
    std::string str3;
    str3 = str1 + " " + str2;

    std::cout << str3 << std::endl;  // Output: Hello World
    return 0;
}

//Доступ до символів у рядку

std::string str = "Hello";
char ch = str[1];  // 'e'

//Розмір та довжина рядка

std::string str = "Hello";
size_t length = str.size();  // 5
size_t length_alt = str.length();  // 5

//Конкатенація рядків

std::string str1 = "Hello";
std::string str2 = "World";
std::string str3 = str1 + " " + str2;  // "Hello World"

//Порівняння рядків

std::string str1 = "Hello";
std::string str2 = "World";

if (str1 == str2) {
    std::cout << "Strings are equal." << std::endl;
} else {
    std::cout << "Strings are not equal." << std::endl;
}

//Пошук у рядках

std::string str = "Hello World";
size_t pos = str.find("World");

if (pos != std::string::npos) {
    std::cout << "Found at position: " << pos << std::endl;
} else {
    std::cout << "Not found" << std::endl;
}

//Вирізання підрядків

std::string str = "Hello World";
std::string substr = str.substr(6, 5);  // "World"

//Вставка та видалення символів

std::string str = "Hello World";
str.insert(5, ",");  // "Hello, World"
str.erase(5, 1);     // "Hello World"

//Заміна підрядків

std::string str = "Hello World";
str.replace(6, 5, "Everyone");  // "Hello Everyone"

//Перетворення рядків на числа та навпаки

std::string str = "123";
int num = std::stoi(str);  // 123

int num2 = 456;
std::string str2 = std::to_string(num2);  // "456"

//Перебір символів у рядку

std::string str = "Hello";
for (char c : str) {
    std::cout << c << std::endl;
}

//Зчитування рядка з вводу

std::string input;
std::getline(std::cin, input);
std::cout << "You entered: " << input << std::endl;

