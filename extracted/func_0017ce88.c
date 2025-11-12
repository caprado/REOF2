void func_0017ce88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017ce88: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0017ce8c: lui $v0, 0x21
    v0 = v0 + 0x58a8;                                           // 0x0017ce94: addiu $v0, $v0, 0x58a8
    v1 = g_002158b0;  // Global at 0x002158b0                   // 0x0017ce9c: lw $v1, 8($v0)
    a2 = g_002158a8;  // Global at 0x002158a8                   // 0x0017cea0: lw $a2, 0($v0)
    v1 = v1 + 1;                                                // 0x0017cea4: addiu $v1, $v1, 1
    a0 = g_002158ac;  // Global at 0x002158ac                   // 0x0017cea8: lw $a0, 4($v0)
    if (a2 == 0) goto label_0x17cebc;                           // 0x0017ceac: beqz $a2, 0x17cebc
    g_002158b0 = v1;  // Global at 0x002158b0                   // 0x0017ceb0: sw $v1, 8($v0)
    /* call function at address in a2 */                        // 0x0017ceb4: jalr $a2
    /* nop */                                                   // 0x0017ceb8: nop 
label_0x17cebc:
    return;                                                     // 0x0017cec0: jr $ra
    sp = sp + 0x10;                                             // 0x0017cec4: addiu $sp, $sp, 0x10
}