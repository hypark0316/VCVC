#include <stdio.h>

int main() {
    char command;

    // ���α׷� ���� �޽��� ���
    printf("���α׷� ����\n");

    // ���ڿ� ���
    printf("202007033\n������\napplication\n");

    // ���� ����
    while (1) {
        // Ŀ�ǵ� �Է� �ޱ�
        printf("command> ");
        scanf_s(" %c", &command);

        // ������� �Է¿� ���� ó��
        switch (command) {
        case 'p':
            printf("\"���� ������ �̳� ���ϴ� �л��̴�\"\n");
            break;
        case 'f':
            printf("\"���� ������ �ʹ� ��̴�\"\n");
            break;
        case 'j':
            printf("\"������ ���� �� ���ּ���\"\n");
            break;
        case 27: // ESC Ű�� ASCII �ڵ�� 27
            printf("���α׷� ����\n");
            return 0;
        default:
            printf("�߸��� �Է��Դϴ�. �ٽ� �õ����ּ���.\n");
        }
    }

    return 0;
}

