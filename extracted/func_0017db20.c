void func_0017db20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0017db20: addiu $sp, $sp, -0x30
    *(uint16_t*)(s1) = 0;                                       // 0x0017db3c: sh $zero, 0($s1)
    func_0017d730();  // 0x17d628                                // 0x0017db40: jal 0x17d628
    a3 = sp + 4;                                                // 0x0017db44: addiu $a3, $sp, 4
    a1 = local_0;                                               // 0x0017db4c: lw $a1, 0($sp)
    func_0017dd90();  // 0x17db70                                // 0x0017db54: jal 0x17db70
    a2 = local_4;                                               // 0x0017db58: lw $a2, 4($sp)
    return;                                                     // 0x0017db68: jr $ra
    sp = sp + 0x30;                                             // 0x0017db6c: addiu $sp, $sp, 0x30
}