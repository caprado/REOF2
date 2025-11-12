void func_00177fd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00177fd8: addiu $sp, $sp, -0x10
    a3 = s0 + 0x14;                                             // 0x00177fe8: addiu $a3, $s0, 0x14
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00177fec: lw $v1, 0x10($s0)
    a2 = *(int32_t*)(a3);                                       // 0x00177ff0: lw $a2, 0($a3)
    /* beqzl $v1, 0x177ffc */                                   // 0x00177ff4: beqzl $v1, 0x177ffc
    /* break (trap) */                                          // 0x00177ff8: break 0, 7
    /* divide: a2 / v1 -> hi:lo */                              // 0x00177ffc: div $zero, $a2, $v1
    a2 = a2 + 1;                                                // 0x00178000: addiu $a2, $a2, 1
    /* mfhi $v0 */                                              // 0x00178004
    v0 = v0 << 2;                                               // 0x00178008: sll $v0, $v0, 2
    v0 = v0 + s0;                                               // 0x0017800c: addu $v0, $v0, $s0
    *(uint32_t*)((v0) + 0x18) = a1;                             // 0x00178010: sw $a1, 0x18($v0)
    func_00178100();  // 0x178098                                // 0x00178014: jal 0x178098
    *(uint32_t*)(a3) = a2;                                      // 0x00178018: sw $a2, 0($a3)
    *(uint32_t*)((s0) + 0x1a8) = v1;                            // 0x00178024: sw $v1, 0x1a8($s0)
    *(uint32_t*)((s0) + 0x1a4) = v1;                            // 0x00178028: sw $v1, 0x1a4($s0)
    return;                                                     // 0x00178030: jr $ra
    sp = sp + 0x10;                                             // 0x00178034: addiu $sp, $sp, 0x10
}