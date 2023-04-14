/*
	BAI TAP TUAN 9 - BAI TAP VE MANG (ARRAY)
	DAY 11.04.2023 - HVUH - CODE BY HUYNH KHUAN
*/

#include <iostream>
#include <cmath>

/*
	Ham nhap mang A
*/

void EnterArray_A(int arrA[], int& n) {
	std::cout << "Nhap n phan tu cua mang A : "; std::cin >> n;
	std::cout << "\t- NHAP MANG A -\t\n";
	for (int i = 0; i < n; i++) {
		std::cout << "arrA[" << i << "] : ";
		std::cin >> arrA[i];
	}
}

/*
	Ham nhap mang M
*/

void EnterArray_M(int arrM[], int& m) {
	std::cout << "\nNhap n phan tu cua mang M : "; std::cin >> m;
	std::cout << "\t- NHAP MANG M -\t\n";
	for (int i = 0; i < m; i++) {
		std::cout << "arrA[" << i << "] : ";
		std::cin >> arrM[i];
	}
}

/*
	Ham nhap mang N
*/

void EnterArray_N(int arrN[], int& n) {
	std::cout << "\nNhap n phan tu cua mang N : "; std::cin >> n;
	std::cout << "\t- NHAP MANG N -\t\n";
	for (int i = 0; i < n; i++) {
		std::cout << "arrA[" << i << "] : ";
		std::cin >> arrN[i];
	}
}

/*
	Ham tim gia tri lon nhat
*/

int FindTheLargestNumber(int arrA[], int n) {
	int Max = arrA[0];
	for (int i = 1; i < n; i++) {
		if (arrA[i] > Max) {
			Max = arrA[i];
		}
	}
	return Max;
}

/*
	Ham tim gia tri nho nhat
*/

int FindTheSmallestNumber(int arrA[], int n) {
	int Min = arrA[0];
	for (int i = 1; i < n; i++) {
		if (arrA[i] < Min) {
			Min = arrA[i];
		}
	}
	return Min;
}

/*
	Ham kiem tra so nguyen to
*/

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

/*
	Ham kiem tra so chinh phuong
*/

bool isSquareNumber(int n) {
	int SquareRoot2 = sqrt(n);
	if (pow(SquareRoot2, 2) == n) {
		return true;
	}
	return false;
}

/*
	Ham thay the so am thanh 0 cua mang B
*/

void ReplaceElementB(int arrB[], int n) {
	for (int i = 0; i < n; i++) {
		if (arrB[i] < 0) {
			arrB[i] = 0;
		}
	}
}

/*
	Ham sap xep mang B => tang dan
*/

void SortAscendingB(int arrB[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arrB[i] > arrB[j]) {
				int temp = arrB[i];
				arrB[i] = arrB[j];
				arrB[j] = temp;
			}
		}
	}
}

/*
	Ham tinh TBC cac so le o vi tri chan
*/

int AverageOdd(int arr[], int n) {
	int sum_odd = 0, count_odd = 0;
	for (int i = 0; i < n; i += 2) {
		if (arr[i] % 2 != 0) {
			sum_odd += arr[i];
			count_odd++;
		}
	}
	double Average_odd = double(sum_odd) / count_odd;
	return Average_odd;
}

/*
	Ham tim gia tri == a dau tien
*/

int FindFirstOccurrence(int arr[], int n, int a) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == a) {
			return i;
			break;
		}
	}
	return -1;
}

/*
	Ham dem so lan xuat hien cua a trong mang
*/

int CountOccurrences(int arr[], int n, int b) {
	int count_occurrences_a = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == b) {
			count_occurrences_a++;
		}
	}
	return count_occurrences_a;
}

/*
	Ham tim so co chu so dau tien la so chan
*/

int FindFirstEven(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int FirstDigit = abs(arr[i]);
		while (FirstDigit >= 10) {
			FirstDigit /= 10;
		}
		if (FirstDigit % 2 == 0) {
			return arr[i];
			break;
		}
	}
	return 0;
}

/*
	Ham gop 2 mang M va N thanh mang P
*/

void mergeArray(int arrM[], int m, int arrN[], int n, int arrP[]) {
	int i, j, k;
	for (i = 0; i < m; i++) {
		arrP[i] = arrM[i];
	}

	for (j = 0, k = m; j < n; j++, k++) {
		arrP[k] = arrN[j];
	}
}

/*
	Ham sap xep mang => giam dan
*/

void SortDescending(int arrP[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arrP[i] < arrP[j]) {
				int temp = arrP[i];
				arrP[i] = arrP[j];
				arrP[j] = temp;
			}
		}
	}
}

