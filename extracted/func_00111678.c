void func_00111678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = -1;                                                    // 0x00111680: addiu $a1, $zero, -1
    a3 = v1 & 0x7ff;                                            // 0x00111690: andi $a3, $v1, 0x7ff
    v1 = v0 & a1;                                               // 0x00111694: and $v1, $v0, $a1
    if (a3 != 0) return;  // Branch to 0x1116b0                 // 0x00111698: bnez $a3, 0x1116b0
    *(uint32_t*)((a2) + 4) = a0;                                // 0x0011169c: sw $a0, 4($a2)
    v0 = 2;                                                     // 0x001116a0: addiu $v0, $zero, 2
    return;                                                     // 0x001116a4: jr $ra
    *(uint32_t*)(a2) = v0;                                      // 0x001116a8: sw $v0, 0($a2)
}