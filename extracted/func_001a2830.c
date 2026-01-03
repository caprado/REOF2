void func_001a2830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2830: addiu $sp, $sp, -0x10
    func_001a2850();  // 1a2850                                // 0x001a2838: jal 0x1a2850
    *(uint32_t*)((gp) + -0x6424) = 0;                           // 0x001a283c: sw $zero, -0x6424($gp)
    v0 = *(int32_t*)((gp) + -0x6424);                           // 0x001a2844: lw $v0, -0x6424($gp)
    return;                                                     // 0x001a2848: jr $ra
    sp = sp + 0x10;                                             // 0x001a284c: addiu $sp, $sp, 0x10
}