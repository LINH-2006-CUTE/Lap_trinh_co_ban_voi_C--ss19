
#include <stdio.h>
#include <string.h>
  	struct SinhVien sv {
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
}SinhVien;
void delete(struct SinhVien sv[], int n );
int main(){
	SinhVien sv[50] = {
        { 1, "Le Van A", 18 , "0123456789" },	
        { 2, "Le Van B", 18 , "0123456789" },	
        { 3, "Le Van C", 18 , "0123456789" },
        { 4, "Le Van D", 18 , "0123456789" },
        { 5, "Le Van E", 18 , "0123456789" },
    };
    
	delete(sv, 5);
	
	return 0;
}
void delete( SinhVien sv[], int n ){
	int count = 0, index;
	char input[50];
	printf("\nNhap ten muon xoa: ");
	fgets( input, 50, stdin);
	int len = strlen(input);
	input[len-1] = '\0';
	for ( int i = 0; i< n; i++){
		if ( strcmp(sv[i].name , input) ==  0 ){
			count = 1;
			index = i;
			break;
		}
	}
	if ( count == 0 ){
		printf("\n Khong ton tai ten can tim!");
	}else{
		for ( int i = index; i<n-1 ; i++){
			sv[i].id = sv[i+1].id;
			strcpy( sv[i].name, sv[i+1].name);
			sv[i].age = sv[i+1].age;
			strcpy( sv[i].phoneNumber, sv[i+1].phoneNumber );
		}
		n--;
		printf("\nKet qua: \n");
		for ( int i = 0; i<n ; i++){
			printf("\n\nID: %d", sv[i].id);
			printf("\nTen: %s", sv[i].name);
			printf("\nTuoi: %d", sv[i].age);
			printf("\nPhone: %s ", sv[i].phoneNumber);
		}
	}
	
}


