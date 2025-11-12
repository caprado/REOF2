void func_0015d698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d698: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((s1) + 0x2c);                              // 0x0015d6b0: lw $v1, 0x2c($s1)
    v0 = *(int32_t*)((s0) + 0xfc);                              // 0x0015d6b4: lw $v0, 0xfc($s0)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0015d6b8: slt $v0, $v0, $v1
    /* beqzl $v0, 0x15d6d4 */                                   // 0x0015d6bc: beqzl $v0, 0x15d6d4
    *(uint32_t*)((s0) + 0xfc) = v1;                             // 0x0015d6c0: sw $v1, 0xfc($s0)
    func_00161788();  // 0x161740                                // 0x0015d6c4: jal 0x161740
    /* nop */                                                   // 0x0015d6c8: nop 
    v1 = *(int32_t*)((s1) + 0x2c);                              // 0x0015d6cc: lw $v1, 0x2c($s1)
    *(uint32_t*)((s0) + 0xfc) = v1;                             // 0x0015d6d0: sw $v1, 0xfc($s0)
    return;                                                     // 0x0015d6e0: jr $ra
    sp = sp + 0x20;                                             // 0x0015d6e4: addiu $sp, $sp, 0x20
}