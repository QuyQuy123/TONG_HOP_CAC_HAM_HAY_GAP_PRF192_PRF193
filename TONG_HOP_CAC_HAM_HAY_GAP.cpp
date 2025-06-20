#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

/*
    1.  Kiểm tra số nguyên tố        => Kiểm tra 1 số có phải số nguyên tố hay không
    2.  Kiểm tra số Fibonacci        => Kiểm tra 1 số có thuộc dãy Fibonacci hay không
    3.  Ước chung lớn nhất           => Tính ước chung lớn nhất của 2 số a và b
    4.  Bội chung nhỏ nhất           => Tính bội chung nhỏ nhất của 2 số a và b
    5.  Kiểm tra số chính phương     => Kiểm tra 1 số có phải là số chính phương hay không
    6.  Kiểm tra số hoàn hảo         => Kiểm tra 1 số có phải là số hoàn hảo hay không
    7.  Lũy thừa                     => Tính lũy thừa của 1 số (base^exp)
    8.  Giai thừa                    => Tính giai thừa của 1 số nguyên dương
    9.  Tổng bình phương chữ số      => Tính tổng bình phương các chữ số của 1 số
    10. Kiểm tra số hạnh phúc        => Kiểm tra 1 số có phải là số hạnh phúc hay không
    11. Số Mersenne                  => Kiểm tra 1 số có phải dạng 2^p - 1 (số Mersenne) hay không
    12. Số đảo ngược                 => Kiểm tra 1 số có phải là số đảo ngược của chính nó không
    13. Tổng các chữ số              => Tính tổng các chữ số của 1 số
    14. Đếm số chữ số                => Đếm số lượng chữ số của 1 số
    15. Số Armstrong                 => Kiểm tra 1 số có phải là số Armstrong hay không
    16. Phân tích thừa số nguyên tố  => Phân tích số thành các thừa số nguyên tố
    17. Lũy thừa của 2               => Kiểm tra 1 số có phải lũy thừa của 2 hay không
    18. Đổi hệ 10 sang nhị phân      => Chuyển số hệ 10 sang hệ 2
    19. Đổi hệ 10 sang bát phân      => Chuyển số hệ 10 sang hệ 8
    20. Đổi hệ 10 sang thập lục phân => Chuyển số hệ 10 sang hệ 16
    21. Nhị phân sang thập phân      => Chuyển số hệ 2 sang hệ 10
    22. Bát phân sang thập phân      => Chuyển số hệ 8 sang hệ 10
    23. Hex sang thập phân           => Chuyển số hệ 16 sang hệ 10
    24. So sánh chuỗi:
        24.1 soSanhChuoi           => So sánh hai chuỗi phân biệt hoa thường
        24.2 soSanhChuoi2          => So sánh hai chuỗi không phân biệt hoa thường

    25. Các thao tác trên chuỗi:
        25.1  daoNguocChuoi        => Đảo ngược chuỗi
        25.2  kiemTraDoiXung       => Kiểm tra chuỗi có phải đối xứng hay không
        25.3  timKyTu              => Tìm ký tự trong chuỗi
        25.4  xoaKyTuTrungLap      => Xoá các ký tự trùng lặp trong chuỗi
        25.5  thayTheKyTu          => Thay ký tự cũ bằng ký tự mới trong chuỗi
        25.6  timChuoiCon          => Tìm chuỗi con trong chuỗi lớn
        25.7  demKyTu              => Đếm số lượng ký tự trong chuỗi
        25.8  demSoTu              => Đếm số lượng từ trong chuỗi
        25.9  xoaChuoiConDauTien   => Xoá chuỗi con ở vị trí đầu tiên
        25.10 thayTheChuoiCon      => Thay thế các chuỗi con bằng chuỗi con mới
        25.11 tachChuoiThanhMangTu=> Tách chuỗi thành các mảng từ

    26. Các thao tác với chữ hoa - thường:
        26.1  chuyenDoiChuHoa      => Chuyển đổi tất cả ký tự thành chữ hoa
        26.2  chuyenDoiChuThuong   => Chuyển đổi tất cả ký tự thành chữ thường
        26.3  chuyenDoiThanhThuong => Chuyển đổi từng ký tự thành chữ thường
        26.4  chuyenDoiThanhHoa    => Chuyển đổi từng ký tự thành chữ hoa

    27. Đếm số lần xuất hiện ký tự và chuỗi con:
        27.1  demSoLanKyTu         => Đếm số lần xuất hiện của một ký tự trong chuỗi
        27.2  demSoLanXuatHien     => Đếm số lần xuất hiện của các ký tự trong chuỗi
        27.3  demChuoiCon          => Đếm số lần xuất hiện chuỗi con trong chuỗi lớn
        27.4  demSoNguyen          => Đếm số lượng các số nguyên trong chuỗi
        27.5  demSoThapPhan        => Đếm số lượng các số thập phân trong chuỗi
        27.6  demSoTrongChuoi      => Đếm số lượng các số (nguyên và thập phân) trong chuỗi
        27.7  demChuHoa            => Đếm số lượng các chữ cái in hoa
        27.8  demChuThuong         => Đếm số lượng các chữ cái thường
        27.9  demSoLuongChuSo      => Đếm số lượng các chữ số trong chuỗi
        27.10 demNguyenAm          => Đếm số lượng nguyên âm trong chuỗi
        27.11 demPhuAm             => Đếm số lượng phụ âm trong chuỗi

    28. Loại bỏ các ký tự thừa:
        28.1  loaiBoKhoangTrangThua=> Loại bỏ các khoảng trắng thừa trong chuỗi
        28.2  loaiBoKyTu           => Loại bỏ ký tự cụ thể trong chuỗi

    29. Thao tác với mảng chuỗi:
        29.1  nhapChuoiMang2Chieu  => Nhập nhiều chuỗi vào mảng 2 chiều
        29.2  xuatChuoiMang2Chieu  => Xuất nhiều chuỗi từ mảng 2 chiều ra màn hình
        29.3  timChuoiDaiNhat      => Tìm chuỗi dài nhất trong mảng chuỗi
        29.4  xoaChuoi             => Xoá chuỗi tại vị trí chỉ định trong mảng chuỗi
        29.5  daoNguocTatCaChuoi   => Đảo ngược tất cả chuỗi trong mảng
        29.6  demSoChuoiLe         => Đếm số chuỗi có độ dài chẵn và lẻ

    30.1  tinhTongTu1DenN(n)               => Tính tổng các số từ 1 đến n
         Ví dụ: n = 4 thì S = 1 + 2 + 3 + 4 = 10
    30.2  tinhTongChanDenN(n)             => Tính tổng các số chẵn từ 1 đến n
         Ví dụ: n = 6 thì S = 2 + 4 + 6 = 12
    30.3  tinhTongLeDenN(n)               => Tính tổng các số lẻ từ 1 đến n
         Ví dụ: n = 5 thì S = 1 + 3 + 5 = 9
    30.4  tinhTongMDenN(m, n)             => Tính tổng các số từ m đến n
         Ví dụ: m = 2, n = 5 thì S = 2 + 3 + 4 + 5 = 14
    30.5  tinhTongChanMDenN(m, n)         => Tính tổng các số chẵn từ m đến n
         Ví dụ: m = 3, n = 8 thì S = 4 + 6 + 8 = 18
    30.6  tinhTongTuMdenNDivisibleByX(m,n,x)  => Tính tổng các số chia hết cho x trong đoạn [m, n]
         Ví dụ: m = 1, n = 10, x = 3 thì S = 3 + 6 + 9 = 18
    30.7  tinhTongBoiCuaX(n, x)           => Tính tổng các số từ 1 đến n là bội của x
         Ví dụ: n = 10, x = 4 thì S = 4 + 8 = 12
    30.8  tinhTongChiaHetChoXHoacY(n,x,y) => Tính tổng các số chia hết cho x hoặc y trong [1, n]
         Ví dụ: n = 10, x = 2, y = 3 thì S = 2 + 3 + 4 + 6 + 8 + 9 = 32
    30.9  tinhTongChiaHetCho3(n)          => Tính tổng các số chia hết cho 3 từ 1 đến n
         Ví dụ: n = 10 thì S = 3 + 6 + 9 = 18
    30.10
	 	tinhTongCanBacHai(n)            => Tính tổng các căn bậc hai từ 1 đến n
         Ví dụ: S = sqrt(1) + sqrt(2) + sqrt(3) + ... + sqrt(n)
    30.11 tinhTongGiaiThua(n)
        => Tính tổng các giai thừa từ 1 đến n
        // S = 1! + 2! + 3! + ... + n!

    30.12. tinhTongBinhPhuong(n)
        => Tính tổng các bình phương từ 1 đến n
        // S = 1² + 2² + 3² + ... + n²

    30.13. tinhTongPhanSo(n)
        => Tính tổng các phân số nghịch đảo từ 1 đến n
        // S = 1 + 1/2 + 1/3 + ... + 1/n

    30.14. tinhTongSoMu(n)
        => Tính tổng các số mũ từ 1 đến n
        // S = 1¹ + 2² + 3³ + ... + nⁿ

    30.15. tinhTongCanBacHaiGiaiThua(n)
        => Tính tổng xen kẽ căn bậc hai và giai thừa từ 1 đến n
        // S = sqrt(1) + 1! + sqrt(2) + 2! + sqrt(3) + 3! + ... + sqrt(n) + n!

    30.16. tinhTongBinhPhuongPhanSo(n)
        => Tính tổng xen kẽ bình phương và phân số từ 1 đến n
        // S = 1² + 1/1 + 2² + 1/2 + 3² + 1/3 + ... + n² + 1/n

    30.17. tinhTongSoMuCanBacHai(n)
        => Tính tổng xen kẽ số mũ và căn bậc hai từ 1 đến n
        // S = 1¹ + sqrt(1) + 2² + sqrt(2) + 3³ + sqrt(3) + ... + nⁿ + sqrt(n)

    30.18. tinhTongPhanSoTuChanMauBinhPhuong(n)
        => Tính tổng các phân số có tử chẵn và mẫu là bình phương
        // S = 2/(1²) + 4/(2²) + 6/(3²) + ... + 2n/(n²)

    30.19. tinhTongPhanSoGiaiThuaCanBacHai(n)
        => Tính tổng các phân số có mẫu là căn bậc hai của giai thừa
        // S = 1/sqrt(1!) + 2/sqrt(2!) + 3/sqrt(3!) + ... + n/sqrt(n!)

    30.20. tinhTongBinhPhuongGiaiThua(n)
        => Tính tổng các bình phương chia cho giai thừa
        // S = 1²/1! + 2²/2! + 3²/3! + ... + n²/n!

    30.21. tinhTongCanBacHaiBinhPhuong(n)
        => Tính tổng căn bậc hai chia cho bình phương
        // S = sqrt(1)/1² + sqrt(2)/2² + sqrt(3)/3² + ... + sqrt(n)/n²

    30.22. tinhTongBinhPhuongGiaiThuaBi_nT_Yng(n)
        => Tính tổng bình phương chia cho giai thừa
        // (tên chưa rõ – nhưng nội dung giống với hàm 20)

    30.23. tinhTongBinhPhuongCanBacHaiGiaiThua(n)
        => Tính tổng bình phương và căn bậc hai chia cho giai thừa
        // S = 1²/sqrt(1!) + 4/sqrt(2!) + 9/sqrt(3!) + ... + n²/sqrt(n!)

    30.24. tinhTongBinhPhuongCanBacHaiPhanSoCanBackai(n)
        => Tính tổng các phân số so sánh giữa bình phương và căn bậc hai
        // S = 1²/sqrt(1) + 2²/sqrt(2) + ... + n²/sqrt(n)

    30.25. tinhTich_CongThuc1(n)
        => Tính tích theo công thức (1 + 1/1)(1 + 1/2)...(1 + 1/n)
        // S = (1 + 1/1) * (1 + 1/2) * ... * (1 + 1/n)

	31. NHẬP / XUẤT MẢNG:
	    31.1. NhapMang           => Nhập mảng 1 chiều từ bàn phím.
	    31.2. XuatMang           => Xuất mảng 1 chiều ra màn hình.
	    31.3. nhapMang2Chieu     => Nhập mảng 2 chiều.
	    31.4. xuatMang2Chieu     => Xuất mảng 2 chiều.

	32. TÌM KIẾM VÀ TÍNH TOÁN TRÊN MẢNG:
	    32.1. findMax            => Tìm giá trị lớn nhất trong mảng.
	    32.2. findMin            => Tìm giá trị nhỏ nhất trong mảng.
	    32.3. findSecondLargest  => Tìm phần tử lớn thứ hai trong mảng.
	    32.4. sumArray           => Tính tổng các phần tử trong mảng.
	    32.5. maxSubArraySum     => Tìm tổng lớn nhất của dãy con liên tiếp.

	33. SẮP XẾP VÀ XỬ LÝ MẢNG:
	    33.1. sortAscending      => Sắp xếp mảng tăng dần.
	    33.2. sortDescending     => Sắp xếp mảng giảm dần.
	    33.3. reverseArray       => Đảo ngược mảng.
	    33.4. insertElement      => Chèn phần tử vào vị trí bất kỳ.
	    33.5. deleteElement      => Xoá phần tử tại vị trí bất kỳ.
	    33.6. removeDuplicates   => Loại bỏ các phần tử trùng lặp.
	    33.7. swap 				=> Hàm hoán đổi 2 phần tử
	    33.8. findIndexOfSmallestOdd 		=> Hàm tìm vị trí số lẻ nhỏ nhất
	    33.9 findIndexOfFirstLargestOdd 	=> Hàm tìm vị trí số lẻ lớn nhất đầu tiên (first largest odd)
	    

	34. KIỂM TRA THÔNG TIN TRONG MẢNG:
	    34.1. linearSearch       => Tìm kiếm tuyến tính một phần tử.
	    34.2. isSymmetric        => Kiểm tra mảng có đối xứng không.
	    34.3. findMostFrequent   => Tìm phần tử xuất hiện nhiều nhất.
	    34.4. countOccurrences   => Đếm số lần xuất hiện của từng phần tử.
	    34.5. countEven          => Đếm số phần tử chẵn.
	    34.6. countOdd           => Đếm số phần tử lẻ.
	    34.7. countPositive      => Đếm số phần tử dương.
	    4.8. countNegative      => Đếm số phần tử âm.
	35. VẼ HÌNH 
		35.1 veHinhVuong1 =>  Vẽ hình vuông
		35.2 veHinhVuong => Vẽ hình vuông bị rỗng dưới
		35.3 veHinhVuong => Vẽ hình vuông bị rỗng trên
		35.4 veHinhVuong => Vẽ hình vuông bị rỗng giữa
		35.5 veTamGiac  => Vẽ Tam giác
		35.6 veTamGiac = > Vẽ Tam giác ngược 1
		35.7 veTamGiac => Vẽ Tam giác ngược 2
		35.8 veTamGiac => Vẽ Tam giác ngược 3
		35.9 tamGiacCan_1 = > Vẽ Tam giác cân 1
		35.10 tamGiacCan_2  => Vẽ Tam giác cân 2
		35.11 tamGiacSo  => Vẽ Tam giác số 1
		35.12 tamGiacso_2 => Vẽ Tam giác số 2
		35.13 tamGiacChuDoiXung => Vẽ Tam giác chữ đối xứng
		35.14 hinhBinhHanh  => Vẽ hình bình hành
		35.15 veNgoiNha  => Vẽ ngôi nhà
		35.16 veHinhThoi   => Vẽ hình thoi
		35.17 veTamGiacRong  => Vẽ tam giác rỗng
		35.18 printAlphabetPyramid=>  Vẽ tam giác chữ cái

*/








