void func_0017ce38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017ce38: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x17ce78;                           // 0x0017ce44: beqz $v0, 0x17ce78
    a0 = *(int32_t*)((v0) + 0x24);                              // 0x0017ce4c: lw $a0, 0x24($v0)
    s0 = *(int32_t*)((v0) + 0x30);                              // 0x0017ce50: lw $s0, 0x30($v0)
    func_0017d4e8();  // 0x17d4c0                                // 0x0017ce54: jal 0x17d4c0
    *(uint32_t*)(v0) = 0;                                       // 0x0017ce58: sw $zero, 0($v0)
    func_0017a438();  // 0x17a410                                // 0x0017ce5c: jal 0x17a410
    v1 = 0x21 << 16;                                            // 0x0017ce64: lui $v1, 0x21
    v1 = v1 + 0x58a0;                                           // 0x0017ce68: addiu $v1, $v1, 0x58a0
    v0 = g_002158a0;  // Global at 0x002158a0                   // 0x0017ce6c: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0017ce70: addiu $v0, $v0, -1
    g_002158a0 = v0;  // Global at 0x002158a0                   // 0x0017ce74: sw $v0, 0($v1)
label_0x17ce78:
    return;                                                     // 0x0017ce80: jr $ra
    sp = sp + 0x10;                                             // 0x0017ce84: addiu $sp, $sp, 0x10
}