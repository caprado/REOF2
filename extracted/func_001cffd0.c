void func_001cffd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1e;
    
    sp = sp + -0x20;                                            // 0x001cffd0: addiu $sp, $sp, -0x20
    a2 = 2;                                                     // 0x001cffd4: addiu $a2, $zero, 2
    func_001cfdf0();  // 1cfdf0                                // 0x001cffdc: jal 0x1cfdf0
    a1 = sp + 0x1e;                                             // 0x001cffe0: addiu $a1, $sp, 0x1e
    func_001d0050();  // 1d0050                                // 0x001cffe4: jal 0x1d0050
    a0 = local_1e;                                              // 0x001cffe8: lhu $a0, 0x1e($sp)
    local_1e = v0;                                              // 0x001cffec: sh $v0, 0x1e($sp)
    v0 = local_1e;                                              // 0x001cfff0: lhu $v0, 0x1e($sp)
    return;                                                     // 0x001cfff8: jr $ra
    sp = sp + 0x20;                                             // 0x001cfffc: addiu $sp, $sp, 0x20
}