// 1. Kiểm tra số nguyên tố
bool KiemTraSoNguyenTo(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

// 2. Kiểm tra số Fibonacci
bool KiemTraSoFibonacci(int n) {
	int a = 0, b = 1;
	while (b < n) {
		int temp = a + b;
		a = b;
		b = temp;
	}
	return n == b || n == 0;
}

// 3. Ước chung lớn nhất
int UCLN(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// 4. Bội chung nhỏ nhất
int BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}

// 5. Kiểm tra số chính phương
bool KiemTraSoChinhPhuong(int n) {
	int sq = sqrt(n);
	return sq * sq == n;
}

// 6. Kiểm tra số hoàn hảo
bool KiemTraSoHoanHao(int n) {
	int sum = 0;
	for (int i = 1; i <= n/2; i++)
		if (n % i == 0) sum += i;
	return sum == n;
}

// 7. Lũy thừa
int power(int base, int exp) {
	int result = 1;
	while (exp--) result *= base;
	return result;
}

// 8. Giai thừa
long long giaithua(int n) {
	long long gt = 1;
	for (int i = 2; i <= n; i++) gt *= i;
	return gt;
}

// 9. Tính tổng bình phương các chữ số
int TinhTongBinhPhuongCacChuSo(int n) {
	int sum = 0;
	while (n) {
		int d = n % 10;
		sum += d * d;
		n /= 10;
	}
	return sum;
}

// 10. Kiểm tra số hạnh phúc
bool KiemTraSoHanhPhuc(int n) {
	int slow = n, fast = n;
	do {
		slow = TinhTongBinhPhuongCacChuSo(slow);
		fast = TinhTongBinhPhuongCacChuSo(TinhTongBinhPhuongCacChuSo(fast));
	} while (slow != fast);
	return slow == 1;
}

// 11. Số Mersenne: dạng 2^p - 1
bool KiemTraSoMersenne(int n) {
	for (int p = 1; ; p++) {
		int m = power(2, p) - 1;
		if (m == n) return true;
		if (m > n) break;
	}
	return false;
}

// 12. Số đảo ngược
bool KiemTraSoDaoNguoc(int n) {
	int rev = 0, tmp = n;
	while (tmp) {
		rev = rev * 10 + tmp % 10;
		tmp /= 10;
	}
	return rev == n;
}

// 13. Tổng các chữ số
int sumOfDigits(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

// 14. Đếm số chữ số
int countOfDigits(int n) {
	int count = 0;
	do {
		count++;
		n /= 10;
	} while (n);
	return count;
}

// 15. Số Armstrong
bool KiemTraSoArmstrong(int n) {
	int sum = 0, original = n, digits = countOfDigits(n);
	while (n) {
		sum += power(n % 10, digits);
		n /= 10;
	}
	return sum == original;
}

// 16. Phân tích thừa số nguyên tố
void primeFactorization(int n) {
	printf("Prime factors of %d: ", n);
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			printf("%d ", i);
			n /= i;
		}
	}
	if (n > 1) printf("%d", n);
	printf("\n");
}

