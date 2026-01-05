void func_00173080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00173080: addiu $sp, $sp, -0x10
    func_001738d0();  // 1738d0                                // 0x0017308c: jal 0x1738d0
    /* bnezl $v0, 0x1730a8 */                                   // 0x00173094: bnezl $v0, 0x1730a8
    v1 = 6;                                                     // 0x0017309c: addiu $v1, $zero, 6
    *(uint32_t*)((s0) + 0x4c) = v1;                             // 0x001730a0: sw $v1, 0x4c($s0)
    return;                                                     // 0x001730ac: jr $ra
    sp = sp + 0x10;                                             // 0x001730b0: addiu $sp, $sp, 0x10
}