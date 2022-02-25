#include "headrer2.h"
namespace header1 {
	int foo() {
		header2::foo();
	}
	void bar();
}
//header2.h
namespace header2 {
	int foo();
	void bar();
}
//---------------------------------------------------------
// 만약 header1:: 없이 사용허고 싶다면 아래와 같이 명시해주시면 됩니다
using namespace header2;

int main(){
	header1::foo(); // header1 에 있는 함수 호출 
	foo(); 			// header2 에 있는 함수 호출
}