int main() {
	const int MAXSIZE = 100;
	int arrA[MAXSIZE]{};
	int n = 0;

	// Nhap mang A
	EnterArray_A(arrA, n);
	std::cout << "\n1.\tCac phan tu cua mang A la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arrA[i] << " ";
	}
	std::cout << std::endl;

	// in ra gia tri lon nhat va nho nhat
	std::cout << "\n2.\tGia tri lon nhat trong mang A la : " << FindTheLargestNumber(arrA, n) << std::endl;
	std::cout << "\tGia tri nho nhat trong mang A la : " << FindTheSmallestNumber(arrA, n) << std::endl;

	// Tim so nguyen to trong mang A
	std::cout << "\n3.\tCac so nguyen to trong mang A la : ";
	for (int i = 0; i < n; i++) {
		if (isPrime(arrA[i])) {
			std::cout << arrA[i] << " ";
		}
	}
	std::cout << std::endl;

	// Tim so chinh phuong
	std::cout << "\n4.\tCac so chinh phuong trong mang A la : ";
	for (int i = 0; i < n; i++) {
		if (isSquareNumber(arrA[i])) {
			std::cout << arrA[i] << " ";
		}
	}
	std::cout << std::endl;

	// Khoi tao mang B va sao chep phan tu mang A => B
	int arrB[MAXSIZE]{};
	for (int i = 0; i < n; i++) {
		arrB[i] = arrA[i];
	}

	// Duyet mang va in ra phan tu mang B
	std::cout << "\n5.\tCac phan tu cua mang B la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arrB[i] << " ";
	}
	std::cout << std::endl;

	// Thay the cac so am thanh so 0 cua mang B
	ReplaceElementB(arrB, n);
	std::cout << "\n6.\tCac phan tu cua mang B sau khi da thay the la : ";
	for (int i = 0; i < n; i++) {
		std::cout << arrB[i] << " ";
	}
	std::cout << std::endl;

	// Sap xep tang dan mang B
	SortAscendingB(arrB, n);
	std::cout << "\n6.\tCac phan tu cua mang B sap xep theo thu tu tang dan : ";
	for (int i = 0; i < n; i++) {
		std::cout << arrB[i] << " ";
	}
	std::cout << std::endl;

	// Trung binhc cong cac so le o vi tri chan trong mang B
	std::cout << "\n7.\tTrung binh cong cac so le o vi tri chan trong mang B : " << AverageOdd(arrB, n) << std::endl;

	// Nhap phan tu va tim phan tu dau tien = a
	int a; std::cout << "\n8.\tNhap phan tu a can tim : "; std::cin >> a;
	int vi_tri = FindFirstOccurrence(arrA, n, a);
	if (vi_tri == -1) {
		std::cout << "8.\tKhong tim thay " << a << " trong mang A\n";
	}
	else {
		std::cout << "8.\tTim thay " << a << " tai vi tri " << vi_tri + 1 << " trong mang A\n";
	}

	// Nhap b va tim so lan xuat hien cua b trong mang A
	int b; std::cout << "\n9.\tNhap gia tri b : "; std::cin >> b;
	std::cout << "9.\tSo lan xuat hien cua gia tri b trong mang A la : " << CountOccurrences(arrA, n, b) << std::endl;

	// Gia tri dau tien cua mang A chu so dau tien la so chan
	std::cout << "\n10.\tGia tri dau tien trong mang A co chu so dau tien la so chan la : " << FindFirstEven(arrA, n) << std::endl;

	// Duyet mang M N
	int m = 0;
	int arrM[MAXSIZE]{}, arrN[MAXSIZE]{};
	EnterArray_M(arrM, m);
	EnterArray_N(arrN, n);

	// Sap xep mang M tang dan
	SortAscendingB(arrM, m);
	std::cout << "\n12a.\tCac phan tu cua mang M sap xep theo thu tu tang dan : ";
	for (int i = 0; i < m; i++) {
		std::cout << arrM[i] << " ";
	}
	std::cout << std::endl;

	// Sap xep mang N tang dan
	SortAscendingB(arrN, n);
	std::cout << "\n12a.\tCac phan tu cua mang N sap xep theo thu tu tang dan : ";
	for (int i = 0; i < n; i++) {
		std::cout << arrN[i] << " ";
	}
	std::cout << std::endl;

	// duyet mang B
	int arrP[MAXSIZE]{};
	// gop mang P = M + N
	mergeArray(arrM, m, arrN, n, arrP);
	std::cout << "\n12b.\tCac phan tu cua mang P gop tu mang M va N la : ";
	for (int i = 0; i < m + n; i++) {
		std::cout << arrP[i] << " ";
	}
	std::cout << std::endl;

	// Sap xep mang P giam dan
	SortDescending(arrP, m + n);
	std::cout << "\n12b.\tCac phan tu cua mang P sap xep theo thu tu giam dan la : ";
	for (int i = 0; i < m + n; i++) {
		std::cout << arrP[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}