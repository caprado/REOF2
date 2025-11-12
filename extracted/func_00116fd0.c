void func_00116fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)((a0) + 0x24);                              // 0x00116fd0: lw $a1, 0x24($a0)
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x00116fd4: lw $v1, 0x18($a0)
    /* divide: a1 / v1 -> hi:lo */                              // 0x00116fd8: div $zero, $a1, $v1
    /* beqzl $v1, 0x116fe4 */                                   // 0x00116fdc: beqzl $v1, 0x116fe4
    /* break (trap) */                                          // 0x00116fe0: break 0, 7
    a1 = *(int32_t*)((a0) + 0x14);                              // 0x00116fe4: lw $a1, 0x14($a0)
    /* mfhi $v0 */                                              // 0x00116fe8
    v1 = v0 + 1;                                                // 0x00116fec: addiu $v1, $v0, 1
    v0 = v0 << 6;                                               // 0x00116ff0: sll $v0, $v0, 6
    *(uint32_t*)((a0) + 0x24) = v1;                             // 0x00116ff4: sw $v1, 0x24($a0)
    return;                                                     // 0x00116ff8: jr $ra
    v0 = a1 + v0;                                               // 0x00116ffc: addu $v0, $a1, $v0
}