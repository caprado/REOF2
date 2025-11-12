void func_00188c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00188c80: addiu $sp, $sp, -0x50
    s1 = 0x28 << 16;                                            // 0x00188c90: lui $s1, 0x28
    a0 = s1 + 0x4740;                                           // 0x00188c98: addiu $a0, $s1, 0x4740
    func_00114c70();  // 0x114bd8                                // 0x00188ca0: jal 0x114bd8
    a1 = a0 + 0x80;                                             // 0x00188ca4: addiu $a1, $a0, 0x80
    func_0011d378();  // 0x11d320                                // 0x00188ca8: jal 0x11d320
    /* nop */                                                   // 0x00188cac: nop 
    v1 = 0x28 << 16;                                            // 0x00188cb0: lui $v1, 0x28
    a2 = s1 + 0x4740;                                           // 0x00188cb4: addiu $a2, $s1, 0x4740
    a1 = v1 + 0x47c0;                                           // 0x00188cb8: addiu $a1, $v1, 0x47c0
    func_0011d390();  // 0x11d378                                // 0x00188d3c: jal 0x11d378
    s0 = v1 + 0x47c0;                                           // 0x00188d40: addiu $s0, $v1, 0x47c0
    v1 = s2 << 2;                                               // 0x00188d44: sll $v1, $s2, 2
    a0 = 1;                                                     // 0x00188d48: addiu $a0, $zero, 1
    v1 = v1 + s0;                                               // 0x00188d4c: addu $v1, $v1, $s0
    v0 = g_00280000;  // Global at 0x00280000                   // 0x00188d50: lw $v0, 0($v1)
    if (v0 != a0) goto label_0x188db0;                          // 0x00188d54: bne $v0, $a0, 0x188db0
    v0 = -0xc;                                                  // 0x00188d58: addiu $v0, $zero, -0xc
    v0 = 0x28 << 16;                                            // 0x00188d5c: lui $v0, 0x28
    a0 = 0x28 << 16;                                            // 0x00188d60: lui $a0, 0x28
    s0 = v0 + 0x12c0;                                           // 0x00188d64: addiu $s0, $v0, 0x12c0
    a1 = 0x8000 << 16;                                          // 0x00188d68: lui $a1, 0x8000
    g_002812c0 = s2;  // Global at 0x002812c0                   // 0x00188d6c: sw $s2, 0x12c0($v0)
    a0 = a0 + 0x1248;                                           // 0x00188d70: addiu $a0, $a0, 0x1248
    local_0 = 0;                                                // 0x00188d74: sw $zero, 0($sp)
    a1 = a1 | 0x1303;                                           // 0x00188d78: ori $a1, $a1, 0x1303
    t0 = 0x280;                                                 // 0x00188d84: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188d8c: addiu $t2, $zero, 0x280
    func_001178a0();  // 0x1176a8                                // 0x00188d90: jal 0x1176a8
    if (v0 >= 0) goto label_0x188db0;                           // 0x00188d98: bgezl $v0, 0x188db0
    v0 = g_002812c4;  // Global at 0x002812c4                   // 0x00188d9c: lw $v0, 4($s0)
    a0 = 0x23 << 16;                                            // 0x00188da0: lui $a0, 0x23
    func_001896f0();  // 0x1896c8                                // 0x00188da4: jal 0x1896c8
    a0 = &str_0022a128;  // "sceDbcInitSocket: rpc error\n"     // 0x00188da8: addiu $a0, $a0, -0x5ed8
label_0x188db0:
    return;                                                     // 0x00188dc0: jr $ra
    sp = sp + 0x50;                                             // 0x00188dc4: addiu $sp, $sp, 0x50
}