// 17. Kiểm tra lũy thừa của 2
bool kiem_tra_luy_thua_2(int n) {
	return n > 0 && (n & (n - 1)) == 0;
}

// 18. Đổi hệ 10 sang nhị phân
void decToBin(int n) {
	printf("Binary: ");
	for (int i = 31; i >= 0; i--)
		if ((n >> i) & 1 || i <= 4) printf("%d", (n >> i) & 1);
	printf("\n");
}

// 19. Đổi hệ 10 sang bát phân
void decToOct(int n) {
	printf("Octal: %o\n", n);
}

// 20. Đổi hệ 10 sang thập lục phân
void decToHex(int n) {
	printf("Hex: %X\n", n);
}

// 21. Đổi nhị phân sang thập phân
int binToDec(char *bin) {
	int result = 0;
	for (int i = 0; bin[i]; i++)
		result = result * 2 + (bin[i] - '0');
	return result;
}

// 22. Đổi bát phân sang thập phân
int octToDec(char *oct) {
	int result = 0;
	for (int i = 0; oct[i]; i++)
		result = result * 8 + (oct[i] - '0');
	return result;
}

// 23. Đổi hex sang thập phân
int hexToDec(char *hex) {
	int result = 0;
	sscanf(hex, "%x", &result);
	return result;
}
// 24.1 So sánh chuỗi phân biệt hoa thường
int soSanhChuoi(const char *s1, const char *s2) {
	return strcmp(s1, s2);  // trả về 0 nếu giống nhau
}

