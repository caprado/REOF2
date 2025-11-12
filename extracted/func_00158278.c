void func_00158278() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = *(uint8_t*)(a0);                                       // 0x00158278: lbu $a3, 0($a0)
    a2 = 0x100;                                                 // 0x0015827c: addiu $a2, $zero, 0x100
    v0 = *(uint8_t*)((a0) + 1);                                 // 0x00158280: lbu $v0, 1($a0)
    a3 = a3 << 8;                                               // 0x00158284: sll $a3, $a3, 8
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x00158288: lbu $v1, 2($a0)
    a3 = a3 | v0;                                               // 0x0015828c: or $a3, $a3, $v0
    a1 = *(uint8_t*)((a0) + 3);                                 // 0x00158290: lbu $a1, 3($a0)
    a3 = a3 << 8;                                               // 0x00158294: sll $a3, $a3, 8
    a3 = a3 | v1;                                               // 0x00158298: or $a3, $a3, $v1
    a3 = a3 << 8;                                               // 0x0015829c: sll $a3, $a3, 8
    a3 = a3 | a1;                                               // 0x001582a0: or $a3, $a3, $a1
    if (a3 == a2) goto label_0x158304;                          // 0x001582a4: beq $a3, $a2, 0x158304
    t0 = 4;                                                     // 0x001582a8: addiu $t0, $zero, 4
    v0 = 0x101;                                                 // 0x001582ac: addiu $v0, $zero, 0x101
    if (a3 == v0) goto label_0x158304;                          // 0x001582b0: beq $a3, $v0, 0x158304
    t0 = 3;                                                     // 0x001582b4: addiu $t0, $zero, 3
    v0 = a3 + -0x102;                                           // 0x001582b8: addiu $v0, $a3, -0x102
    v0 = ((unsigned)v0 < (unsigned)0xae) ? 1 : 0;               // 0x001582bc: sltiu $v0, $v0, 0xae
    if (v0 != 0) goto label_0x158304;                           // 0x001582c0: bnez $v0, 0x158304
    t0 = 1;                                                     // 0x001582c4: addiu $t0, $zero, 1
    v0 = 0x1b2;                                                 // 0x001582c8: addiu $v0, $zero, 0x1b2
    if (a3 == v0) goto label_0x158304;                          // 0x001582cc: beq $a3, $v0, 0x158304
    t0 = 0x20;                                                  // 0x001582d0: addiu $t0, $zero, 0x20
    v0 = 0x1b3;                                                 // 0x001582d4: addiu $v0, $zero, 0x1b3
    if (a3 == v0) goto label_0x158304;                          // 0x001582d8: beq $a3, $v0, 0x158304
    t0 = 0x40;                                                  // 0x001582dc: addiu $t0, $zero, 0x40
    v0 = 0x1b5;                                                 // 0x001582e0: addiu $v0, $zero, 0x1b5
    if (a3 == v0) goto label_0x158304;                          // 0x001582e4: beq $a3, $v0, 0x158304
    t0 = 0x10;                                                  // 0x001582e8: addiu $t0, $zero, 0x10
    v0 = 0x1b7;                                                 // 0x001582ec: addiu $v0, $zero, 0x1b7
    if (a3 == v0) goto label_0x158304;                          // 0x001582f0: beq $a3, $v0, 0x158304
    t0 = 0x80;                                                  // 0x001582f4: addiu $t0, $zero, 0x80
    v0 = a3 ^ 0x1b8;                                            // 0x001582f8: xori $v0, $a3, 0x1b8
    t0 = 8;                                                     // 0x001582fc: addiu $t0, $zero, 8
    if (v0 != 0) t0 = 0;                                        // 0x00158300: movn $t0, $zero, $v0
label_0x158304:
    return;                                                     // 0x00158304: jr $ra
}