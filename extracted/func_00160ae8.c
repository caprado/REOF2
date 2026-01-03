void func_00160ae8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160ae8: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x00160aec: addiu $v0, $zero, 2
    s0 = 3;                                                     // 0x00160af4: addiu $s0, $zero, 3
    v1 = g_002281d8;  // Global at 0x002281d8                   // 0x00160afc: lw $v1, 0x88($a0)
    if (v1 == v0) goto label_0x160b30;                          // 0x00160b00: beq $v1, $v0, 0x160b30
    a0 = ((unsigned)v1 < (unsigned)3) ? 1 : 0;                  // 0x00160b04: sltiu $a0, $v1, 3
    if (a0 == 0) goto label_0x160b20;                           // 0x00160b08: beqz $a0, 0x160b20
    v0 = 1;                                                     // 0x00160b0c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x160b40;                          // 0x00160b10: beql $v1, $v0, 0x160b40
    s0 = 1;                                                     // 0x00160b14: addiu $s0, $zero, 1
    goto label_0x160b38;                                        // 0x00160b18: b 0x160b38
    a0 = 0x23 << 16;                                            // 0x00160b1c: lui $a0, 0x23
label_0x160b20:
    if (v1 == s0) goto label_0x160b44;                          // 0x00160b20: beq $v1, $s0, 0x160b44
    goto label_0x160b38;                                        // 0x00160b28: b 0x160b38
    a0 = 0x23 << 16;                                            // 0x00160b2c: lui $a0, 0x23
label_0x160b30:
    goto label_0x160b40;                                        // 0x00160b30: b 0x160b40
    s0 = 2;                                                     // 0x00160b34: addiu $s0, $zero, 2
label_0x160b38:
    func_00163410();  // 163410                                // 0x00160b38: jal 0x163410
    a0 = &str_00228150;  // "E301273 : chroma_format is invalid." // 0x00160b3c: addiu $a0, $a0, -0x7eb0
label_0x160b40:
label_0x160b44:
    return;                                                     // 0x00160b4c: jr $ra
    sp = sp + 0x10;                                             // 0x00160b50: addiu $sp, $sp, 0x10
}