// 24.2 So sánh chuỗi không phân biệt hoa thường
int soSanhChuoi2(const char *s1, const char *s2) {
	while (*s1 && *s2) {
		if (tolower(*s1) != tolower(*s2))
			return 0;
		s1++;
		s2++;
	}
	return *s1 == *s2;
}
// 25.1 Đảo ngược chuỗi
void daoNguocChuoi(char *str) {
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		char tmp = str[l];
		str[l] = str[r];
		str[r] = tmp;
		l++;
		r--;
	}
}

// 25.2 Kiểm tra chuỗi đối xứng
int kiemTraDoiXung(const char *str) {
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		if (str[l] != str[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

// 25.3 Tìm ký tự trong chuỗi
int timKyTu(const char *str, char ch) {
	for (int i = 0; str[i]; i++)
		if (str[i] == ch)
			return i;  // vị trí đầu tiên
	return -1;
}

// 25.4 Xóa ký tự trùng lặp
void xoaKyTuTrungLap(char *str) {
	int hash[256] = {0}, k = 0;
	for (int i = 0; str[i]; i++) {
		if (!hash[(unsigned char)str[i]]) {
			str[k++] = str[i];
			hash[(unsigned char)str[i]] = 1;
		}
	}
	str[k] = '\0';
}

// 25.5 Thay thế ký tự
void thayTheKyTu(char *str, char oldChar, char newChar) {
	for (int i = 0; str[i]; i++) {
		if (str[i] == oldChar)
			str[i] = newChar;
	}
}

// 25.6 Tìm chuỗi con
int timChuoiCon(const char *haystack, const char *needle) {
	char *pos = strstr(haystack, needle);
	return pos ? pos - haystack : -1;
}

// 25.7 Đếm ký tự trong chuỗi
int demKyTu(const char *str) {
	return strlen(str);
}

// 25.8 Đếm số từ trong chuỗi
int demSoTu(const char *str) {
	int count = 0, inWord = 0;
	while (*str) {
		if (!isspace(*str) && !inWord) {
			inWord = 1;
			count++;
		} else if (isspace(*str)) {
			inWord = 0;
		}
		str++;
	}
	return count;
}

// 25.9 Xóa chuỗi con đầu tiên
void xoaChuoiConDauTien(char *str, const char *sub) {
	char *pos = strstr(str, sub);
	if (pos) {
		int len = strlen(sub);
		memmove(pos, pos + len, strlen(pos + len) + 1);
	}
}

// 25.10 Thay thế chuỗi con
void thayTheChuoiCon(char *str, const char *oldSub, const char *newSub) {
	char buffer[1000], *pos;
	int i = 0, lenOld = strlen(oldSub), lenNew = strlen(newSub);
	buffer[0] = '\0';

	while ((pos = strstr(str, oldSub)) != NULL) {
		int len = pos - str;
		strncpy(buffer + i, str, len);
		i += len;
		strcpy(buffer + i, newSub);
		i += lenNew;
		str = pos + lenOld;
	}
	strcpy(buffer + i, str);
	strcpy(str, buffer);
}

// 25.11 Tách chuỗi thành mảng từ
int tachChuoiThanhMangTu(const char *str, char arr[][50]) {
	int i = 0;
	char temp[1000];
	strcpy(temp, str);
	char *token = strtok(temp, " ");
	while (token) {
		strcpy(arr[i++], token);
		token = strtok(NULL, " ");
	}
	return i;  // số lượng từ
}
// 26.1 Chuyển tất cả sang chữ hoa
void chuyenDoiChuHoa(char *str) {
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
}

// 26.2 Chuyển tất cả sang chữ thường
void chuyenDoiChuThuong(char *str) {
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
}

// 26.3 Chuyển đổi từng ký tự thành chữ thường
void chuyenDoiThanhThuong(char *str) {
	for (int i = 0; str[i]; i++)
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
}

// 26.4 Chuyển đổi từng ký tự thành chữ hoa
void chuyenDoiThanhHoa(char *str) {
	for (int i = 0; str[i]; i++)
		if (islower(str[i]))
			str[i] = toupper(str[i]);
}

// 27.1 Đếm số lần xuất hiện ký tự ch
int demSoLanKyTu(const char *str, char ch) {
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (str[i] == ch)
			count++;
	return count;
}

// 27.2 Đếm số lần xuất hiện các ký tự
void demSoLanXuatHien(const char *str) {
	int freq[256] = {0};
	for (int i = 0; str[i]; i++)
		freq[(unsigned char)str[i]]++;
	for (int i = 0; i < 256; i++)
		if (freq[i])
			printf("'%c' xuất hiện %d lần\n", i, freq[i]);
}

// 27.3 Đếm chuỗi con trong chuỗi lớn
int demChuoiCon(const char *str, const char *sub) {
	int count = 0;
	const char *p = str;
	while ((p = strstr(p, sub)) != NULL) {
		count++;
		p += strlen(sub);
	}
	return count;
}

// 27.4 Đếm số nguyên
int demSoNguyen(const char *str) {
	int count = 0, i = 0;
	while (str[i]) {
		if (isdigit(str[i]) && (i == 0 || !isdigit(str[i-1])))
			count++;
		i++;
	}
	return count;
}

// 27.5 Đếm số thập phân
int demSoThapPhan(const char *str) {
	int count = 0;
	for (int i = 0; str[i]; i++) {
		if (isdigit(str[i])) {
			int hasDot = 0;
			while (isdigit(str[i]) || str[i] == '.') {
				if (str[i] == '.') hasDot = 1;
				i++;
			}
			if (hasDot) count++;
		}
	}
	return count;
}

// 27.6 Đếm số nguyên và thập phân
int demSoTrongChuoi(const char *str) {
	return demSoNguyen(str) + demSoThapPhan(str);
}

// 27.7 Đếm chữ hoa
int demChuHoa(const char *str) {
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (isupper(str[i])) count++;
	return count;
}

// 27.8 Đếm chữ thường
int demChuThuong(const char *str) {
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (islower(str[i])) count++;
	return count;
}

// 27.9 Đếm chữ số
int demSoLuongChuSo(const char *str) {
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (isdigit(str[i])) count++;
	return count;
}

// 27.10 Đếm nguyên âm
int demNguyenAm(const char *str) {
	int count = 0;
	char ch;
	for (int i = 0; str[i]; i++) {
		ch = tolower(str[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			count++;
	}
	return count;
}

// 27.11 Đếm phụ âm
int demPhuAm(const char *str) {
	int count = 0;
	char ch;
	for (int i = 0; str[i]; i++) {
		ch = tolower(str[i]);
		if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
			count++;
	}
	return count;
}
// 28.1 Loại bỏ khoảng trắng thừa
void loaiBoKhoangTrangThua(char *str) {
	int i = 0, j = 0;
	while (str[i] == ' ') i++; // bỏ đầu
	while (str[i]) {
		if (!(str[i] == ' ' && str[i+1] == ' '))
			str[j++] = str[i];
		i++;
	}
	while (j > 0 && str[j-1] == ' ') j--; // bỏ cuối
	str[j] = '\0';
}

// 28.2 Loại bỏ ký tự cụ thể
void loaiBoKyTu(char *str, char ch) {
	int i = 0, j = 0;
	while (str[i]) {
		if (str[i] != ch)
			str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
}
// 29.1 Nhập chuỗi vào mảng 2 chiều
void nhapChuoiMang2Chieu(char arr[][100], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhập chuỗi thứ %d: ", i + 1);
		fgets(arr[i], 100, stdin);
		arr[i][strcspn(arr[i], "\n")] = '\0'; // bỏ \n
	}
}

// 29.2 Xuất các chuỗi ra màn hình
void xuatChuoiMang2Chieu(char arr[][100], int n) {
	for (int i = 0; i < n; i++)
		printf("Chuỗi %d: %s\n", i + 1, arr[i]);
}

// 29.3 Tìm chuỗi dài nhất
int timChuoiDaiNhat(char arr[][100], int n) {
	int maxLen = strlen(arr[0]), index = 0;
	for (int i = 1; i < n; i++) {
		if (strlen(arr[i]) > maxLen) {
			maxLen = strlen(arr[i]);
			index = i;
		}
	}
	return index;
}

// 29.4 Xoá chuỗi tại vị trí
void xoaChuoi(char arr[][100], int *n, int pos) {
	for (int i = pos; i < *n - 1; i++)
		strcpy(arr[i], arr[i + 1]);
	(*n)--;
}

// 29.5 Đảo ngược tất cả chuỗi trong mảng
void daoNguocTatCaChuoi(char arr[][100], int n) {
	for (int i = 0; i < n; i++)
		daoNguocChuoi(arr[i]);
}

// 29.6 Đếm chuỗi chẵn và lẻ
void demSoChuoiLe(char arr[][100], int n, int *chan, int *le) {
	*chan = *le = 0;
	for (int i = 0; i < n; i++) {
		if (strlen(arr[i]) % 2 == 0)
			(*chan)++;
		else
			(*le)++;
	}
}
// 30.1 Tổng các số từ 1 đến n
int tinhTongTu1DenN(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}
// 30.2 Tổng các số chẵn từ 1 đến n
int tinhTongChanDenN(int n) {
	int sum = 0;
	for (int i = 2; i <= n; i += 2)
		sum += i;
	return sum;
}
// 30.3 Tổng các số lẻ từ 1 đến n
int tinhTongLeDenN(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i += 2)
		sum += i;
	return sum;
}

// 30.4 Tổng từ m đến n
int tinhTongMDenN(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++)
		sum += i;
	return sum;
}
// 30.5 Tổng số chẵn từ m đến n
int tinhTongChanMDenN(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++)
		if (i % 2 == 0)
			sum += i;
	return sum;
}
// 30.6 Tổng các số chia hết cho x từ m đến n
int tinhTongTuMdenNDivisibleByX(int m, int n, int x) {
	int sum = 0;
	for (int i = m; i <= n; i++)
		if (i % x == 0)
			sum += i;
	return sum;
}

// 30.7 Tổng các số từ 1 đến n là bội của x
int tinhTongBoiCuaX(int n, int x) {
	int sum = 0;
	for (int i = x; i <= n; i += x)
		sum += i;
	return sum;
}

// 30.8 Tổng các số chia hết cho x hoặc y từ 1 đến n
int tinhTongChiaHetChoXHoacY(int n, int x, int y) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		if (i % x == 0 || i % y == 0)
			sum += i;
	return sum;
}

// 30.9 Tổng các số chia hết cho 3 từ 1 đến n
int tinhTongChiaHetCho3(int n) {
	int sum = 0;
	for (int i = 3; i <= n; i += 3)
		sum += i;
	return sum;
}
// 30.10 Tổng căn bậc hai từ 1 đến n
double tinhTongCanBacHai(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += sqrt(i);
	return sum;
}
// 30.11. Tổng các giai thừa từ 1 đến n
long long tinhTongGiaiThua(int n) {
	long long sum = 0, gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += gt;
	}
	return sum;
}

