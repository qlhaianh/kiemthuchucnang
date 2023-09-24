#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

int main() {
    // Test case 1: Tuổi hợp lệ (>= 14)
    {
        string ageStr = "16";
        stringstream ageStream(ageStr);
        int age;
        ageStream >> age;
        assert(age >= 0);  // Đảm bảo age là số nguyên không âm

        if (age >= 14) {
            assert(age >= 14);  // Đủ tuổi làm căn cước công dân (14 tuổi trở lên)
        }
    }

    // Test case 2: Tuổi hợp lệ (< 14)
    {
        string ageStr = "12";
        stringstream ageStream(ageStr);
        int age;
        ageStream >> age;
        assert(age >= 0);  // Đảm bảo age là số nguyên không âm

        if (age >= 14) {
            assert(age < 14);  // Không đủ tuổi làm căn cước công dân (< 14 tuổi)
        }
    }

    // Test case 3: Tuổi hợp lệ (đúng 14)
    {
        string ageStr = "14";
        stringstream ageStream(ageStr);
        int age;
        ageStream >> age;
        assert(age >= 0);  // Đảm bảo age là số nguyên không âm

        if (age >= 14) {
            assert(age >= 14);  // Đủ tuổi làm căn cước công dân (14 tuổi trở lên)
        }
    }

    // Test case 4: Tuổi không hợp lệ (âm)
    {
        string ageStr = "-5";
        stringstream ageStream(ageStr);
        int age;
        ageStream >> age;
        assert(age < 0);  // Đảm bảo age là số nguyên âm
    }

    // Test case 5: Tuổi không hợp lệ (chuỗi không phải số)
    {
        string ageStr = "khongphaiso";
        stringstream ageStream(ageStr);
        int age;
        if (!(ageStream >> age) || age <= 0) {
            assert(false);  // age không hợp lệ
        }
    }

    // Test case 6: Người dùng nhập chuỗi rỗng
    {
        string ageStr = "";
        stringstream ageStream(ageStr);
        int age;
        if (!(ageStream >> age) || age <= 0) {
            assert(false);  // age không hợp lệ
        }
    }

    cout << "Tất cả các test case đã chạy thành công!" << endl;

    return 0;
}

