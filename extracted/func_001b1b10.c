void func_001b1b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001b1a60();  // Tail call                        // 0x001b1b10: j 0x1b1a20
    a0 = 1;                                                     // 0x001b1b14: addiu $a0, $zero, 1
    /* nop */                                                   // 0x001b1b18: nop 
    /* nop */                                                   // 0x001b1b1c: nop 
    v0 = 0x1f48;                                                // 0x001b1b20: addiu $v0, $zero, 0x1f48
    /* multiply: a0 * v0 -> hi:lo */                            // 0x001b1b24: mult $ac3, $a0, $v0
    v0 = 0x4b << 16;                                            // 0x001b1b28: lui $v0, 0x4b
    v0 = v0 + -0x2b00;                                          // 0x001b1b2c: addiu $v0, $v0, -0x2b00
    return func_001b1950();  // Tail call                        // 0x001b1b30: j 0x1b18f0
    a0 = v0 + v1;                                               // 0x001b1b34: addu $a0, $v0, $v1
    /* nop */                                                   // 0x001b1b38: nop 
    /* nop */                                                   // 0x001b1b3c: nop 
    sp = sp + -0x20;                                            // 0x001b1b40: addiu $sp, $sp, -0x20
    func_001b1b10();  // 0x1b1ae0                                // 0x001b1b48: jal 0x1b1ae0
    func_001b1bd0();  // 0x1b1b10                                // 0x001b1b50: jal 0x1b1b10
    /* nop */                                                   // 0x001b1b54: nop 
    at = 0x4c << 16;                                            // 0x001b1b58: lui $at, 0x4c
    v1 = 0 & 0xffff;                                            // 0x001b1b5c: andi $v1, $zero, 0xffff
    g_004bee86 = 0;  // Global at 0x004bee86                    // 0x001b1b60: sh $zero, -0x117a($at)
    v0 = 0 & 0xff;                                              // 0x001b1b64: andi $v0, $zero, 0xff
    at = 0x4c << 16;                                            // 0x001b1b68: lui $at, 0x4c
    g_004bee84 = 0;  // Global at 0x004bee84                    // 0x001b1b70: sh $zero, -0x117c($at)
    at = 0x4c << 16;                                            // 0x001b1b74: lui $at, 0x4c
    g_004bcf41 = v1;  // Global at 0x004bcf41                   // 0x001b1b78: sb $v1, -0x30bf($at)
    at = 0x4c << 16;                                            // 0x001b1b7c: lui $at, 0x4c
    g_004bcf40 = v1;  // Global at 0x004bcf40                   // 0x001b1b80: sb $v1, -0x30c0($at)
    at = 0x4c << 16;                                            // 0x001b1b84: lui $at, 0x4c
    g_004c0dd6 = v0;  // Global at 0x004c0dd6                   // 0x001b1b88: sh $v0, 0xdd6($at)
    at = 0x4c << 16;                                            // 0x001b1b8c: lui $at, 0x4c
    g_004c0dd4 = v0;  // Global at 0x004c0dd4                   // 0x001b1b90: sh $v0, 0xdd4($at)
    at = 0x4c << 16;                                            // 0x001b1b94: lui $at, 0x4c
    g_004bee91 = 0;  // Global at 0x004bee91                    // 0x001b1b98: sb $zero, -0x116f($at)
    at = 0x4c << 16;                                            // 0x001b1b9c: lui $at, 0x4c
    g_004bee90 = 0;  // Global at 0x004bee90                    // 0x001b1ba0: sb $zero, -0x1170($at)
label_0x1b1ba4:
    func_001b1b20();  // 0x1b1b20                               // 0x001b1ba4: jal 0x1b1b20
    s0 = s0 + 1;                                                // 0x001b1bac: addiu $s0, $s0, 1
    v1 = ((unsigned)s0 < (unsigned)8) ? 1 : 0;                  // 0x001b1bb0: sltiu $v1, $s0, 8
    /* nop */                                                   // 0x001b1bb4: nop 
    if (v1 != 0) goto label_0x1b1ba4;                           // 0x001b1bb8: bnez $v1, 0x1b1ba4
    /* nop */                                                   // 0x001b1bbc: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1bc4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1bc8: jr $ra
    sp = sp + 0x20;                                             // 0x001b1bcc: addiu $sp, $sp, 0x20
}