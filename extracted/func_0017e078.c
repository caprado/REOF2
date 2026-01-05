void func_0017e078() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017e078: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0017e07c: lui $v0, 0x21
    s0 = v0 + 0x5f78;                                           // 0x0017e084: addiu $s0, $v0, 0x5f78
    v1 = g_00215f78;  // Global at 0x00215f78                   // 0x0017e088: lw $v1, 0($s0)
    if (v1 > 0) goto label_0x17e0b4;                            // 0x0017e08c: bgtz $v1, 0x17e0b4
    func_0017e0c8();  // 17e0c8                                // 0x0017e094: jal 0x17e0c8
    /* nop */                                                   // 0x0017e098: nop 
    v1 = 0x26 << 16;                                            // 0x0017e09c: lui $v1, 0x26
    a0 = g_00215f78;  // Global at 0x00215f78                   // 0x0017e0a0: lw $a0, 0($s0)
    v1 = v1 + 0x78d0;                                           // 0x0017e0a4: addiu $v1, $v1, 0x78d0
    g_002678d0 = v0;  // Global at 0x002678d0                   // 0x0017e0a8: sw $v0, 0($v1)
    a0 = a0 + 1;                                                // 0x0017e0ac: addiu $a0, $a0, 1
    g_00215f78 = a0;  // Global at 0x00215f78                   // 0x0017e0b0: sw $a0, 0($s0)
label_0x17e0b4:
    return;                                                     // 0x0017e0bc: jr $ra
    sp = sp + 0x10;                                             // 0x0017e0c0: addiu $sp, $sp, 0x10
}