// 30.12. Tổng các bình phương từ 1 đến n
int tinhTongBinhPhuong(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i * i;
	return sum;
}

// 30.13. Tổng các phân số nghịch đảo từ 1 đến n
double tinhTongPhanSo(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1.0 / i;
	return sum;
}

// 30.14. Tổng các số mũ từ 1 đến n (1^1 + 2^2 + ... + n^n)
double tinhTongSoMu(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += pow(i, i);
	return sum;
}

// 30.15. Tổng căn bậc hai xen kẽ giai thừa
double tinhTongCanBacHaiGiaiThua(int n) {
	double sum = 0;
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		sum += sqrt(i);
		gt *= i;
		sum += gt;
	}
	return sum;
}

// 30.16. Tổng xen kẽ bình phương và phân số
double tinhTongBinhPhuongPhanSo(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
		sum += 1.0 / i;
	}
	return sum;
}

// 30.17. Tổng xen kẽ số mũ và căn bậc hai
double tinhTongSoMuCanBacHai(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, i);
		sum += sqrt(i);
	}
	return sum;
}

// 30.18. Tổng phân số với tử chẵn và mẫu bình phương
double tinhTongPhanSoTuChanMauBinhPhuong(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (2.0 * i) / (i * i);
	}
	return sum;
}

