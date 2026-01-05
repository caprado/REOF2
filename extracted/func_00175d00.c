void func_00175d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00175d00: addiu $sp, $sp, -0x30
    a1 = 6;                                                     // 0x00175d04: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x00175d14: jal 0x1752e8
    if (v0 == 0) goto label_0x175d6c;                           // 0x00175d20: beqz $v0, 0x175d6c
    a1 = 0x33;                                                  // 0x00175d24: addiu $a1, $zero, 0x33
    func_001752e8();  // 1752e8                                // 0x00175d28: jal 0x1752e8
    /* nop */                                                   // 0x00175d2c: nop 
    a1 = a0 + 0xcc0;                                            // 0x00175d38: addiu $a1, $a0, 0xcc0
    if (s1 == 0) goto label_0x175d6c;                           // 0x00175d40: beqz $s1, 0x175d6c
    a3 = sp + 4;                                                // 0x00175d44: addiu $a3, $sp, 4
    func_00175c28();  // 175c28                                // 0x00175d48: jal 0x175c28
    /* nop */                                                   // 0x00175d4c: nop 
    v1 = local_4;                                               // 0x00175d50: lw $v1, 4($sp)
    v0 = local_0;                                               // 0x00175d54: lw $v0, 0($sp)
    /* beqzl $v1, 0x175d60 */                                   // 0x00175d58: beqzl $v1, 0x175d60
    /* break (trap) */                                          // 0x00175d5c: break 0, 7
    /* divide: v0 / v1 -> hi:lo */                              // 0x00175d60: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x00175d64
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x00175d68: slt $v0, $s1, $v0
label_0x175d6c:
    return;                                                     // 0x00175d78: jr $ra
    sp = sp + 0x30;                                             // 0x00175d7c: addiu $sp, $sp, 0x30
}