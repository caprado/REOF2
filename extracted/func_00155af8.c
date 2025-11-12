void func_00155af8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00155af8: lui $v0, 0x25
    g_002563d8 = a0;  // Global at 0x002563d8                   // 0x00155afc: sw $a0, 0x63d8($v0)
    if (a0 == 0) goto label_0x155b14;                           // 0x00155b00: beqz $a0, 0x155b14
    v0 = -1;                                                    // 0x00155b04: addiu $v0, $zero, -1
    v1 = *(int32_t*)(a0);                                       // 0x00155b08: lw $v1, 0($a0)
    v1 = v1 ^ 2;                                                // 0x00155b0c: xori $v1, $v1, 2
    if (v1 == 0) v0 = 0;                                        // 0x00155b10: movz $v0, $zero, $v1
label_0x155b14:
    return;                                                     // 0x00155b14: jr $ra
    /* nop */                                                   // 0x00155b18: nop 
}