// 30.19. Tổng phân số với mẫu là căn bậc hai của giai thừa
double tinhTongPhanSoGiaiThuaCanBacHai(int n) {
	double sum = 0;
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += i / sqrt(gt);
	}
	return sum;
}

// 30.20. Tổng bình phương chia cho giai thừa
double tinhTongBinhPhuongGiaiThua(int n) {
	double sum = 0;
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += (double)(i * i) / gt;
	}
	return sum;
}

// 30.21. Tổng căn bậc hai chia cho bình phương
double tinhTongCanBacHaiBinhPhuong(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += sqrt(i) / (i * i);
	}
	return sum;
}

// 30.22. Tổng bình phương chia cho giai thừa (có vẻ trùng hàm 20)
double tinhTongBinhPhuongGiaiThua_BT(int n) {
	return tinhTongBinhPhuongGiaiThua(n); // dùng lại hàm số 20
}

// 30.23. Tổng bình phương và căn bậc hai chia cho giai thừa
double tinhTongBinhPhuongCanBacHaiGiaiThua(int n) {
	double sum = 0;
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += (i * i + sqrt(i)) / gt;
	}
	return sum;
}

// 30.24. Tổng bình phương chia cho căn bậc hai
double tinhTongBinhPhuongCanBacHaiPhanSoCanBacHai(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (i * i) / sqrt(i);
	}
	return sum;
}

