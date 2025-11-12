void func_0017a398() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x0017a398: lui $v0, 0x21
    v0 = v0 + 0x57f0;                                           // 0x0017a3a0: addiu $v0, $v0, 0x57f0
    a1 = g_002157f4;  // Global at 0x002157f4                   // 0x0017a3a4: lw $a1, 4($v0)
    if (a1 <= 0) goto label_0x17a3dc;                           // 0x0017a3a8: blez $a1, 0x17a3dc
    v0 = v0 + 8;                                                // 0x0017a3ac: addiu $v0, $v0, 8
    /* nop */                                                   // 0x0017a3b4: nop 
label_0x17a3b8:
    v1 = *(int32_t*)(a0);                                       // 0x0017a3b8: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x17a3e0;                           // 0x0017a3c0: beqz $v1, 0x17a3e0
    a0 = a0 + 0x14;                                             // 0x0017a3c4: addiu $a0, $a0, 0x14
    a2 = a2 + 1;                                                // 0x0017a3c8: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x0017a3cc: slt $v0, $a2, $a1
    /* nop */                                                   // 0x0017a3d0: nop 
    if (v0 != 0) goto label_0x17a3b8;                           // 0x0017a3d4: bnez $v0, 0x17a3b8
    /* nop */                                                   // 0x0017a3d8: nop 
label_0x17a3dc:
label_0x17a3e0:
    return;                                                     // 0x0017a3e0: jr $ra
    /* nop */                                                   // 0x0017a3e4: nop 
}