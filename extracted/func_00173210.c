void func_00173210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00173210: lw $v1, 4($a0)
    if (v1 == 0) goto label_0x173228;                           // 0x00173214: beqz $v1, 0x173228
    v0 = -1;                                                    // 0x00173218: addiu $v0, $zero, -1
    v1 = *(int32_t*)((a0) + 0x40);                              // 0x0017321c: lw $v1, 0x40($a0)
    v1 = ((unsigned)v1 < (unsigned)0x2ba0) ? 1 : 0;             // 0x00173220: sltiu $v1, $v1, 0x2ba0
    if (v1 == 0) v0 = 0;                                        // 0x00173224: movz $v0, $zero, $v1
label_0x173228:
    return;                                                     // 0x00173228: jr $ra
    /* nop */                                                   // 0x0017322c: nop 
}