// 30.25. Tích theo công thức (1 + 1/1)(1 + 1/2)...(1 + 1/n)
double tinhTich_CongThuc1(int n) {
	double tich = 1.0;
	for (int i = 1; i <= n; i++) {
		tich *= (1 + 1.0 / i);
	}
	return tich;
}

// 31.1 Nhập mảng 1 chiều
void nhapMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

// 31.2 Xuất mảng 1 chiều
void xuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// 31.3 Nhập mảng 2 chiều
void nhapMang2Chieu(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
}

// 31.4 Xuất mảng 2 chiều
void xuatMang2Chieu(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
// 32.1 Tìm giá trị lớn nhất
int findMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

// 32.2 Tìm giá trị nhỏ nhất
int findMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

// 32.3 Tìm phần tử lớn thứ hai
int findSecondLargest(int arr[], int n) {
	int first = INT_MIN, second = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > first) {
			second = first;
			first = arr[i];
		} else if (arr[i] > second && arr[i] < first)
			second = arr[i];
	}
	return second;
}

// 32.4 Tính tổng các phần tử
int sumArray(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

// 32.5 Tìm tổng lớn nhất của dãy con liên tiếp (Kadane's Algorithm)
int maxSubArraySum(int arr[], int n) {
	int maxSoFar = arr[0], currMax = arr[0];
	for (int i = 1; i < n; i++) {
		currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
		maxSoFar = (maxSoFar > currMax) ? maxSoFar : currMax;
	}
	return maxSoFar;
}
// 33.1 Sắp xếp tăng dần
void sortAscending(int arr[], int n) {
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
}

// 33.2 Sắp xếp giảm dần
void sortDescending(int arr[], int n) {
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
}

// 33.3 Đảo ngược mảng
void reverseArray(int arr[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}

// 33.4 Chèn phần tử vào vị trí bất kỳ
void insertElement(int arr[], int *n, int pos, int value) {
	for (int i = *n; i > pos; i--)
		arr[i] = arr[i - 1];
	arr[pos] = value;
	(*n)++;
}

// 33.5 Xóa phần tử tại vị trí bất kỳ
void deleteElement(int arr[], int *n, int pos) {
	for (int i = pos; i < *n - 1; i++)
		arr[i] = arr[i + 1];
	(*n)--;
}

// 33.6 Loại bỏ phần tử trùng lặp
int removeDuplicates(int arr[], int n) {
	int newN = 0;
	for (int i = 0; i < n; i++) {
		int found = 0;
		for (int j = 0; j < newN; j++) {
			if (arr[i] == arr[j]) {
				found = 1;
				break;
			}
		}
		if (!found)
			arr[newN++] = arr[i];
	}
	return newN; // trả về kích thước mảng mới
}

//33.7 Hàm hoán đổi 2 phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//33.8 Hàm tìm vị trí số lẻ nhỏ nhất
int findIndexOfSmallestOdd(int arr[], int n) {
    int minOdd = 0;
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // là số lẻ
            if (minIndex == -1 || arr[i] < minOdd) {
                minOdd = arr[i];
                minIndex = i;
            }
        }
    }
    return minIndex;
}
//33.9 Hàm tìm vị trí số lẻ lớn nhất đầu tiên
int findIndexOfFirstLargestOdd(int arr[], int n) {
    int maxOdd = 0;
    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            if (maxIndex == -1 || arr[i] > maxOdd) {
                maxOdd = arr[i];
                maxIndex = i;
            }
        }
    }
    return maxIndex;
}
//33.10 Hàm tìm vị trí số chẵn nhỏ nhất
int findIndexOfSmallestEven(int arr[], int n) {
    int minEven = 0;
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // là số chẵn
            if (minIndex == -1 || arr[i] < minEven) {
                minEven = arr[i];
                minIndex = i;
            }
        }
    }
    return minIndex;
}

//33.11 Hàm tìm vị trí số chẵn lớn nhất đầu tiên
int findIndexOfFirstLargestEven(int arr[], int n) {
    int maxEven = 0;
    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // là số chẵn
            if (maxIndex == -1 || arr[i] > maxEven) {
                maxEven = arr[i];
                maxIndex = i;
            }
        }
    }
    return maxIndex;
}


// 34.1 Tìm kiếm tuyến tính
int linearSearch(int arr[], int n, int key) {
	for (int i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

// 34.2 Kiểm tra mảng đối xứng
int isSymmetric(int arr[], int n) {
	for (int i = 0; i < n / 2; i++)
		if (arr[i] != arr[n - 1 - i])
			return 0;
	return 1;
}

// 34.3 Tìm phần tử xuất hiện nhiều nhất
int findMostFrequent(int arr[], int n) {
	int maxCount = 0, most = arr[0];
	for (int i = 0; i < n; i++) {
		int count = 1;
		for (int j = i + 1; j < n; j++)
			if (arr[i] == arr[j]) count++;
		if (count > maxCount) {
			maxCount = count;
			most = arr[i];
		}
	}
	return most;
}

// 34.4 Đếm số lần xuất hiện từng phần tử
void countOccurrences(int arr[], int n) {
	int counted[1000] = {0};
	for (int i = 0; i < n; i++) {
		if (!counted[i]) {
			int count = 1;
			for (int j = i + 1; j < n; j++) {
				if (arr[i] == arr[j]) {
					count++;
					counted[j] = 1;
				}
			}
			printf("%d xuat hien %d lan\n", arr[i], count);
		}
	}
}

// 34.5 Đếm số phần tử chẵn
int countEven(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0) count++;
	return count;
}

// 34.6 Đếm số phần tử lẻ
int countOdd(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 != 0) count++;
	return count;
}

// 34.7 Đếm số phần tử dương
int countPositive(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > 0) count++;
	return count;
}

// 34.8 Đếm số phần tử âm
int countNegative(int arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] < 0) count++;
	return count;
}

