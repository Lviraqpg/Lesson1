#include <iostream>





int main() {

    std::string play_[] = {"_Play_", "Settings", "Exit"};
    std::string settings_[] = {"Play", "_Settings_", "Exit"};
    std::string exit_[] = {"Play", "Settings", "_Exit_"};

    int a = 0;

    while (true) {

        if (a == 0) {
            for (int i = 0; i < 3; i++) {
                std::cout << play_[i]<<std::endl;
            }
        }
        if (a == 1) {
            for (int i = 0; i < 3; i++) {
                std::cout << settings_[i]<<std::endl;
            }
        }
        if (a == 2) {
            for (int i = 0; i < 3; i++) {
                std::cout << exit_[i]<<std::endl;
            }

        }
        char key;
        std::cin >> key;

        if (key == 'w') {
            if(a==0){
                a=3;
            }
            a--;
        } else if (key == 's') {
            if(a==2){
                a=-1;
            }
            a++;
        } else
            break;

    }
}





