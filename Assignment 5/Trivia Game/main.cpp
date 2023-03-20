#include "Trivia.h"
#include <iostream>
using namespace std;

int main() {
    // Tạo mảng câu hỏi
    CauHoi cauHoi[10];
    cauHoi[0] = CauHoi("Ai là người đầu tiên đặt chân lên Mặt trăng?", "Neil Armstrong", "Buzz Aldrin", "Alan Shepard", "Yuri Gagarin", 1);
    cauHoi[1] = CauHoi("Quốc kỳ của nước nào có hình chữ nhật đỏ trên nền trắng?", "Mỹ", "Phần Lan", "Nhật Bản", "Hoa Kỳ", 3);
    cauHoi[2] = CauHoi("Ai là người phát minh ra đèn đội đầu?", "Thomas Edison", "Alexander Graham Bell", "Benjamin Franklin", "Henry Ford", 1);
    cauHoi[3] = CauHoi("Ai là tác giả của cuốn tiểu thuyết 'The Catcher in the Rye'?", "F. Scott Fitzgerald", "J.D. Salinger", "Ernest Hemingway", "Mark Twain", 2);
    cauHoi[4] = CauHoi("Sông nào là sông dài nhất ở châu Á?", "Sông Hồng", "Sông Dương Tử", "Sông Mekong", "Sông Yangtze", 4);
    cauHoi[5] = CauHoi("Quốc gia nào nằm ở châu Phi?", "Nigeria", "Libya", "Singapore", "Nepal", 1);
    cauHoi[6] = CauHoi("Ai là giám đốc sáng lập của SpaceX?", "Mark Zuckerberg", "Jeff Bezos", "Elon Musk", "Bill Gates", 3);
    cauHoi[7] = CauHoi("Thành phố nào là thủ đô của Pháp?", "Lyon", "Paris", "Nice", "Marseille", 2);
    cauHoi[8] = CauHoi("Bộ phận nào của não được phụ trách việc nhìn?", "Thiểu não", "Đại não", "Vành não", "Quay não", 3);
    cauHoi[9] = CauHoi("Chất dính vào gốc răng được gọi là gì?", "Tartar", "Cavity", "Gingivitis", "Plaque", 4);

    // Khởi tạo số điểm của hai người chơi
    int scorePlayer1 = 0;
    int scorePlayer2 = 0;

    // Thực hiện lượt đối đầu cho hai người chơi
    for (int i = 0; i < 5; i++) {
        // Lượt của người chơi 1
        cout << "Cau hoi " << i+1 << " cho nguoi choi 1:" << endl;
        cout << cauHoi[i].getQuestion() << endl;
        cout << "A. " << cauHoi[i].getAnswer1() << endl;
        cout << "B. " << cauHoi[i].getAnswer2() << endl;
        cout << "C. " << cauHoi[i].getAnswer3() << endl;
        cout << "D. " << cauHoi[i].getAnswer4() << endl;
        char answer;
        cout << "Nhap dap an cua ban: ";
        cin >> answer;
        int player1Answer;
        if (answer == 'A' || answer == 'a') {
            player1Answer = 1;
        } else if (answer == 'B' || answer == 'b') {
            player1Answer = 2;
        } else if (answer == 'C' || answer == 'c') {
            player1Answer = 3;
        } else if (answer == 'D' || answer == 'd') {
            player1Answer = 4;
        }
        if (player1Answer == cauHoi[i].getCorrectAnswer()) {
            scorePlayer1++;
            cout << "Chinh xac! Ban kiem duoc 1 diem!" << endl;
        } else {
            cout << "Sai roi! Dap an dung la " << cauHoi[i].getCorrectAnswer() << "." << endl;
        }

        // Lượt của người chơi 2
        cout << "Cau hoi " << i+1 << " cho nguoi choi 2:" << endl;
        cout << cauHoi[i+5].getQuestion() << endl;
        cout << "A. " << cauHoi[i+5].getAnswer1() << endl;
        cout << "B. " << cauHoi[i+5].getAnswer2() << endl;
        cout << "C. " << cauHoi[i+5].getAnswer3() << endl;
        cout << "D. " << cauHoi[i+5].getAnswer4() << endl;
        cin >> answer;
        int player2Answer;
        if (answer == 'A' || answer == 'a') {
            player2Answer = 1;
        } else if (answer == 'B' || answer == 'b') {
            player2Answer = 2;
        } else if (answer == 'C' || answer == 'c') {
            player2Answer = 3;
        } else if (answer == 'D' || answer == 'd') {
            player2Answer = 4;
        }
        if (player2Answer == cauHoi[i+5].getCorrectAnswer()) {
            scorePlayer2++;
            cout << "Chinh xac! Ban kiem duoc 1 diem!" << endl;
        } else {
            cout << "Sai roi! Dap an dung la " << cauHoi[i+5].getCorrectAnswer() << "." << endl;
        }
    }

    // Tính toán và hiển thị kết quả
    cout << endl << "Ket qua:" << endl;
    cout << "Nguoi choi 1 kiem duoc " << scorePlayer1 << " diem." << endl;
    cout << "Nguoi choi 2 kiem duoc " << scorePlayer2 << " diem." << endl;
    if (scorePlayer1 > scorePlayer2) {
        cout << "Nguoi choi 1 la nguoi chien thang!" << endl;
    } else if (scorePlayer2 > scorePlayer1) {
        cout << "Nguoi choi 2 la nguoi chien thang!" << endl;
    } else {
        cout << "Hai nguoi choi hoa nhau!" << endl;
    }
}