#include <iostream>

void garis() {
	std::cout << "\n--------------------\n";
}

int main() {
	garis(); // memanggil fungsi garis
	std::cout << "Radiansyah akmal - Jakarta timur" << std::endl;
	garis(); // memanggil fungsi garis
	
	std::cin.get(); // agar program menunggu input sebelum selesai
	return 0;
}
