void func_00172d70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172d70: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x1b7c);                            // 0x00172d80: lw $v1, 0x1b7c($s0)
    v0 = v1 << 3;                                               // 0x00172d84: sll $v0, $v1, 3
    v0 = v0 - v1;                                               // 0x00172d88: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00172d8c: sll $v0, $v0, 2
    v0 = v0 + v1;                                               // 0x00172d90: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x00172d94: sll $v0, $v0, 2
    s0 = s0 + v0;                                               // 0x00172d98: addu $s0, $s0, $v0
    s0 = s0 + 0x1150;                                           // 0x00172d9c: addiu $s0, $s0, 0x1150
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00172da0: lw $a0, 4($s0)
    v1 = *(int32_t*)(a0);                                       // 0x00172da4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00172da8: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00172dac: jalr $v0
    a1 = 1;                                                     // 0x00172db0: addiu $a1, $zero, 1
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00172db4: lw $a1, 0xc($s0)
    a0 = 0x64;                                                  // 0x00172db8: addiu $a0, $zero, 0x64
    v1 = a1 << 2;                                               // 0x00172dbc: sll $v1, $a1, 2
    /* beqzl $a0, 0x172dc8 */                                   // 0x00172dc0: beqzl $a0, 0x172dc8
    /* break (trap) */                                          // 0x00172dc4: break 0, 7
    v1 = v1 + a1;                                               // 0x00172dc8: addu $v1, $v1, $a1
    v1 = v1 << 4;                                               // 0x00172dd0: sll $v1, $v1, 4
    /* divide: v1 / a0 -> hi:lo */                              // 0x00172dd8: div $zero, $v1, $a0
    /* mflo $v1 */                                              // 0x00172ddc
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00172de0: slt $v0, $v0, $v1
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00172de4: sltiu $v0, $v0, 1
    return;                                                     // 0x00172de8: jr $ra
    sp = sp + 0x10;                                             // 0x00172dec: addiu $sp, $sp, 0x10
}