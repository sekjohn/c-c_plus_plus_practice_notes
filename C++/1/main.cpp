#include <iostream>

namespace {
  //name space 
  //이 함수는 이 파일 안에서만 사용하 수 있습니다
  //이는 마치 static int  OnlyIntThisFile() 과 동일합니다
  int OnlyIntThisFile() {

  };
  //이 함수 역시 static int x 와 동일 합니다
  int only_in_this_file = 0;
} 

int main() {
  std::cout << "Hello, World!!"<< std::endl << "my name is" << "sekjohn"<< std::endl;
  return 0;
}

//std : c++ 표준 라이브러리의 모든 함수, 객체등이 정의된 이름 공간 (namespace)입니다
//std::cout  -> std 안에 있는 cout 함수 사용
//  cout() 함수 란 : ostream 클래스의 객체로 표준풀력 담당
//std::endl  -> std 안에 있는 endl 함수 
//  endl() 함수 란 : 줄바꿈을 위해 사용하기도 하지만 출력 함수의 끝을 
// 	알림으로써 버퍼를 정리하는 기능까지 가지고 있습니다