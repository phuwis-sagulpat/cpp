#include <iostream> // สำหรับ input/output

int main() {
    int score; // ตัวแปรสำหรับเก็บคะแนน

    // รับคะแนนจากผู้ใช้
    std::cout << "กรุณาป้อนคะแนนของคุณ (0-100): ";
    std::cin >> score;

    // ตรวจสอบความถูกต้องของข้อมูล
    if (score < 0 || score > 100) {
        std::cout << "Invalid data, please try again..." << std::endl;
    } else {
        // คำนวณและแสดงผลเกรด
        if (score >= 80) {
            std::cout << "มึงได้เกรด: 4" << std::endl;
        } else if (score >= 75) {
            std::cout << "มึงได้เกรด: 3.5" << std::endl;
        } else if (score >= 70) {
            std::cout << "มึงได้เกรด: 3" << std::endl;
        } else if (score >= 65) {
            std::cout << "มึงได้เกรด: 2.5" << std::endl;
        } else if (score >= 60) {
            std::cout << "มึงได้เกรด: 2" << std::endl;
        } else if (score >= 55) {
            std::cout << "มึงได้เกรด: 1.5" << std::endl;
        } else if (score >= 50) {
            std::cout << "มึงได้เกรด: 1" << std::endl;
        } else {
            std::cout << "มึงได้เกรด: 0" << std::endl;
        }
    }

    return 0; // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสมบูรณ์
}
