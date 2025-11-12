void func_00170018() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x2ab0);                            // 0x00170018: lw $v1, 0x2ab0($a0)
    a0 = *(int32_t*)((a0) + 0x1b30);                            // 0x00170020: lw $a0, 0x1b30($a0)
    if (v1 == 0) goto label_0x170040;                           // 0x00170024: beqz $v1, 0x170040
    a1 = v1 + 0xac4;                                            // 0x00170028: addiu $a1, $v1, 0xac4
    v0 = *(int32_t*)((a0) + 0x88);                              // 0x0017002c: lw $v0, 0x88($a0)
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00170034: slt $v1, $v1, $v0
    if (v1 == 0) v0 = a1;                                       // 0x0017003c: movz $v0, $a1, $v1
label_0x170040:
    return;                                                     // 0x00170040: jr $ra
    /* nop */                                                   // 0x00170044: nop 
}