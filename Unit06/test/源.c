#include<stdio.h>
#include<string.h>
typedef struct node {
    char ID[20];
    int Score;
    struct node* Next;
}Node, * List;

void Insert(List* L, Node e) {

    if (L == NULL) {
        L = &e;
    }
    else {
        List q = L;
        while (q = q->Next) {}
        q->Next = &e;
    }

}

void Swap(List* l, int i, int j) {
    //��Ϊ����е�˳����һ�µ�
    /*
    ���ַ�����1��������� 2����������е�ֵ
    �����ý�������е�ֵ
    */
    char ti_ID[20], tj_ID[20];
    int ti_Score, tj_Score;

    int cnt = 0;//��¼ÿ���ڵ�λ��
    List q = l;
    for (; q = q->Next;) {
        cnt++;
        if (cnt == i) {
            strcpy(ti_ID, q->ID);
            ti_Score = q->Score;
        }

        if (cnt == j) {
            strcpy(tj_ID, q->ID);
            tj_Score = q->Score;
        }
    }
    //Ȼ���ڽ���һ��ѭ����i��ֵ����jλ�õĽ�㣬j��ֵͬ��
    q = l;
    cnt = 0;
    while (q = q->Next) {
        cnt++;
        if (cnt == i) {
            strcpy(q->ID, ti_ID);
            q->Score = ti_Score;
        }
        if (cnt == j) {
            strcpy(q->ID, tj_ID);
            q->Score = tj_Score;
        }
    }
}

//��������
Node create_node(Node e) {
    char ID[20];
    int Score;
    scanf("%s %d", ID, &Score);
    strcpy(e.ID, ID);
    e.Score = Score;
    e.Next = NULL;
    return e;
}

void printList(List l) {
    List q = l;
    while (q) {
        printf("ѧ�ţ�%s  , ���� ��%d\n", q->ID, q->Score);
        q = q->Next;
    }
}
int main() {
    Node e;
    char ID[20];
    int Score;
    scanf("%s %d", ID, &Score);
    strcpy(e.ID, ID);
    e.Score = Score;
    e.Next = NULL;


    List l;
    Insert(&l, e);
    printList(l);
    return 0;
}