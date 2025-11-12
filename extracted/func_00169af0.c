void func_00169af0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00169af0: lui $v0, 0x21
    g_00215580 = a0;  // Global at 0x00215580                   // 0x00169af4: sw $a0, 0x5580($v0)
    if (a0 == 0) goto label_0x169b08;                           // 0x00169af8: beqz $a0, 0x169b08
    v0 = -1;                                                    // 0x00169afc: addiu $v0, $zero, -1
    v1 = *(int32_t*)((a0) + 0x48);                              // 0x00169b00: lw $v1, 0x48($a0)
    if (v1 != 0) v0 = 0;                                        // 0x00169b04: movn $v0, $zero, $v1
label_0x169b08:
    return;                                                     // 0x00169b08: jr $ra
    /* nop */                                                   // 0x00169b0c: nop 
}