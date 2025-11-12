void func_00141c50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00141c50: addiu $sp, $sp, -0x10
    return func_00141ae0();  // Tail call                       // 0x00141c60: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141c64: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141c68: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x00141c6c: addiu $a0, $zero, 1
    return func_00141ae0();  // Tail call                       // 0x00141c78: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141c7c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141c80: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x00141c84: addiu $a0, $zero, 2
    return func_00141ae0();  // Tail call                       // 0x00141c90: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141c94: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141c98: addiu $sp, $sp, -0x10
    a0 = 3;                                                     // 0x00141c9c: addiu $a0, $zero, 3
    return func_00141ae0();  // Tail call                       // 0x00141ca8: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141cac: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141cb0: addiu $sp, $sp, -0x10
    a0 = 4;                                                     // 0x00141cb4: addiu $a0, $zero, 4
    return func_00141ae0();  // Tail call                       // 0x00141cc0: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141cc4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141cc8: addiu $sp, $sp, -0x10
    a0 = 5;                                                     // 0x00141ccc: addiu $a0, $zero, 5
    return func_00141ae0();  // Tail call                       // 0x00141cd8: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141cdc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141ce0: addiu $sp, $sp, -0x10
    a0 = 6;                                                     // 0x00141ce4: addiu $a0, $zero, 6
    return func_00141ae0();  // Tail call                       // 0x00141cf0: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141cf4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141cf8: addiu $sp, $sp, -0x10
    a0 = 7;                                                     // 0x00141cfc: addiu $a0, $zero, 7
    return func_00141ae0();  // Tail call                       // 0x00141d08: j 0x141ae0
    sp = sp + 0x10;                                             // 0x00141d0c: addiu $sp, $sp, 0x10
    v1 = a0 << 2;                                               // 0x00141d10: sll $v1, $a0, 2
    a0 = ((unsigned)a0 < (unsigned)7) ? 1 : 0;                  // 0x00141d14: sltiu $a0, $a0, 7
    at = 0x21 << 16;                                            // 0x00141d18: lui $at, 0x21
    at = at + 0xbf8;                                            // 0x00141d1c: addiu $at, $at, 0xbf8
    v1 = at + v1;                                               // 0x00141d20: addu $v1, $at, $v1
    if (a0 == 0) goto label_0x141d30;                           // 0x00141d24: beqz $a0, 0x141d30
    v0 = *(int32_t*)(v1);                                       // 0x00141d2c: lw $v0, 0($v1)
label_0x141d30:
    return;                                                     // 0x00141d30: jr $ra
    /* nop */                                                   // 0x00141d34: nop 
}