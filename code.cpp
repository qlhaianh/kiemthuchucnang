#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // Nhập tuổi hiện tại của công dân dưới dạng chuỗi
    string ageStr;
    cout << "Nhap tuoi hien tai cua ban: ";
    getline(cin, ageStr);

    // Sử dụng stringstream để chuyển đổi chuỗi thành số nguyên
    int age;
    stringstream ageStream(ageStr);
    if (!(ageStream >> age) || age <= 0) {
        cout << "Tuoi nhap vao khong hop le hoac khong phai so nguyen duong." << endl;
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Kiểm tra xem công dân có đủ tuổi làm căn cước công dân (18 tuổi) hay không
    if (age >= 18) {
        cout << "Ban da du tuoi lam can cuoc cong dan." << endl;
    } else {
        cout << "Ban chua du tuoi lam can cuoc cong dan." << endl;
    }

    return 0;
}