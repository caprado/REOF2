void func_00188bf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x21 << 16;                                            // 0x00188bf8: lui $v1, 0x21
    sp = sp + -0x30;                                            // 0x00188bfc: addiu $sp, $sp, -0x30
    v0 = g_00216338;  // Global at 0x00216338                   // 0x00188c00: lw $v0, 0x6338($v1)
    if (v0 != 0) goto label_0x188c1c;                           // 0x00188c0c: bnez $v0, 0x188c1c
    goto label_0x188c70;                                        // 0x00188c14: b 0x188c70
label_0x188c1c:
    v0 = 0x28 << 16;                                            // 0x00188c1c: lui $v0, 0x28
    a0 = 0x28 << 16;                                            // 0x00188c20: lui $a0, 0x28
    s0 = v0 + 0x12c0;                                           // 0x00188c24: addiu $s0, $v0, 0x12c0
    a1 = 0x8000 << 16;                                          // 0x00188c28: lui $a1, 0x8000
    g_002812c0 = a2;  // Global at 0x002812c0                   // 0x00188c2c: sw $a2, 0x12c0($v0)
    a0 = a0 + 0x1248;                                           // 0x00188c30: addiu $a0, $a0, 0x1248
    local_0 = 0;                                                // 0x00188c34: sw $zero, 0($sp)
    a1 = a1 | 0x1302;                                           // 0x00188c38: ori $a1, $a1, 0x1302
    t0 = 0x280;                                                 // 0x00188c44: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188c4c: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x00188c50: jal 0x1176a8
    if (v0 >= 0) goto label_0x188c70;                           // 0x00188c58: bgezl $v0, 0x188c70
    v0 = g_002812c4;  // Global at 0x002812c4                   // 0x00188c5c: lw $v0, 4($s0)
    a0 = 0x23 << 16;                                            // 0x00188c60: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00188c64: jal 0x1896c8
    a0 = &str_0022a108;  // "sceDbcGetDepNumber: rpc error\n"   // 0x00188c68: addiu $a0, $a0, -0x5ef8
label_0x188c70:
    return;                                                     // 0x00188c78: jr $ra
    sp = sp + 0x30;                                             // 0x00188c7c: addiu $sp, $sp, 0x30
}