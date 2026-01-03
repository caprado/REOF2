void func_00163ba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163ba0: addiu $sp, $sp, -0x20
    a1 = 0x21 << 16;                                            // 0x00163ba4: lui $a1, 0x21
    a2 = 0x21 << 16;                                            // 0x00163bac: lui $a2, 0x21
    a1 = a1 + 0x5558;                                           // 0x00163bb4: addiu $a1, $a1, 0x5558
    a2 = a2 + 0x555c;                                           // 0x00163bbc: addiu $a2, $a2, 0x555c
    a0 = 0x21 << 16;                                            // 0x00163bc4: lui $a0, 0x21
    s2 = a0 + 0x4454;                                           // 0x00163bc8: addiu $s2, $a0, 0x4454
    a0 = 1;                                                     // 0x00163bcc: addiu $a0, $zero, 1
    v1 = g_00215558;  // Global at 0x00215558                   // 0x00163bd0: lw $v1, 0($a1)
    v0 = g_0021555c;  // Global at 0x0021555c                   // 0x00163bd4: lw $v0, 0($a2)
    s1 = g_00214454;  // Global at 0x00214454                   // 0x00163bd8: lw $s1, 0($s2)
    v1 = v1 + 1;                                                // 0x00163bdc: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x00163be0: addiu $v0, $v0, 1
    g_00215558 = v1;  // Global at 0x00215558                   // 0x00163be4: sw $v1, 0($a1)
    g_0021555c = v0;  // Global at 0x0021555c                   // 0x00163be8: sw $v0, 0($a2)
    if (s1 != a0) goto label_0x163c2c;                          // 0x00163bec: bnel $s1, $a0, 0x163c2c
    func_0015e338();  // 15e338                                // 0x00163bf4: jal 0x15e338
    /* nop */                                                   // 0x00163bf8: nop 
    s0 = v0 + 0x58;                                             // 0x00163bfc: addiu $s0, $v0, 0x58
    func_001633f8();  // 1633f8                                // 0x00163c00: jal 0x1633f8
    /* beqzl $v0, 0x163c2c */                                   // 0x00163c08: beqzl $v0, 0x163c2c
    v0 = g_00214454;  // Global at 0x00214454                   // 0x00163c10: lw $v0, 0($s2)
    if (v0 != s1) goto label_0x163c28;                          // 0x00163c14: bnel $v0, $s1, 0x163c28
    *(uint32_t*)(s0) = 0;                                       // 0x00163c18: sw $zero, 0($s0)
    func_00172140();  // 172140                                // 0x00163c1c: jal 0x172140
    /* nop */                                                   // 0x00163c20: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x00163c24: sw $zero, 0($s0)
label_0x163c28:
label_0x163c2c:
    return;                                                     // 0x00163c38: jr $ra
    sp = sp + 0x20;                                             // 0x00163c3c: addiu $sp, $sp, 0x20
}