void func_00172cb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172cb8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 0x1b38);                            // 0x00172cd0: lw $v0, 0x1b38($s1)
    s0 = v0 << 3;                                               // 0x00172cd4: sll $s0, $v0, 3
    s0 = s0 - v0;                                               // 0x00172cd8: subu $s0, $s0, $v0
    s0 = s0 << 2;                                               // 0x00172cdc: sll $s0, $s0, 2
    s0 = s0 + v0;                                               // 0x00172ce0: addu $s0, $s0, $v0
    s0 = s0 << 2;                                               // 0x00172ce4: sll $s0, $s0, 2
    s0 = s1 + s0;                                               // 0x00172ce8: addu $s0, $s1, $s0
    s0 = s0 + 0x1150;                                           // 0x00172cec: addiu $s0, $s0, 0x1150
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00172cf0: lw $a0, 4($s0)
    v1 = *(int32_t*)(a0);                                       // 0x00172cf4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00172cf8: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00172cfc: jalr $v0
    a1 = 1;                                                     // 0x00172d00: addiu $a1, $zero, 1
    a2 = *(int32_t*)((s0) + 0xc);                               // 0x00172d08: lw $a2, 0xc($s0)
    v1 = 0x64;                                                  // 0x00172d10: addiu $v1, $zero, 0x64
    a1 = 0x46;                                                  // 0x00172d14: addiu $a1, $zero, 0x46
    v0 = a2 << 2;                                               // 0x00172d18: sll $v0, $a2, 2
    /* beqzl $v1, 0x172d24 */                                   // 0x00172d1c: beqzl $v1, 0x172d24
    /* break (trap) */                                          // 0x00172d20: break 0, 7
    v0 = v0 + a2;                                               // 0x00172d24: addu $v0, $v0, $a2
    v0 = v0 << 4;                                               // 0x00172d28: sll $v0, $v0, 4
    /* divide: v0 / v1 -> hi:lo */                              // 0x00172d2c: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x00172d30
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00172d34: slt $v0, $s2, $v0
    /* beqzl $v0, 0x172d58 */                                   // 0x00172d38: beqzl $v0, 0x172d58
    v0 = 1;                                                     // 0x00172d3c: addiu $v0, $zero, 1
    func_001752e8();  // 1752e8                                // 0x00172d40: jal 0x1752e8
    /* nop */                                                   // 0x00172d44: nop 
    v1 = (s2 < v0) ? 1 : 0;                                     // 0x00172d48: slt $v1, $s2, $v0
    if (v1 != 0) goto label_0x172d58;                           // 0x00172d4c: bnez $v1, 0x172d58
    v0 = 1;                                                     // 0x00172d54: addiu $v0, $zero, 1
label_0x172d58:
    return;                                                     // 0x00172d68: jr $ra
    sp = sp + 0x20;                                             // 0x00172d6c: addiu $sp, $sp, 0x20
}