void func_00160b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160b58: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x00160b5c: addiu $v0, $zero, 2
    s0 = 1;                                                     // 0x00160b64: addiu $s0, $zero, 1
    v1 = g_00228204;  // Global at 0x00228204                   // 0x00160b6c: lw $v1, 0x8c($a0)
    if (v1 == v0) goto label_0x160ba0;                          // 0x00160b70: beq $v1, $v0, 0x160ba0
    a0 = ((unsigned)v1 < (unsigned)3) ? 1 : 0;                  // 0x00160b74: sltiu $a0, $v1, 3
    /* beqzl $a0, 0x160b90 */                                   // 0x00160b78: beqzl $a0, 0x160b90
    v0 = 3;                                                     // 0x00160b7c: addiu $v0, $zero, 3
    if (v1 == s0) goto label_0x160bb4;                          // 0x00160b80: beq $v1, $s0, 0x160bb4
    goto label_0x160ba8;                                        // 0x00160b88: b 0x160ba8
    a0 = 0x23 << 16;                                            // 0x00160b8c: lui $a0, 0x23
    if (v1 == v0) goto label_0x160bb0;                          // 0x00160b90: beql $v1, $v0, 0x160bb0
    s0 = 3;                                                     // 0x00160b94: addiu $s0, $zero, 3
    goto label_0x160ba8;                                        // 0x00160b98: b 0x160ba8
    a0 = 0x23 << 16;                                            // 0x00160b9c: lui $a0, 0x23
label_0x160ba0:
    goto label_0x160bb0;                                        // 0x00160ba0: b 0x160bb0
    s0 = 2;                                                     // 0x00160ba4: addiu $s0, $zero, 2
label_0x160ba8:
    func_001634a8();  // 0x163410                                // 0x00160ba8: jal 0x163410
    a0 = &str_00228178;  // "E301274 : chromapos is invalid."   // 0x00160bac: addiu $a0, $a0, -0x7e88
label_0x160bb0:
label_0x160bb4:
    return;                                                     // 0x00160bbc: jr $ra
    sp = sp + 0x10;                                             // 0x00160bc0: addiu $sp, $sp, 0x10
}