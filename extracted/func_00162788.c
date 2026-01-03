void func_00162788() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162788: addiu $sp, $sp, -0x10
    func_0013d080();  // 13d080                                // 0x00162798: jal 0x13d080
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x0016279c: lw $a0, 0x4c($a0)
    *(uint32_t*)(s0) = v0;                                      // 0x001627a0: sw $v0, 0($s0)
    return;                                                     // 0x001627ac: jr $ra
    sp = sp + 0x10;                                             // 0x001627b0: addiu $sp, $sp, 0x10
}