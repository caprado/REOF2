void func_00161a88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00161a88: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x00161aa4: addiu $a2, $sp, 4
    func_0017d050();  // 17d050                                // 0x00161aa8: jal 0x17d050
    a0 = *(int32_t*)((a0) + 0xa8);                              // 0x00161aac: lw $a0, 0xa8($a0)
    v0 = local_0;                                               // 0x00161ab0: lw $v0, 0($sp)
    v1 = local_4;                                               // 0x00161ab4: lw $v1, 4($sp)
    *(uint32_t*)(s0) = v0;                                      // 0x00161ab8: sw $v0, 0($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x00161abc: sw $v1, 0($s1)
    return;                                                     // 0x00161acc: jr $ra
    sp = sp + 0x30;                                             // 0x00161ad0: addiu $sp, $sp, 0x30
}