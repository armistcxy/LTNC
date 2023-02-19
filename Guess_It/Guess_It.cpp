#include <iostream>
#include <cstdlib>
#include <time.h> 

int generate_random_number()
{
    srand (time(NULL));
    int random_number = rand() % 100 + 1;
    return random_number;
}

int guess_input()
{
    int n;
    std::cout << "Nhap vao so ban doan (so can tim nho hon hoac bang 100 va lon hon 0) : ";
    std::cin >> n;
    std::cout << '\n';
    return n;
}

void screen_ouput(int guess_input_number, int random_number)
{
    if (guess_input_number < random_number){
        std::cout << "So cua ban nho hon so can tim\n";
    }
    else if (guess_input_number > random_number){
        std::cout << "So cua ban lon hon so can tim\n";
    }
    else std::cout << "So cua ban bang so can tim\n";
}
int main(){
    int secret_number = generate_random_number();
    int guess_number;

    while (true){
        guess_number = guess_input();
        screen_ouput(guess_number, secret_number);
        if (guess_number == secret_number)
        {
            break;
        }
    }
    return 0;
}
