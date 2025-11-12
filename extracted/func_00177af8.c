void func_00177af8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 > 0) goto label_0x177b00;                            // 0x00177af8: bgtzl $a1, 0x177b00
    *(uint32_t*)((a0) + 0x10) = a1;                             // 0x00177afc: sw $a1, 0x10($a0)
label_0x177b00:
    return;                                                     // 0x00177b00: jr $ra
    /* nop */                                                   // 0x00177b04: nop 
}