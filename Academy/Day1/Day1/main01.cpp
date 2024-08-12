#include<iostream>

using namespace std;

void main()
{
	printf("동해물과 백두산이 마르고 닳도록\n");
	printf("하느님이 보우하사 우리나라 만세\n");
	printf("무궁화 삼천리 화려 강산\n");
	printf("대한 사람 대한으로 길이 보전하세\n");
}

// 기본적으로 프로그래밍은 항상 main 함수를 실행 > main 함수는 프로그래밍의 시작점

// 원하지 않는 내용들을 제외해주는 파일이 .gitignore
// .gitignore 문법은 ** (덜 적었음)

// gitignore
// editorconfig
// .git/config

// 한글이라 생기는 문제 > Windows가 한국어로 세팅하면 Visual Studio에서 한국에서 만든 것이니
// UTF-8이 아니라 EUC-KR로 만들어줌
// 여기서 문제 Github는 한국 대상이 아닌 전세계의 IT를 위한 툴
// 따라서 약속된 인코딩 (UTF-8)만 읽어줌

// EUC-KR로 문서를 쓰고 나중에 UTF-8로 읽으면 한국어, 일본어, 중국어, 특수문자 등이 와장창 깨짐
// Github에 올리기 위해서는 UTF-8로 만들어 올리는 게 가장 좋기 때문에

// .editorconfig > 코드를 UTF-8 형식으로 맞추겠다
// .git/config > Github에 올릴 때 UTF-8 형식으로 하라고 다시 알려주는 것

// Control F5를 누를 때 컴퓨터에서 실행되는 방식
// [빌드] -> [실행]

// 빌드 > 우리가 작성한 code를 EXE(APK, IPA, EXE 등)로 변환해주는 과정
// 일반적으로 코드 형태로는 유저들이 사용할 수 없음

// 실행 > main문 안의 내용을 실행함
// main문 안의 내용을 실행하면 컴퓨터 메모리에 코드를 저장함, 
// 코드영역이 있어서 디버깅을 할 수 있음

// 메모리는 [데이터영역][코드영역][*힙영역][*스택영역] 4가지로 나뉨 > *은 중요

// Day1 과제 > Visual Studio 설치하기
