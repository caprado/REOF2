void func_00158df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00158df0: addiu $sp, $sp, -0x30
    func_0015b470();  // 15b470                                // 0x00158e0c: jal 0x15b470
    if (v0 == 0) goto label_0x158e40;                           // 0x00158e14: beqz $v0, 0x158e40
    a1 = 0xff03 << 16;                                          // 0x00158e1c: lui $a1, 0xff03
    a1 = a1 | 0x20a;                                            // 0x00158e2c: ori $a1, $a1, 0x20a
    return func_00158c48();  // Tail call                        // 0x00158e38: j 0x158bf8
    sp = sp + 0x30;                                             // 0x00158e3c: addiu $sp, $sp, 0x30
label_0x158e40:
    s1 = 0xff03 << 16;                                          // 0x00158e40: lui $s1, 0xff03
    s2 = 4;                                                     // 0x00158e44: addiu $s2, $zero, 4
    s1 = s1 | 0x305;                                            // 0x00158e48: ori $s1, $s1, 0x305
    /* nop */                                                   // 0x00158e4c: nop 
label_0x158e50:
    func_0015aaa8();  // 15aaa8                                // 0x00158e50: jal 0x15aaa8
    a1 = 1;                                                     // 0x00158e5c: addiu $a1, $zero, 1
    a2 = 4;                                                     // 0x00158e60: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x158e84;                           // 0x00158e64: beqz $v0, 0x158e84
    v1 = v0 & 0xcc;                                             // 0x00158e68: andi $v1, $v0, 0xcc
    /* bnezl $v1, 0x158e84 */                                   // 0x00158e6c: bnezl $v1, 0x158e84
    func_0015acd0();  // 15acd0                                // 0x00158e74: jal 0x15acd0
    /* nop */                                                   // 0x00158e78: nop 
    if (v0 == s2) goto label_0x158e50;                          // 0x00158e7c: beq $v0, $s2, 0x158e50
    /* nop */                                                   // 0x00158e80: nop 
label_0x158e84:
    return func_00158c48();  // Tail call                        // 0x00158ea0: j 0x158bf8
    sp = sp + 0x30;                                             // 0x00158ea4: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x00158ea8: addiu $sp, $sp, -0x20
    func_0015b470();  // 15b470                                // 0x00158ebc: jal 0x15b470
    if (v0 == 0) goto label_0x158ee8;                           // 0x00158ec4: beqz $v0, 0x158ee8
    a1 = 0xff03 << 16;                                          // 0x00158ecc: lui $a1, 0xff03
    a1 = a1 | 0x20c;                                            // 0x00158edc: ori $a1, $a1, 0x20c
    return func_00158c48();  // Tail call                        // 0x00158ee0: j 0x158bf8
    sp = sp + 0x20;                                             // 0x00158ee4: addiu $sp, $sp, 0x20
label_0x158ee8:
    v1 = s0 + 0x1d0;                                            // 0x00158eec: addiu $v1, $s0, 0x1d0
    v0 = v1 | a1;                                               // 0x00158ef0: or $v0, $v1, $a1
    v0 = v0 & 7;                                                // 0x00158ef4: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x158f60;                           // 0x00158ef8: beqz $v0, 0x158f60
    a0 = s0 + 0x210;                                            // 0x00158efc: addiu $a0, $s0, 0x210
label_0x158f00:
    v1 = v1 + 0x20;                                             // 0x00158f40: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x00158f44: nop 
    /* nop */                                                   // 0x00158f48: nop 
    if (v1 != a0) goto label_0x158f00;                          // 0x00158f4c: bne $v1, $a0, 0x158f00
    a1 = a1 + 0x20;                                             // 0x00158f50: addiu $a1, $a1, 0x20
    goto label_0x158f94;                                        // 0x00158f54: b 0x158f94
    /* nop */                                                   // 0x00158f58: nop 
    /* nop */                                                   // 0x00158f5c: nop 
label_0x158f60:
    v1 = v1 + 0x20;                                             // 0x00158f80: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x00158f84: nop 
    /* nop */                                                   // 0x00158f88: nop 
    if (v1 != a0) goto label_0x158f60;                          // 0x00158f8c: bne $v1, $a0, 0x158f60
    a1 = a1 + 0x20;                                             // 0x00158f90: addiu $a1, $a1, 0x20
label_0x158f94:
    a2 = *(int32_t*)((v1) + 0x10);                              // 0x00158fa4: lw $a2, 0x10($v1)
    g_ff030050 = a2;  // Global at 0xff030050                   // 0x00158fbc: sw $a2, 0x10($a1)
    return;                                                     // 0x00158fcc: jr $ra
    sp = sp + 0x20;                                             // 0x00158fd0: addiu $sp, $sp, 0x20
}