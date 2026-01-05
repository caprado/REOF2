void func_00123a18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x22 << 16;                                            // 0x00123a18: lui $a1, 0x22
    sp = sp + -0x10;                                            // 0x00123a1c: addiu $sp, $sp, -0x10
    a2 = 4;                                                     // 0x00123a20: addiu $a2, $zero, 4
    a1 = a1 + 0x1ba0;                                           // 0x00123a24: addiu $a1, $a1, 0x1ba0
    func_00107a20();  // 107a20                                // 0x00123a30: jal 0x107a20
    a1 = 0x22 << 16;                                            // 0x00123a38: lui $a1, 0x22
    a1 = a1 + 0x1ba8;                                           // 0x00123a40: addiu $a1, $a1, 0x1ba8
    if (v0 == 0) goto label_0x123a5c;                           // 0x00123a44: beqz $v0, 0x123a5c
    a2 = 4;                                                     // 0x00123a48: addiu $a2, $zero, 4
    func_00107a20();  // 107a20                                // 0x00123a4c: jal 0x107a20
    /* nop */                                                   // 0x00123a50: nop 
    /* bnezl $v0, 0x123a60 */                                   // 0x00123a54: bnezl $v0, 0x123a60
label_0x123a5c:
    v0 = 1;                                                     // 0x00123a5c: addiu $v0, $zero, 1
    return;                                                     // 0x00123a68: jr $ra
    sp = sp + 0x10;                                             // 0x00123a6c: addiu $sp, $sp, 0x10
}