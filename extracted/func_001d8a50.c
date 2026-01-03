void func_001d8a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001d8a50: addiu $sp, $sp, -0xa0
    a1 = 0x24 << 16;                                            // 0x001d8a54: lui $a1, 0x24
    a2 = a0 & 0xff;                                             // 0x001d8a5c: andi $a2, $a0, 0xff
    a1 = a1 + 0x7710;                                           // 0x001d8a68: addiu $a1, $a1, 0x7710
    goto label_0x1d8a80;                                        // 0x001d8a6c: b 0x1d8a80
    v1 = -1;                                                    // 0x001d8a70: addiu $v1, $zero, -1
label_0x1d8a74:
    if (a2 == a0) goto label_0x1d8a94;                          // 0x001d8a74: beq $a2, $a0, 0x1d8a94
    /* nop */                                                   // 0x001d8a78: nop 
    a3 = a3 + 1;                                                // 0x001d8a7c: addiu $a3, $a3, 1
label_0x1d8a80:
    a0 = a1 + a3;                                               // 0x001d8a80: addu $a0, $a1, $a3
    a0 = g_00247710;  // Global at 0x00247710                   // 0x001d8a84: lb $a0, 0($a0)
    /* nop */                                                   // 0x001d8a88: nop 
    if (a0 != v1) goto label_0x1d8a74;                          // 0x001d8a8c: bne $a0, $v1, 0x1d8a74
    /* nop */                                                   // 0x001d8a90: nop 
label_0x1d8a94:
    a0 = 0x24 << 16;                                            // 0x001d8a94: lui $a0, 0x24
    v1 = -1;                                                    // 0x001d8a98: addiu $v1, $zero, -1
    a0 = a0 + 0x7710;                                           // 0x001d8a9c: addiu $a0, $a0, 0x7710
    a0 = a0 + a3;                                               // 0x001d8aa0: addu $a0, $a0, $a3
    a0 = g_00247710;  // Global at 0x00247710                   // 0x001d8aa4: lb $a0, 0($a0)
    if (a0 == v1) goto label_0x1d8af4;                          // 0x001d8aa8: beq $a0, $v1, 0x1d8af4
    at = 0x31 << 16;                                            // 0x001d8aac: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d8ab0: lui $a1, 0x24
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8ab4: lw $s0, 0x37fc($at)
    a0 = sp + 0x20;                                             // 0x001d8ab8: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001d8abc: jal 0x10a4d8
    a1 = &str_00247720;  // "data\\rom\\motion\\demo\\r%03d\\d%02d.bin" // 0x001d8ac0: addiu $a1, $a1, 0x7720
    v0 = 2 << 16;                                               // 0x001d8ac4: lui $v0, 2
    a0 = sp + 0x20;                                             // 0x001d8ac8: addiu $a0, $sp, 0x20
    func_001d3390();  // 1d3390                                // 0x001d8ad4: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8ad8: ori $a2, $v0, 1
    a1 = 0x4a << 16;                                            // 0x001d8adc: lui $a1, 0x4a
    a1 = a1 + -0x63d0;                                          // 0x001d8ae4: addiu $a1, $a1, -0x63d0
    func_001d8780();  // 1d8780                                // 0x001d8aec: jal 0x1d8780
label_0x1d8af4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8af8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8afc: jr $ra
    sp = sp + 0xa0;                                             // 0x001d8b00: addiu $sp, $sp, 0xa0
}