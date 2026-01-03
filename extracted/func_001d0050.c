void func_001d0050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1e;
    
    sp = sp + -0x20;                                            // 0x001d0050: addiu $sp, $sp, -0x20
    a1 = 2;                                                     // 0x001d0054: addiu $a1, $zero, 2
    local_1e = a0;                                              // 0x001d005c: sh $a0, 0x1e($sp)
    func_001d0000();  // 1d0000                                // 0x001d0060: jal 0x1d0000
    a0 = sp + 0x1e;                                             // 0x001d0064: addiu $a0, $sp, 0x1e
    v0 = local_1e;                                              // 0x001d0068: lhu $v0, 0x1e($sp)
    return;                                                     // 0x001d0070: jr $ra
    sp = sp + 0x20;                                             // 0x001d0074: addiu $sp, $sp, 0x20
}