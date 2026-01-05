void func_001d8b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xd0;                                            // 0x001d8b10: addiu $sp, $sp, -0xd0
    at = 0x49 << 16;                                            // 0x001d8b14: lui $at, 0x49
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d8b1c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8b28: addu.qb $zero, $sp, $s1
    a1 = 0x24 << 16;                                            // 0x001d8b34: lui $a1, 0x24
    g_004912df = 0;  // Global at 0x004912df                    // 0x001d8b38: sb $zero, 0x12df($at)
    a0 = sp + 0x50;                                             // 0x001d8b3c: addiu $a0, $sp, 0x50
    at = 0x31 << 16;                                            // 0x001d8b40: lui $at, 0x31
    a1 = &str_00247750;  // "data\\rom\\motion\\demo\\r%03d\\d%02dface.bin" // 0x001d8b44: addiu $a1, $a1, 0x7750
    s1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8b48: lw $s1, 0x37fc($at)
    func_0010a4d8();  // 10a4d8                                // 0x001d8b50: jal 0x10a4d8
    s0 = sp + 0x50;                                             // 0x001d8b58: addiu $s0, $sp, 0x50
    a2 = 1;                                                     // 0x001d8b64: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d8b68: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d8b94;                           // 0x001d8b70: blez $v0, 0x1d8b94
    /* nop */                                                   // 0x001d8b74: nop 
    a1 = 0x49 << 16;                                            // 0x001d8b78: lui $a1, 0x49
    a1 = a1 + 0x2cf0;                                           // 0x001d8b84: addiu $a1, $a1, 0x2cf0
    a3 = 0xc8;                                                  // 0x001d8b88: addiu $a3, $zero, 0xc8
    func_001d87a0();  // 1d87a0                                // 0x001d8b8c: jal 0x1d87a0
label_0x1d8b94:
    a1 = 0x24 << 16;                                            // 0x001d8b94: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d8b98: addiu $a0, $sp, 0x50
    a1 = &str_00247780;  // "data\\rom\\motion\\demo\\r%03d\\hd%02d.bin" // 0x001d8b9c: addiu $a1, $a1, 0x7780
    func_0010a4d8();  // 10a4d8                                // 0x001d8ba4: jal 0x10a4d8
    a2 = 1;                                                     // 0x001d8bb4: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d8bb8: jal 0x1d3390
    if (v0 <= 0) goto label_0x1d8be4;                           // 0x001d8bc0: blez $v0, 0x1d8be4
    /* nop */                                                   // 0x001d8bc4: nop 
    a1 = 0x49 << 16;                                            // 0x001d8bc8: lui $a1, 0x49
    a1 = a1 + 0x2060;                                           // 0x001d8bd4: addiu $a1, $a1, 0x2060
    a3 = 0xc8;                                                  // 0x001d8bd8: addiu $a3, $zero, 0xc8
    func_001d87a0();  // 1d87a0                                // 0x001d8bdc: jal 0x1d87a0
label_0x1d8be4:
    a1 = 0x24 << 16;                                            // 0x001d8be4: lui $a1, 0x24
    a0 = sp + 0x50;                                             // 0x001d8bf0: addiu $a0, $sp, 0x50
    func_0010a4d8();  // 10a4d8                                // 0x001d8bf4: jal 0x10a4d8
    a1 = &str_002477b0;  // "data\\rom\\motion\\demo\\r%03d\\b%02d.bin" // 0x001d8bf8: addiu $a1, $a1, 0x77b0
    a2 = 1;                                                     // 0x001d8c04: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d8c08: jal 0x1d3390
    if (a2 <= 0) goto label_0x1d8c30;                           // 0x001d8c14: blez $a2, 0x1d8c30
    a1 = 0x4c << 16;                                            // 0x001d8c18: lui $a1, 0x4c
    a1 = a1 + -0x1170;                                          // 0x001d8c20: addiu $a1, $a1, -0x1170
    a3 = 0xc8;                                                  // 0x001d8c24: addiu $a3, $zero, 0xc8
    func_001d87a0();  // 1d87a0                                // 0x001d8c28: jal 0x1d87a0
label_0x1d8c30:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d8c38: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d8c3c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8c40: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8c44: jr $ra
    sp = sp + 0xd0;                                             // 0x001d8c48: addiu $sp, $sp, 0xd0
}