void func_0012e028() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2;
    
    sp = sp + -0x20;                                            // 0x0012e028: addiu $sp, $sp, -0x20
    v0 = a1 << 0x10;                                            // 0x0012e02c: sll $v0, $a1, 0x10
    a3 = sp + 2;                                                // 0x0012e038: addiu $a3, $sp, 2
    a0 = v0 >> 0x10;                                            // 0x0012e040: sra $a0, $v0, 0x10
    func_00126330();  // 0x1261d0                                // 0x0012e048: jal 0x1261d0
    a1 = local_0;                                               // 0x0012e050: lh $a1, 0($sp)
    func_0012e028();  // 0x12e018                                // 0x0012e058: jal 0x12e018
    a2 = local_2;                                               // 0x0012e05c: lh $a2, 2($sp)
    a0 = *(int32_t*)((s0) + 0x88);                              // 0x0012e060: lw $a0, 0x88($s0)
    a1 = local_0;                                               // 0x0012e064: lh $a1, 0($sp)
    func_0012dea0();  // 0x12de90                                // 0x0012e068: jal 0x12de90
    a2 = local_2;                                               // 0x0012e06c: lh $a2, 2($sp)
    return;                                                     // 0x0012e078: jr $ra
    sp = sp + 0x20;                                             // 0x0012e07c: addiu $sp, $sp, 0x20
}