// 35.1 Vẽ hình vuông
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
void veHinhVuong1(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
// 35.2 Vẽ hình vuông bị rỗng dưới
//* * * * * *
//*         *
//*		    *
//*		    *
//*		    *
//*		    *

void veHinhVuong(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		if (i == 0) {
			for (j = 0; j < n; j++) {
				printf("* ");
			}
		} else {
			printf("*");
			for (j = 0; j < n - 2; j++) {
				printf("  ");
			}
			printf(" *");
		}
		printf("\n");
	}
}

// 35.3 Vẽ hình vuông bị rỗng trên

//*         *
//*         *
//*         *
//*         *
//*         *
//* * * * * *

void veHinhVuong(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		if (i == n-1) {
			for (j = 0; j < n; j++) {
				printf("* ");
			}
		} else {
			printf("*");
			for (j = 0; j < n - 2; j++) {
				printf("  ");
			}
			printf(" *");
		}
		printf("\n");
	}
}

// 35.4 Vẽ hình vuông bị rỗng giữa

//* * * * * *
//*  		*
//* 		*
//*  		*
//*  		*
//* * * * * *
void veHinhVuong (int n) {
	int i,j;
	for (i= 0; i<n; i++) {
		if (i==n-1 || i==0 ) {
			for ( j=0; j<n; j++) {
				printf ("* ");
			}
		}

		else {
			printf ("*");
			for (j=0; j<2*n-3; j++) {
				printf (" ");

			}
			printf ("*");
		}
		printf ("\n");
	}
}

// 35.5 Vẽ Tam giác

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

void veTamGiac (int n) {
	int i,j;
	for (i=0; i<=n; i++) {
		for (j=0; j<i; j++) {
			printf ("* ");
		}
		printf ("\n");
	}
}

// 35.6 Vẽ Tam giác ngược

//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*

void veTamGiac (int n) {
	int i,j;
	for (i=0; i<=n; i++) {
		for (j=0; j<n-i; j++) {
			printf ("* ");
		}
		printf ("\n");
	}
}
// 35.7 Vẽ Tam giác ngược

//*****
// ****
//  ***
//   **
//    *
void veTamGiac(int n) {
	int i, j, size = n;
	for (i = 0; i < size; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = i; j < size; j++) {
			printf("*");
		}
		printf("\n");
	}
}

// 35.8 Vẽ Tam giác ngược

//	  *
//   **
//  ***
// ****
//*****
     
void veTamGiac (int n) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<n-i-1; j++) {
			printf (" ");
		}
		for (j=0; j<i+1; j++) {
			printf ("*");
		}
		printf ("\n");
	}
}

// 35.9 Vẽ Tam giác cân 1
//       *
//	    * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *
//* * * * * * * *
void tamGiacCan_1 {
    int i, space, rows, k = 0;
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}
// 35.10 Vẽ Tam giác cân 2
//* * * * *
// * * * *
//  * * *
//   * *
//    *


void tamGiacCan_2  {
    int rows, i, j, space;
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {
        for (space = 0; space < rows - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}

// 35.11 Vẽ Tam giác số 1

//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

void tamGiacSo {
    int rows, i, j, number = 1;
    scanf("%d", &rows);
	printf("OUTPUT:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
}

// 35.12 Vẽ Tam giác số 2
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5 
//1 2 3 4 5 6

void tamGiacso_2{
    int i, j, row;
    scanf("%d", &row);
    printf("OUTPUT:\n");
    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

// 35.13 Vẽ Tam giác chữ đối xứng
//A
//A B A
//A B C B A
//A B C D C B A
//A B C D E D C B A
void tamGiacChuDoiXung {
	int i, j, rows, count=0;
	scanf("%d", &rows);
	printf("OUTPUT:\n");
	for (i = 0; i < 2*rows; i=i+2) {
		for (j = 0; j <= i; j++) {
		printf("%c", 'A'+count);
		if(j < i/2)
			count++;
		else
			count--;
		}
	count = 0;
	printf("\n");
	}
}
// 35.14 Vẽ hình bình hành
//	   ******
//    *    *
//   *    *
//  *    *
// *    *
//******
void hinhBinhHanh {
    int i, j, n;
    scanf("%d", &n);
	printf("OUTPUT:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j < n - i + 1; j++) {
            printf(" ");
        }
        for (j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 35.15 Vẽ ngôi nhà

//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
//* * *       * * *
//* * *       * * *
//* * *       * * *
//



void veNgoiNha {
    int i, j, space, rows = 8, star = 0;
    for (i = 0; i < rows; i++)
    {
        if (i < 5)
        {
            for (space = 1; space < 5 - i; space++)
            {
                printf(" ");
            }
            while (star != (2 * i + 1))
            {
                printf("*");
                star++;
                ;
            }
            star = 0;
            printf("\n");
        }
        else
        {
            for (j = 0; j < 9; j++)
            {
                if ((int)(j / 3) == 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
}

// 35.16 Vẽ hình thoi
//      *
//    * * *
//  * * * * *
//* * * * * * *
//  * * * * *
//    * * *
//      *
//      
//      
void veHinhThoi {
	int n;
	scanf("%d", &n);
	printf("OUTPUT:\n");
	int i;
    for (i = 1; i <= n; i++)
    {
    	int j;
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
    	int j;
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}


// 35.17 Vẽ tam giác rỗng
//
//*
//**
//* *
//*  *
//*   *
//******


void veTamGiacRong {
    int i, j, n;
    scanf("%d", &n);
	printf("OUTPUT:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || i == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
// 35.18  Vẽ tam giác chữ cái

//A
//B C
//D E F
//G H I J

void printAlphabetPyramid(int rows) {
    char ch = 'A';
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}





















