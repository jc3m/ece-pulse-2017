typedef struct Node {
    struct Node* left;
    struct Node* right;
} Node;

int calcDiameter(Node* root) {
    // Your code here.
    return -1;
}

void test() {
    // Your tests here.
    Node* tree = (Node*)malloc(sizeof(Node));

    int result = calcDiameter(tree);
    printf("Result: %d\n", result);

    free(tree);
}

int main(int argc, char* argv[]) {
    test();
    return 0;
}
