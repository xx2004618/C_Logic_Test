//
//  main.c
//  C_Logic_Test
//
//  Created by Xiao Xiang on 16/2/26.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 4; // 00000000 00000000 00000000 00000100
    int b = 7; // 00000000 00000000 00000000 00000111
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
}
