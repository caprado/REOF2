void func_00189010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00189010: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x00189014: lui $v0, 0x28
    v1 = 2;                                                     // 0x0018901c: addiu $v1, $zero, 2
    s0 = v0 + 0x12c0;                                           // 0x00189020: addiu $s0, $v0, 0x12c0
    g_002812c8 = v1;  // Global at 0x002812c8                   // 0x00189028: sw $v1, 8($s0)
    a0 = 0x28 << 16;                                            // 0x00189030: lui $a0, 0x28
    a1 = 0x8000 << 16;                                          // 0x00189034: lui $a1, 0x8000
    v0 = *(int32_t*)((t2) + 8);                                 // 0x00189038: lw $v0, 8($t2)
    a0 = a0 + 0x1248;                                           // 0x0018903c: addiu $a0, $a0, 0x1248
    local_0 = 0;                                                // 0x00189040: sw $zero, 0($sp)
    a1 = a1 | 0x131d;                                           // 0x00189044: ori $a1, $a1, 0x131d
    g_002812d0 = v0;  // Global at 0x002812d0                   // 0x00189048: sw $v0, 0x10($s0)
    t0 = 0x280;                                                 // 0x00189054: addiu $t0, $zero, 0x280
    v0 = *(int32_t*)((t2) + 0xc);                               // 0x00189058: lw $v0, 0xc($t2)
    t2 = 0x280;                                                 // 0x00189060: addiu $t2, $zero, 0x280
    func_001178a0();  // 0x1176a8                                // 0x00189068: jal 0x1176a8
    g_002812d4 = v0;  // Global at 0x002812d4                   // 0x0018906c: sw $v0, 0x14($s0)
    if (v0 >= 0) goto label_0x189088;                           // 0x00189070: bgezl $v0, 0x189088
    v0 = g_002812c4;  // Global at 0x002812c4                   // 0x00189074: lw $v0, 4($s0)
    a0 = 0x23 << 16;                                            // 0x00189078: lui $a0, 0x23
    func_001896f0();  // 0x1896c8                                // 0x0018907c: jal 0x1896c8
    a0 = &str_0022a188;  // "sceDbcSRData: rpc error\n"         // 0x00189080: addiu $a0, $a0, -0x5e78
    v0 = -1;                                                    // 0x00189084: addiu $v0, $zero, -1
label_0x189088:
    return;                                                     // 0x00189090: jr $ra
    sp = sp + 0x30;                                             // 0x00189094: addiu $sp, $sp, 0x30
}