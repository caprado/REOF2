void func_001b5400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b5400: addiu $sp, $sp, -0x20
    at = 0x2b << 16;                                            // 0x001b5404: lui $at, 0x2b
    v0 = g_002ac5c8;  // Global at 0x002ac5c8                   // 0x001b5410: lw $v0, -0x3a38($at)
    s0 = 0x2b << 16;                                            // 0x001b5414: lui $s0, 0x2b
    if (v0 != 0) goto label_0x1b542c;                           // 0x001b5418: bnez $v0, 0x1b542c
    s0 = s0 + -0x3b70;                                          // 0x001b541c: addiu $s0, $s0, -0x3b70
    v0 = v0 + 1;                                                // 0x001b5420: addiu $v0, $v0, 1
    at = 0x2b << 16;                                            // 0x001b5424: lui $at, 0x2b
    g_002ac5c8 = v0;  // Global at 0x002ac5c8                   // 0x001b5428: sw $v0, -0x3a38($at)
label_0x1b542c:
    func_001b5060();  // 1b5060                                // 0x001b542c: jal 0x1b5060
    a0 = 1;                                                     // 0x001b5430: addiu $a0, $zero, 1
    func_006bb7e0();  // 0x6bb7e0                               // 0x001b5434: jal 0x6bb7e0
    /* nop */                                                   // 0x001b5438: nop 
    a1 = g_002ac4dc;  // Global at 0x002ac4dc                   // 0x001b543c: lw $a1, 0x4c($s0)
    v1 = 0xf000 << 16;                                          // 0x001b5440: lui $v1, 0xf000
    *(uint32_t*)(a1) = v1;                                      // 0x001b5448: sw $v1, 0($a1)
    *(uint32_t*)((a1) + 4) = 0;                                 // 0x001b544c: sw $zero, 4($a1)
    *(uint32_t*)((a1) + 8) = 0;                                 // 0x001b5450: sw $zero, 8($a1)
    func_001b5060();  // 1b5060                                // 0x001b5454: jal 0x1b5060
    *(uint32_t*)((a1) + 0xc) = 0;                               // 0x001b5458: sw $zero, 0xc($a1)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b5460: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b5464: jr $ra
    sp = sp + 0x20;                                             // 0x001b5468: addiu $sp, $sp, 0x20
}