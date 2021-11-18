#include <stdio.h>
#include <string.h>
#define MAX_DIGHTS 10
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, /* 0 */
    {0, 1, 1, 0, 0, 0, 0}, /* 1 */
    {1, 1, 0, 1, 1, 0, 1}, /* 2 */
    {1, 1, 1, 1, 0, 0, 1}, /* 3 */
    {0, 1, 1, 0, 0, 1, 1}, /* 4 */
    {1, 0, 1, 1, 0, 1, 1}, /* 5 */
    {1, 0, 1, 1, 1, 1, 1}, /* 6 */
    {1, 1, 1, 0, 0, 0, 0}, /* 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* 8 */
    {1, 1, 1, 1, 0, 1, 1}  /* 9 */
};
char dights[3][MAX_DIGHTS * 4];
void clear_dight_array(void);
void process_dights_array(int dight, int position);
void print_dights_array(void);
int main(void) {
    unsigned char numbers[MAX_DIGHTS];
    int ch, i = 0, j;
    clear_dight_array();
    printf("Enter a number: ");
    while ((ch = getchar()) != EOF && ch != '\n')
        if (i < MAX_DIGHTS && ch >= '0' && ch <= '9')
            process_dights_array(ch - '0', i++);
    print_dights_array();
    getchar();
    getchar();
    return 0;
}
void clear_dight_array(void) {
    memset(dights, ' ', sizeof dights);
}
void process_dights_array(int dight, int position) {
    int n = position * 4;
    if (segments[dight][0])
        dights[0][n + 1] = '_';
    if (segments[dight][1])
        dights[1][n + 2] = '|';
    if (segments[dight][2])
        dights[2][n + 2] = '|';
    if (segments[dight][3])
        dights[2][n + 1] = '_';
    if (segments[dight][4])
        dights[2][n]     = '|';
    if (segments[dight][5])
        dights[1][n]     = '|';
    if (segments[dight][6])
        dights[1][n + 1] = '_';
}
void print_dights_array(void) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < MAX_DIGHTS * 4; j++) {
            putchar(dights[i][j]);
        }
        putchar('\n');
    }
}