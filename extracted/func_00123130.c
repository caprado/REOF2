void func_00123130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x22 << 16;                                            // 0x00123130: lui $a1, 0x22
    sp = sp + -0x10;                                            // 0x00123134: addiu $sp, $sp, -0x10
    a2 = 4;                                                     // 0x00123138: addiu $a2, $zero, 4
    a1 = a1 + 0x1b90;                                           // 0x0012313c: addiu $a1, $a1, 0x1b90
    func_00107ab8();  // 0x107a20                                // 0x00123148: jal 0x107a20
    a1 = 0x22 << 16;                                            // 0x00123150: lui $a1, 0x22
    a0 = s0 + 8;                                                // 0x00123154: addiu $a0, $s0, 8
    a1 = a1 + 0x1b98;                                           // 0x00123158: addiu $a1, $a1, 0x1b98
    if (v0 != 0) goto label_0x123180;                           // 0x0012315c: bnez $v0, 0x123180
    a2 = 4;                                                     // 0x00123160: addiu $a2, $zero, 4
    func_00107ab8();  // 0x107a20                                // 0x00123164: jal 0x107a20
    /* nop */                                                   // 0x00123168: nop 
    /* bnezl $v0, 0x123184 */                                   // 0x0012316c: bnezl $v0, 0x123184
    goto label_0x123184;                                        // 0x00123174: b 0x123184
    v0 = 1;                                                     // 0x00123178: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0012317c: nop 
label_0x123180:
label_0x123184:
    return;                                                     // 0x0012318c: jr $ra
    sp = sp + 0x10;                                             // 0x00123190: addiu $sp, $sp, 0x10
}