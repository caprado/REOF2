void func_0017b120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017b120: addiu $sp, $sp, -0x10
    v0 = 0x41;                                                  // 0x0017b12c: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((a3) + 4);                                 // 0x0017b130: lw $v1, 4($a3)
    if (v1 == v0) goto label_0x17b180;                          // 0x0017b134: beq $v1, $v0, 0x17b180
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017b13c: slti $v0, $v1, 0x42
    /* beqzl $v0, 0x17b184 */                                   // 0x0017b140: beqzl $v0, 0x17b184
    a2 = 0x23 << 16;                                            // 0x0017b144: lui $a2, 0x23
    v0 = 0x21;                                                  // 0x0017b148: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17b170;                          // 0x0017b14c: beq $v1, $v0, 0x17b170
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017b150: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17b184;                           // 0x0017b154: beqz $v0, 0x17b184
    a2 = 0x23 << 16;                                            // 0x0017b158: lui $a2, 0x23
    v0 = 0x11;                                                  // 0x0017b15c: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17b1a0;                          // 0x0017b160: beq $v1, $v0, 0x17b1a0
    goto label_0x17b188;                                        // 0x0017b168: b 0x17b188
    /* nop */                                                   // 0x0017b16c: nop 
label_0x17b170:
    return func_0017b1f0();  // Tail call                        // 0x0017b174: j 0x17b1a8
    sp = sp + 0x10;                                             // 0x0017b178: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017b17c: nop 
label_0x17b180:
    a2 = 0x23 << 16;                                            // 0x0017b180: lui $a2, 0x23
label_0x17b184:
label_0x17b188:
    a2 = &str_002296f0;  // "E201312: sfxcnv_IsCnvUpHalf : compo is invalid." // 0x0017b190: addiu $a2, $a2, -0x6910
    return func_0017cec8();  // Tail call                        // 0x0017b194: j 0x17ce88
    sp = sp + 0x10;                                             // 0x0017b198: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017b19c: nop 
label_0x17b1a0:
    return;                                                     // 0x0017b1a0: jr $ra
    sp = sp + 0x10;                                             // 0x0017b1a4: addiu $sp, $sp, 0x10
}