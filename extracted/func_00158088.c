void func_00158088() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00158088: lui $v0, 0x25
    g_002563e4 = a0;  // Global at 0x002563e4                   // 0x0015808c: sw $a0, 0x63e4($v0)
    if (a0 == 0) goto label_0x1580a4;                           // 0x00158090: beqz $a0, 0x1580a4
    v0 = -1;                                                    // 0x00158094: addiu $v0, $zero, -1
    v1 = *(int32_t*)(a0);                                       // 0x00158098: lw $v1, 0($a0)
    v1 = v1 ^ 1;                                                // 0x0015809c: xori $v1, $v1, 1
    if (v1 != 0) v0 = 0;                                        // 0x001580a0: movn $v0, $zero, $v1
label_0x1580a4:
    return;                                                     // 0x001580a4: jr $ra
    /* nop */                                                   // 0x001580a8: nop 
}