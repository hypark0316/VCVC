#include <stdio.h>

int main() {
    char command;

    // 프로그램 시작 메시지 출력
    printf("프로그램 시작\n");

    // 문자열 출력
    printf("202007033\n박형열\napplication\n");

    // 무한 루프
    while (1) {
        // 커맨드 입력 받기
        printf("command> ");
        scanf_s(" %c", &command);

        // 사용자의 입력에 따른 처리
        switch (command) {
        case 'p':
            printf("\"나는 과제를 겁나 잘하는 학생이다\"\n");
            break;
        case 'f':
            printf("\"나는 과제가 너무 즐겁다\"\n");
            break;
        case 'j':
            printf("\"교수님 과제 더 내주세요\"\n");
            break;
        case 27: // ESC 키의 ASCII 코드는 27
            printf("프로그램 종료\n");
            return 0;
        default:
            printf("잘못된 입력입니다. 다시 시도해주세요.\n");
        }
    }

    return 0;
}

