void func_00173e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173e60: addiu $sp, $sp, -0x20
    s0 = a1 + 3;                                                // 0x00173e68: addiu $s0, $a1, 3
    s0 = (unsigned)s0 >> 2;                                     // 0x00173e6c: srl $s0, $s0, 2
    s0 = s0 << 2;                                               // 0x00173e74: sll $s0, $s0, 2
    s2 = a2 + -4;                                               // 0x00173e78: addiu $s2, $a2, -4
    func_00107c70();  // 107c70                                // 0x00173e90: jal 0x107c70
    *(uint32_t*)(s1) = s0;                                      // 0x00173e98: sw $s0, 0($s1)
    v0 = 0xc;                                                   // 0x00173e9c: addiu $v0, $zero, 0xc
    /* divide: s2 / v0 -> hi:lo */                              // 0x00173ea0: div $zero, $s2, $v0
    /* beqzl $v0, 0x173eac */                                   // 0x00173ea4: beqzl $v0, 0x173eac
    /* break (trap) */                                          // 0x00173ea8: break 0, 7
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x00173eac: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00173eb0: sw $zero, 8($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00173eb4: sw $zero, 0xc($s1)
    /* mflo $s2 */                                              // 0x00173ec0
    *(uint32_t*)((s1) + 4) = s2;                                // 0x00173ec4: sw $s2, 4($s1)
    return;                                                     // 0x00173ed0: jr $ra
    sp = sp + 0x20;                                             // 0x00173ed4: addiu $sp, $sp, 0x20
}