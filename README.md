# embedded-system-2024
IoT 개발자 임베디드시스템 학습 리포지토리

## 1일차
- 라즈베리파이 설정 하기
    - setting에 들어가서 글자크기 키우기
	- sudo apt update -> sudo apt upgrad -y -> clear 순서로 진행 (업데이트는 약 2주 단위로 진행)
	- 환경설정
	    - 편집기 : 코드 작업할 때 사용하는 프로그램(nano)
		- 한글
	- 기본 명령어(C언어 바탕으로 진행)
	- 주의할 점!!
	    - 기존 PC같이 사용하면 안된다.
		- 순서에 맞추어서 사용(동작중에 다른 명령어 처리 불가능)
- 명령어 정리
    - ls : 현재 디렉터리의 파일 목록을 표시
	- pwd : Print Working Directory의 약자로 현재 디렉터리의 전체 경로를 화면에 표시
	- clear : 화면을 깨끗하게 해줌
	- mkdir (work) : 새로운 디렉터리를 만들기 위함
	- rm -fr (work) : 삭제할 때 사용
	- ls -a : 숨겨져 있는 파일까지 보여줌
	- ls -l : 상세하게 보여줌
	- cd (work) : change directory -> work라는 디렉터리에 들어옴
	- cd .. : 상위 디렉토리로 빠져나옴
	- ls /etc : 환경에 관련된 디렉토리를 보여줌
	
## 2일차
- 명령어 정리
    - gcc -o 테스트 파일 테스트파일.c 
	- ("%d\n", 24);  : 정수출력
	- ("%c\n", 'A'); : 문자출력
	- ("%s\n", "RaspberryPI OS"); : 문자열 출력
	- enum.c : 열거형
	
	![열거형](https://raw.githubusercontent.com/qkrskdusdlqslek/embedded-system-2024/main/images/array.png)
	![열거형 풀이](https://raw.githubusercontent.com/qkrskdusdlqslek/embedded-system-2024/main/images/array01.png)

## 3일차
- 전위삽입  
- 후위삽입
- 출력함수

## 4일차
- 전체 메모리 해제
- 연결리스트

## 5일차
- 후입선출(LastInFirstOut) -> stack : 입구가 같음
- 선입선출(FirstInFirstOut) -> queue : 입구가 다름

## 6일차
- makefile 만들기: 
 - test: main.o inputf.o printf.o
    - gcc -o test main.o inputf.o printf.o

 - main.o: main.c
    - gcc -c main.c

 - inputf.o: inputf.c
    - gcc -c inputf.c

 - printf.o: printf.c
    - gcc -c printf.c
   
## 7일차
- 파일 만들고 입출력을 통한 파일 복사
- 미니 프로젝트


