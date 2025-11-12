void func_001798a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001798a8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001798bc: lw $v0, 4($a0)
    func_00178fa0();  // 0x178f58                                // 0x001798c0: jal 0x178f58
    s0 = v0 + 0xb0;                                             // 0x001798c4: addiu $s0, $v0, 0xb0
    /* beqzl $v0, 0x1798e0 */                                   // 0x001798c8: beqzl $v0, 0x1798e0
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x001798d0: lw $v1, 0xc($s0)
    v0 = 1;                                                     // 0x001798d4: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x001798d8: sw $v1, 0($s1)
    return;                                                     // 0x001798e8: jr $ra
    sp = sp + 0x20;                                             // 0x001798ec: addiu $sp, $sp, 0x20
}